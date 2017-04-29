%{
  #include <stdlib.h>
  #include "instr.tab.h"

  int linea = 1;
%}

ALPHA                   [A-Za-z_]
ALPHADEC                [A-Za-z_0-9]

%%

"break"                                  { printf("linea %d, palabra reservada: %s\n", linea, yytext); return(BREAK); }
"continue"                               { printf("linea %d, palabra reservada: %s\n", linea, yytext); return(CONTINUE); }
"else"                                   { printf("linea %d, palabra reservada: %s\n", linea, yytext); return(ELSE); }
"for"			                 { printf("linea %d, palabra reservada: %s\n", linea, yytext); return(FOR); }
"if"                                     { printf("linea %d, palabra reservada: %s\n", linea, yytext); return(IF); }

"EXPRESION"                              { printf("linea %d, expresion\n", linea); return(EXPR); }

{ALPHA}{ALPHADEC}*                       { printf("linea %d, identificador: %s\n", linea, yytext); return(IDENTIFICADOR); }

"{"                                      |
"}"                                      |
"("                                      |
")"                                      |
","                                      |
";"                                      { printf("linea %d, delimitador: %s\n", linea, yytext); return(yytext[0]); }

"="                                      { printf("linea %d, operador: %s\n", linea, yytext); return (yytext[0]); }

[ \t]                                    ;
\n                                       linea++;
.                                        { printf ("linea %d, error\n",linea); exit(0); }


%%
