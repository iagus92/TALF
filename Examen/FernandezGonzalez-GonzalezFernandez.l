/* Declaraciones, variables locales (copia directa a lex.yy.c) */ 
%{ 

#include <stdio.h>   
char word[255];
int longitud = 0;
float suma=0;

%}
/* Definiciones */

%x WORD
WORD [^[:digit:]\/ \.,\(\)\t:;]+
REALES "-"?[0-9]*(\.[0-9]+)?([Ee][\-|\+]?[0-9]+|"."[0-9]+([Ee]"-"?[0-9]+)?)? 

/* Reglas y acciones (texto que no encaja, directo a la salida) */
%% 

^"//".*\n
{REALES}		{
					printf("%d/%s/ ",yyleng,yytext);
					suma += atof(yytext);		
					if(yyleng > longitud){
						strcpy(word,yytext);
						longitud = yyleng;				
					}
				}
{WORD}		{
					printf("%d/%s/ ",yyleng,yytext);
					if(yyleng > longitud){
						strcpy(word,yytext);
						longitud = yyleng;				
					}
				}

.\n			ECHO;

%% 
/* Rutinas de usuario (copia directa a lex.yy.c) */

int main(int argc, char *argv[]) 
{	
	yyin = fopen( argv[1], "r" );

   while (yylex()); 
printf("La palabra más larga es \"%s\", con longitud %d\n",word,longitud);
printf("La suma de los reales es %f\n",suma);	
} 


