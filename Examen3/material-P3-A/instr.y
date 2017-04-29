%{
  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1
  
%}

%token BREAK CONTINUE ELSE EXPR FOR IDENTIFICADOR IF

%%


%%

int yyerror (char *s) { printf ("%s\n", s); }

int yywrap() { return 1; }

int main(int argc, char *argv[]) {

  yydebug = 0;

  if (argc < 2) {
    printf("Uso: ./instr NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }


