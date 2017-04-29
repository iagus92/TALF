/* Declaraciones, variables locales (copia directa a lex.yy.c) */ 
%{ 
#include <stdio.h>   

int mayus = 0, minus = 0, ambas = 0, enteros = 0, reales = 0, suma_enteros = 0; 
float suma_reales = 0; 
%}
/* Definiciones */

ENTEROS	[0-9]
MAYUS		[A-Z]
MINUS		[a-z]
REALES	[0-9]*([Ee]"-"?[0-9]+|"."[0-9]+([Ee]"-"?[0-9]+)?)

/* Reglas y acciones (texto que no encaja, directo a la salida) */
%% 

{MAYUS}+		mayus++;
{MINUS}+		minus++;
[A-Za-z]+ 	ambas++;
{ENTEROS}+ 	enteros++; suma_enteros += atoi(yytext);
{REALES} 	reales++; suma_reales += atof(yytext);
[ \n]*		

%% 
/* Rutinas de usuario (copia directa a lex.yy.c) */

int main(int argc, char **argv) 
{	
	--argc;
	if ( argc > 0 )
		yyin = fopen( argv[1], "r" );
	else
		yyin = stdin;

   while (yylex()); 
   printf("Mayúsculas: %d\nMinusculas: %d\nMayus/minus: %d\n", mayus, minus, ambas); 
	printf("Enteros: %d\tSuma= %d\nReales: %d\tSuma= %g\n", enteros, suma_enteros, reales, suma_reales);
	
} 


