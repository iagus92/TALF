/* Declaraciones, variables locales (copia directa a lex.yy.c) */ 
%{ 

#include <stdio.h>
#include <string.h>

int i = 1;

%}
/* Definiciones de estados y reglas */

%x CAD
%x CAR
%x COM

SPC [\t ]*
RESERVADA (?i:booleano|bucle|caracter|casos|comienzo|constante|cuando|de|devolver|en|entero|entonces|es|exportar|declaracion|descendente|fin|funcion|mientras|modulo|otro|para|procedimiento|rango|real|referencia|registro|repetir|salir|si|sino|subtipo|tabla|tipo|vacia|valor)
ENTEROS ([0-9]+)|(?i:%x[0-9A-F]+)|(?i:%o[0-7]+)
PENTERA ([0-9]*)|(?i:%x[0-9A-F]*)|(?i:%o[0-7]*)
PIMAGINARIA ([0-9]+)|(?i:[0-9A-F]+)|([0-7]+)
REALES ({PENTERA}(\.{PIMAGINARIA}+)?(^([+-]?([0-9]*)|((?i:%x[0-9A-F]+)?)|((?i:%o[0-7]+)?))?)?)
CARACTERES [^\n\%\']|(%\'|%\"|%%|%n|%r|%t)|([0-1]?[0-9]{1,2})|(2[0-5]{2})|(?i:%o[1-3]?[0-7]{1,2})|(?i:%x[0-9A-F]{1,2})
DELIMITADORES [\(\):;\,\|]|(=>)|(\.\.)
OPERADORES [\+\-\*\\/\[\]\.\<\>=~]|(:=)|(\*\*)|(\+\+)|(\-\-)|(<-)|(->)|(<=)|(>=)|(<>)|(\/\\)|(\\\/)
IDENTIFICADORES [A-Za-z_][[:alnum:]_]*

/* Reglas y acciones (texto que no encaja directo a la salida) */
%% 

^{RESERVADA}					fprintf(yyout,"Linea %d, palabra reservada: %s\n",i,yytext);
{RESERVADA}						fprintf(yyout,"Linea %d, palabra reservada: %s\n",i,yytext);
{SPC}+{RESERVADA}				yyless(1);

('%'|''')						printf("Error en linea %d: %s\n",i,yytext);				
'									BEGIN(CAR);
<CAR>{CARACTERES}					fprintf(yyout,"Linea %d, caracter: '%s'\n",i,yytext);	
<CAR>[^\']*							printf("Error en linea %d: %s\n",i,yytext);				
<CAR>'							BEGIN(0);

\"									BEGIN(CAD);fprintf(yyout,"Linea %d,cadena: %s",i,yytext);
<CAD>%\n									fprintf(yyout,"%s",yytext);i++;
<CAD>(%\'|%\"|%%|%n|%r|%t)*		|
<CAD>[^\n\%\"]*						fprintf(yyout,"%s",yytext);
<CAD>\"							fprintf(yyout,"%s\n",yytext);BEGIN(0);
\".*\"							fprintf(yyout,"Linea %d, cadena: %s\n",i,yytext);

\%\%.*							
\{									BEGIN(COM);
<COM>\n								i++;
<COM>[^\}\n]*						
<COM>\}							BEGIN(0);

\<\<[^\n\<\>]*\>\>			fprintf(yyout,"Linea %d, modulo: %s\n",i,yytext);

^{IDENTIFICADORES}			fprintf(yyout,"Linea %d, identificador: %s\n",i,yytext);	
^{SPC}+{IDENTIFICADORES}	yyless(1);	
{IDENTIFICADORES}				fprintf(yyout,"Linea %d, identificador: %s\n",i,yytext);	
{SPC}+{IDENTIFICADORES}		yyless(1);	
				
{OPERADORES}					fprintf(yyout,"Linea %d, operador: %s\n",i,yytext);					

{DELIMITADORES}				fprintf(yyout,"Linea %d, delimitador: %s\n",i,yytext);	

{ENTEROS}$						|
{ENTEROS}" "					fprintf(yyout,"Linea %d, ctc entera: %s\n",i,yytext);
{REALES}							fprintf(yyout,"Linea %d, ctc real: %s\n",i,yytext);				
	
(?i:[0-9%áéíóúñ][a-z%áéíóúñ]*)+	printf("Error en linea %d: %s\n",i,yytext);					

{SPC}
\n									i++;

%% 
/* Rutinas de usuario (copia directa a lex.yy.c) */

int main(int argc, char *argv[]) {
    
    yyin = fopen( argv[1], "r"); // Define el argumento 1 como fichero de entrada (por defecto stdin)
    yyout = fopen(argv[2], "w"); // Define el argumento 2 como fichero de salida (por defecto stout)
    
    yylex();
    
    fclose(yyin);
    fclose(yyout);
}
