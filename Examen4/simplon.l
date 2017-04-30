%{
#include <stdio.h>
#include "simplon.tab.h"

int linea = 1;
%}

%x COM
%x CAD
%x CADERR

ESC ("%'"|"%\""|"%%"|"%n"|"%r"|"%t")
CARACTERES {ESC}|([0-1]?[0-9]{1,2})|(2[0-4][0-9])|(25[0-5])|(?i:%o[1-3]?[0-7]{1,2})|(?i:%x[0-9A-F]{1,2})
ENTEROS ([0-9]+)|(?i:%x[0-9A-F]+)|(?i:%o[0-7]+)
FRACCIONARIOS ([0-9]*\.[0-9]+)|(?i:%x[0-9A-F]*\.[0-9A-F]+)|(?i:%o[0-7]*\.[0-7]+)
MANTISA (({ENTEROS}|{FRACCIONARIOS})(^[+-]?[0-9]+))
REALES ({FRACCIONARIOS}|{MANTISA})
IDENTIFICADORES ([A-Za-z_][[:alnum:]_]*)
DELIMITADORES ("("|")"|"|"|":"|";"|",")
OPERADORES ("+"|"-"|"*"|"/"|"."|"["|"]"|">"|"<"|"="|"~")

%%

 /* Caracteres */
\'[^\n\'%]\'						{ printf("linea %d, caracter: %s\n", linea, yytext); return(CTC_CARACTER); }
\'{CARACTERES}\' 				{ printf("linea %d, caracter: %s\n", linea, yytext); return(CTC_CARACTER); }
\'(\'|[^\']*)\' 				printf ("linea %d, ERROR: %s\n",linea,yytext);

 /* Cadenas */
\" 										{ printf("linea %d, cadena: ", linea); yymore(); BEGIN (CAD); }
<CAD>[^\n\"%]|{ESC}*	{ yymore(); }
<CAD>"%"\n						{ yymore(); linea++; }
<CAD>"%"							BEGIN (CADERR);
<CAD>\n								{ linea++; BEGIN (CADERR); }
<CAD>\"           		{ printf("%s\n", yytext); BEGIN 0; return (CTC_CADENA); }
<CADERR>\n			linea++;
<CADERR>[^\"]*	;
<CADERR>\"			{ printf ("\nlinea %d, ERROR en cadena\n",linea); BEGIN 0; }

 /* Modulos */
\<\<[^\n\<\>]+\>\>	{ printf("linea %d, librería: %s\n", linea, yytext); return (NOMBRE_MODULO); }
\<\<[\<\>]*\>\>   	printf ("linea %d, ERROR: %s\n",linea,yytext);
\<\<\n\>\>  			  { printf ("linea %d, ERROR\n",linea); linea++; }

 /* Palabras reservadas */
(?i:booleano)       { printf("linea %d, palabra reservada: %s\n", linea, yytext); return(BOOLEANO); }
(?i:bucle)       		{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(BUCLE); }
(?i:caracter)       { printf("linea %d, palabra reservada: %s\n", linea, yytext); return(CARACTER); }
(?i:casos)       		{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(CASOS); }
(?i:comienzo)       { printf("linea %d, palabra reservada: %s\n", linea, yytext); return(COMIENZO); }
(?i:constante)      { printf("linea %d, palabra reservada: %s\n", linea, yytext); return(CONSTANTE); }
(?i:cuando)       	{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(CUANDO); }
(?i:de)       			{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(DE); }
(?i:devolver)       { printf("linea %d, palabra reservada: %s\n", linea, yytext); return(DEVOLVER); }
(?i:en)       			{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(EN); }
(?i:entero)       	{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(ENTERO); }
(?i:entonces)       { printf("linea %d, palabra reservada: %s\n", linea, yytext); return(ENTONCES); }
(?i:es)       			{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(ES); }
(?i:exportar)       { printf("linea %d, palabra reservada: %s\n", linea, yytext); return(EXPORTAR); }
(?i:declaracion)    { printf("linea %d, palabra reservada: %s\n", linea, yytext); return(DECLARACION); }
(?i:descendente)    { printf("linea %d, palabra reservada: %s\n", linea, yytext); return(DESCENDENTE); }
(?i:fin)       			{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(FIN); }
(?i:funcion)    	  { printf("linea %d, palabra reservada: %s\n", linea, yytext); return(FUNCION); }
(?i:mientras)       { printf("linea %d, palabra reservada: %s\n", linea, yytext); return(MIENTRAS); }
(?i:modulo)     	  { printf("linea %d, palabra reservada: %s\n", linea, yytext); return(MODULO); }
(?i:otro)       		{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(OTRO); }
(?i:para)       		{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(PARA); }
(?i:procedimiento)	{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(PROCEDIMIENTO); }
(?i:rango)       		{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(RANGO); }
(?i:real)       		{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(REAL); }
(?i:referencia)     { printf("linea %d, palabra reservada: %s\n", linea, yytext); return(REFERENCIA); }
(?i:registro)       { printf("linea %d, palabra reservada: %s\n", linea, yytext); return(REGISTRO); }
(?i:repetir)       	{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(REPETIR); }
(?i:salir)      		{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(SALIR); }
(?i:si)       			{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(SI); }
(?i:sino)       		{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(SINO); }
(?i:subtipo)       	{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(SUBTIPO); }
(?i:tabla)       		{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(TABLA); }
(?i:tipo)       		{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(TIPO); }
(?i:vacia)       		{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(VACIA); }
(?i:valor)       		{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(VALOR); }
(?i:falso)      		{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(FALSO); }
(?i:verdadero)   		{ printf("linea %d, palabra reservada: %s\n", linea, yytext); return(VERDADERO); }

 /* Identificadores */
{IDENTIFICADORES}		{ printf("linea %d, identificador: %s\n", linea, yytext); return (IDENTIFICADOR); }	

 /* Numeros */
{ENTEROS}		{ printf("linea %d, ctc entera: %s\n", linea, yytext); return(CTC_ENTERA); }
{REALES}		{ printf("linea %d, ctc real: %s\n", linea, yytext); return(CTC_REAL); }

 /* Operadores */
".."							{ printf("linea %d, operador: %s\n", linea, yytext); return(PUNTOS); }
"=>"							{ printf("linea %d, operador: %s\n", linea, yytext); return(FLECHA); }
{OPERADORES}			{ printf("linea %d, operador: %s\n", linea, yytext); return(yytext[0]); }
"\\"					{ printf("linea %d, operador: %s\n", linea, yytext); return(RESTO); }

 /* Delimitadores */
":="						{ printf("linea %d, delimitador: %s\n", linea, yytext); return(ASIGNACION); }
"<-"						{ printf("linea %d, delimitador: %s\n", linea, yytext); return(DESP_IZDA); }
"->"						{ printf("linea %d, delimitador: %s\n", linea, yytext); return(DESP_DCHA); }
">="						{ printf("linea %d, delimitador: %s\n", linea, yytext); return(GEQ); }
"<="						{ printf("linea %d, delimitador: %s\n", linea, yytext); return(LEQ); }
"<>"						{ printf("linea %d, delimitador: %s\n", linea, yytext); return(NEQ); }
"/\\"						{ printf("linea %d, delimitador: %s\n", linea, yytext); return(AND); }
"\\/"						{ printf("linea %d, delimitador: %s\n", linea, yytext); return(OR); }
"**"						{ printf("linea %d, delimitador: %s\n", linea, yytext); return(POTENCIA); }
"--"						{ printf("linea %d, delimitador: %s\n", linea, yytext); return(DEC); }
"++" 						{ printf("linea %d, delimitador: %s\n", linea, yytext); return(INC); }
{DELIMITADORES}	{ printf("linea %d, delimitador: %s\n", linea, yytext); return(yytext[0]); }

 /* Comentarios */
"{"							BEGIN (COM);
<COM>[^"}"\n]*	;
<COM>\n      		linea++;
<COM>"}" 				BEGIN 0;
"%%"[^\n]*			;

 /* Espacios, saltos de linea y errores */
"%"[^\n ]+ 	printf ("linea %d, ERROR: %s\n",linea,yytext);
[ \t]   		;
\n      		linea++;
.       		printf ("linea %d, ERROR: %s\n",linea,yytext);

%%
