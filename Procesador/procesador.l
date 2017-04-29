/* Declaraciones, variables locales (copia directa a lex.yy.c) */ 
%{ 

#include <stdio.h>
#include <string.h>
#include "diccionario.h"

DICCIONARIO diccionario;
char var[255];

%}
/* Definiciones de estados y reglas */

%x COMMENT 
%x DEFINE 
%x VALUE 

SPC			[ \t] 
IDENTIFIER	[[:alpha:]_][[:alnum:]_]*

/* Reglas y acciones (texto que no encaja directo a la salida) */
%% 

{SPC}*"/*"				BEGIN COMMENT; // Elimina comentarios entre /* */
<COMMENT>"*"?[^"*/"]*     
<COMMENT>"*/"{SPC}*\n	BEGIN 0; //( Equivalente a BEGIN (INITIAL) )

^{SPC}*"//"[[:alnum:] \t]*\n // Elimina comenarios que emiezan por // al inicio de linea
{SPC}*"//"[[:alnum:] \t]* // Elimina comentarios // en lineas con código

"#define "{SPC}*		BEGIN DEFINE; // Guarda en el diccionario los defines como variable->valor. Si encuentra uno repetido termina
<DEFINE>{IDENTIFIER}	{ 
                        ENTRADA* entrada = buscar_diccionario(&diccionario, yytext);
                        if(entrada != NULL){ 
                            printf("Identificador repetido: %s\n", yytext);
                            exit(0);
                        }else
                            strcpy(var, yytext);
                        }
<DEFINE>{SPC}+			BEGIN VALUE;
<VALUE>[0-9]+		    { 
                        insertar_diccionario(&diccionario, var, yytext);
                        }		
<VALUE>\n               BEGIN 0;

"#include ".+\n // Elimina includes

{IDENTIFIER}			{ // Si encuentra una variable del diccionario la sustituye por su valor
                        ENTRADA* entrada = buscar_diccionario(&diccionario, yytext);
                        if(entrada != NULL){
                            fprintf(yyout, "%s", entrada->valor);
                        }else
                            fprintf(yyout, "%s", yytext);
                        }

\"[^"]*\"               fprintf(yyout,"%s",yytext); // No elimina espacios en strings
^{SPC}+                 fprintf(yyout,"%s",yytext); // No elimina espacios/tabs al inicio de linea (para mantener código tabulado)
{SPC}+$ // Elimina uno o más espacios/tabs a final de linea
{SPC}+                  fputc(' ',yyout); // Sustituye varios espacios/tabs por uno
^({SPC}*\n)+            fputc('\n',yyout); // Sustituye varias lineas en blanco por una

    
%% 
/* Rutinas de usuario (copia directa a lex.yy.c) */

int main(int argc, char *argv[]) {
    
    yyin = fopen( argv[1], "r"); // Define el argumento 1 como fichero de entrada (por defecto stdin)
    yyout = fopen(argv[2], "w"); // Define el argumento 1 como fichero de salida (por defecto stout)
    
    // Inicializa el dicccionario y al final lo vacía
    inicializar_diccionario(&diccionario);
    yylex();
    liberar_diccionario(&diccionario);
    
    fclose(yyin);
    fclose(yyout);
}
