                              
%{

  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1

%}

%token BOOLEANO BUCLE CARACTER CASOS COMIENZO CONSTANTE CUANDO DE DEVOLVER
%token EN ENTERO ENTONCES ES EXPORTAR DECLARACION DESCENDENTE FALSO FIN
%token FUNCION MIENTRAS MODULO OTRO PARA PROCEDIMIENTO RANGO REAL REFERENCIA
%token REGISTRO REPETIR SALIR SI SINO SUBTIPO TABLA TIPO VACIA VALOR VERDADERO

%token CTC_CARACTER CTC_CADENA IDENTIFICADOR CTC_ENTERA CTC_REAL NOMBRE_MODULO

%token PUNTOS RESTO ASIGNACION FLECHA POTENCIA INC DEC DESP_IZDA
%token DESP_DCHA LEQ GEQ NEQ AND OR

%%

/************/
/* programa */
/************/

programa
    : modulos exportaciones declaraciones_subprograma { printf ("EXITO: programa -> export decls_subpr\n"); }
    ;

modulos
    :                  { printf ("  modulos -> epsilon\n"); }    
    | modulos modulo   { printf ("  modulos -> modulos modulo\n"); }
    ;

modulo
    : MODULO NOMBRE_MODULO ';'   { printf ("  modulo -> MODULO NOMBRE_MODULO ';'\n"); }
    ;

exportaciones
    :                                { printf ("  export -> epsilon\n"); }
    | EXPORTAR identificadores ';'   { printf ("  export -> EXPORTAR ids ';'\n"); }
    ;

identificadores
    : IDENTIFICADOR                       { printf ("  ids -> ID\n"); }
    | identificadores ',' IDENTIFICADOR   { printf ("  ids -> id ',' ID\n"); }
    ;

/*******************************/
/* declaracion de subprogramas */
/*******************************/

declaraciones_subprograma
    : declaracion_subprograma							{ printf ("  subprograma -> declar_subpr\n"); }
    | declaraciones_subprograma declaracion_subprograma 	{ printf ("  subprograma -> declars_subpr decla_subpr\n"); }
    ;

declaracion_subprograma	
		: especificacion_subprograma cuerpo_subprograma ';'	{	printf ("  declaracion subpr -> esp_subpr cuerpo_subpr\n"); }
		;

especificacion_subprograma
		: PROCEDIMIENTO IDENTIFICADOR parametrizacion   						{ printf ("  espec subprograma -> PROC ID param\n"); }
		| FUNCION IDENTIFICADOR parametrizacion DEVOLVER especificacion_tipo 		{ printf ("  espec subprograma -> FUNCION ID param DEVOLVER espec_tipo\n"); }
		;

parametrizacion
		:									{ printf ("  parametrizacion -> epsilon\n"); }
		| '(' lista_declaracion_parametros ')'   	{ printf ("  parametrizacion ->   '(' lista_params ')'\n"); }
		;

lista_declaracion_parametros 
		: declaracion_parametros										{ printf ("  lista declaracion param -> epsilon\n"); }
		|	lista_declaracion_parametros ';' declaracion_parametros		{ printf ("  lista declaracion param -> lista_params ';' declar_params\n"); }
		;

declaracion_parametros 
		:	identificadores ':' modo especificacion_tipo	{ printf ("  declaracion param -> modo espec_tipo\n"); }
		;

modo
		:	VALOR    	{ printf ("  modo -> VALOR\n"); }
		| REFERENCIA	{ printf ("  modo -> REFER\n"); }
		;

cuerpo_subprograma
		:														{ printf ("  cuerpo subprograma -> epsilon\n"); }
		| ES COMIENZO bucle_instruccion FIN IDENTIFICADOR					{ printf ("  cuerpo subprograma -> ES declar COMIENZO instruccion FIN ID\n"); }		
		| ES bucle_declaracion COMIENZO bucle_instruccion FIN IDENTIFICADOR	{ printf ("  cuerpo subprograma -> ES declar COMIENZO instruccion FIN ID\n"); }
		;

declaracion
		: declaracion_objeto  		{ printf ("  declaracion -> declar_objeto\n"); } 
		| declaracion_tipo   		{ printf ("  declaracion -> declar_tipo\n"); }
		| declaracion_subtipo 		{ printf ("  declaracion -> declar_subtipo\n"); }
		| declaracion_subprograma 	{ printf ("  declaracion -> declar_subprog\n"); }	
		;

bucle_declaracion
		: declaracion 					{ printf ("  bucle declaracion-> declaracion\n"); }
		| bucle_declaracion declaracion 	{ printf ("  bucle declaracion-> bucle_declaracion declaracion\n"); }
		;

/**************************/
/* declaracion de objetos */
/**************************/

declaracion_objeto 
		: identificadores ':' CONSTANTE tipo_escalar ASIGNACION expresion ';'	{ printf ("  declaracion_obj -> ids ':' CONSTANTE tipo escalar ':=' expresion ';'\n"); }
		| identificadores ':' tipo_escalar ASIGNACION expresion ';' 		{ printf ("  declaracion_obj -> ids ':' tipo escalar ':=' expresion ';'\n"); }
		| identificadores ':' tipo_compuesto ';'						{ printf ("  declaracion_obj -> ids ':' tipo compuesto ';'\n"); }
		| identificadores ':' nombre_tipo ';'							{ printf ("  declaracion_obj -> ids ':' nombre tipo ';'\n"); }
		;

/************************/
/* declaracion de tipos */
/************************/

tipo_escalar
		: BOOLEANO    { printf ("  tipo escalar -> BOOLEANO\n"); }
		| CARACTER    { printf ("  tipo escalar -> CARACTER\n"); }
		| ENTERO      { printf ("  tipo escalar -> ENTERO\n"); }
		| REAL        { printf ("  tipo escalar -> REAL\n"); }
		;

declaracion_tipo
		: TIPO nombre_tipo ES tipo_compuesto ';' 	{ printf ("  declaracion tipo -> TIPO nombre_tipo ES tipo_compuesto\n"); }
		;

tipo_compuesto
		: tipo_tabla		{ printf ("  tipo compuesto -> tipo_tabla\n"); }
		| tipo_registro 	{ printf ("  tipo compuesto -> tipo_registro\n"); }
		;

tipo_tabla
		: TABLA '(' expresion PUNTOS expresion ')' DE especificacion_tipo 	{ printf ("  tipo tabla -> TABLA '(' expresion PUNTOS expresion ')' DE especificacion_tipo \n"); }
		;

especificacion_tipo
		:	tipo_compuesto  	{ printf ("  especificacion tipo -> tipo_compuesto\n"); }
		| nombre_tipo 			{ printf ("  especificacion tipo -> nombre_tipo\n"); }
		;

tipo_registro
		: REGISTRO campo FIN REGISTRO { printf ("  tipo registro -> REGISTRO campo FIN REGISTRO\n"); }
		;

campo
		: identificadores ':' especificacion_tipo ';' 		{ printf ("  campo -> identificadores ':' especificacion_tipo ';'\n"); }
		| campo identificadores ':' especificacion_tipo ';' 	{ printf ("  campo -> campo identificadores ':' especificacion_tipo ';'\n"); }
		;

declaracion_subtipo
		: SUBTIPO nombre_tipo ES definicion_subtipo ';' { printf ("  declaracion subtipo -> SUBTIPO nombre_tipo ES definicion_subtipo ';'\n"); }
		;

definicion_subtipo		
		: nombre_tipo restriccion  { printf ("  definicion subtipo -> nombre_tipo restriccion\n"); }
		;

restriccion
		: RANGO expresion PUNTOS expresion	{ printf ("  restriccion -> RANGO expresion PUNTOS expresion\n"); }
		| restriccion expresion			{ printf ("  restriccion -> restriccion expresion\n"); }
		;

nombre_tipo
		: IDENTIFICADOR 	{ printf ("  nombre tipo -> IDENTIFICADOR\n"); }
		| tipo_escalar 	{ printf ("  nombre tipo -> tipo_escalar\n"); }
		;

/*****************/
/* instrucciones */
/*****************/

instruccion
		: VACIA ';' 				{ printf ("  instruccion -> VACIA ';'\n"); }
		| instruccion_asignacion 	{ printf ("  instruccion -> instruccion_asignacion\n"); }
		| instruccion_salir 		{ printf ("  instruccion -> instruccion_salir\n"); }
		| instruccion_bloque 		{ printf ("  instruccion -> instruccion_bloque\n"); }
		| instruccion_devolver 		{ printf ("  instruccion -> instruccion_devolver\n"); }
		| instruccion_llamada		{ printf ("  instruccion -> instruccion_llamada\n"); }
		| instruccion_si			{ printf ("  instruccion -> instruccion_si\n"); }
		| instruccion_casos			{ printf ("  instruccion -> instruccion_casos\n"); }
		| instruccion_bucle			{ printf ("  instruccion -> instruccion_bucle\n"); }
		; 

bucle_instruccion
		: instruccion 					{ printf ("  bucle instruccion-> instruccion\n"); }
		| bucle_instruccion instruccion 	{ printf ("  bucle instruccion-> bucle_instruccion instruccion\n"); }
		;

instruccion_asignacion
		: nombre ASIGNACION expresion ';' 	{ printf ("  instruccion asignacion -> nombre ':=' expresion ';'\n"); }
		;

instruccion_salir
		: SALIR ';'								{ printf ("  instruccion salir-> SALIR ';'\n"); }
		| SALIR DE IDENTIFICADOR ';'   				{ printf ("  instruccion salir-> SALIR DE IDENTIFICADOR ';' \n"); }
		| SALIR CUANDO expresion ';'    				{ printf ("  instruccion salir-> SALIR CUANDO expresion ';'\n"); }
		| SALIR DE IDENTIFICADOR CUANDO expresion ';'	{ printf ("  instruccion salir-> SALIR DE IDENTIFICADOR CUANDO expresion ';'\n"); }
		;

instruccion_bloque
		: DECLARACION bucle_declaracion COMIENZO bucle_instruccion FIN ';' 	{ printf ("  instruccion bloque-> DECLARACION bucle_declaracion COMIENZO bucle_instruccion FIN ';'\n"); }
		;

instruccion_devolver
		: DEVOLVER expresion ';'	{ printf ("  instruccion devolver-> DEVOLVER expresion ';'\n"); }
		;

instruccion_llamada
		: llamada_subprograma ';' 	{ printf ("  instruccion llamada-> llamada_subprograma ';'\n"); }
		;

llamada_subprograma
		: IDENTIFICADOR '(' ')'			{ printf ("  llamada subprograma-> IDENTIFICADOR '(' ')'\n"); }
		| IDENTIFICADOR '(' parametros ')'	{ printf ("  llamada subprograma-> IDENTIFICADOR '(' parametros ')'\n"); }
		;

parametros
		: expresion 				{ printf ("  parametros-> expresion\n"); }
		| parametros ',' expresion	{ printf ("  parametros-> parametros ',' expresion\n"); }
		;

instruccion_si
		: SI expresion ENTONCES bucle_instruccion FIN SI ';' 						{ printf ("  instruccion si-> SI expresion ENTONCES bucle_instruccion FIN SI ';'\n"); } 
		| SI expresion ENTONCES bucle_instruccion SINO bucle_instruccion FIN SI ';' 	{ printf ("  instruccion si-> SI expresion ENTONCES bucle_instruccion SINO bucle_instruccion FIN SI ';'\n"); }
		;

instruccion_casos
		: CASOS expresion ES caso FIN CASOS ';' { printf ("  instruccion casos -> CASOS expresion ES caso FIN CASOS ';'\n"); }
		;

caso	
		: CUANDO entradas FLECHA bucle_instruccion 			{ printf ("  caso -> CUANDO entradas '=>' bucle_instruccion\n"); }
		| caso CUANDO entradas FLECHA bucle_instruccion 	{ printf ("  caso -> caso CUANDO entradas '=>' bucle_instruccion\n"); }
		;

entradas
		: entrada 			{ printf ("  entrada -> entrada\n"); }
		| entradas '|' entrada	{ printf ("  entrada -> entradas '|' entrada\n"); }
		;

entrada
		: expresion 				{ printf ("  entrada -> expresion\n"); }
		| expresion PUNTOS expresion 	{ printf ("  entrada -> expresion PUNTOS expresion\n"); }
		| OTRO 					{ printf ("  entrada -> OTRO\n"); }
		;

instruccion_bucle
		: clausula_iteracion bucle_base ';'							{ printf ("  instruccion bucle -> clausula_iteracion bucle_base ';'\n"); }
		| IDENTIFICADOR ':' clausula_iteracion bucle_base ';'				{ printf ("  instruccion bucle -> IDENTIFICADOR ':' clausula_iteracion bucle_base ';'\n"); }
		| clausula_iteracion bucle_base IDENTIFICADOR ';'					{ printf ("  instruccion bucle -> clausula_iteracion bucle_base IDENTIFICADOR ';'\n"); }
		| IDENTIFICADOR ':' clausula_iteracion bucle_base IDENTIFICADOR ';'	{ printf ("  instruccion bucle -> IDENTIFICADOR ':' clausula_iteracion bucle_base IDENTIFICADOR ';'\n"); }
		;

clausula_iteracion
		: MIENTRAS expresion											{ printf ("  clausula iteracion -> MIENTRAS expresion\n"); }
		| PARA IDENTIFICADOR EN IDENTIFICADOR								{ printf ("  clausula iteracion -> PARA IDENTIFICADOR EN IDENTIFICADOR\n"); }
		| REPETIR IDENTIFICADOR EN expresion PUNTOS expresion 					{ printf ("  clausula iteracion -> REPETIR IDENTIFICADOR EN expresion PUNTOS expresion\n"); }
		| REPETIR IDENTIFICADOR EN DESCENDENTE expresion PUNTOS expresion		{ printf ("  clausula iteracion -> REPETIR IDENTIFICADOR EN DESCENDENTE expresion PUNTOS expresion\n"); }
		| REPETIR IDENTIFICADOR EN expresion PUNTOS expresion PUNTOS expresion	{ printf ("  clausula iteracion -> REPETIR IDENTIFICADOR EN expresion PUNTOS expresion PUNTOS expresion\n"); }
		| REPETIR IDENTIFICADOR EN DESCENDENTE expresion PUNTOS expresion PUNTOS expresion	{ printf ("  clausula iteracion -> REPETIR IDENTIFICADOR EN DESCENDENTE expresion PUNTOS expresion PUNTOS expresion\n"); }
		;

bucle_base
		: BUCLE bucle_instruccion FIN BUCLE { printf ("  bucle base -> BUCLE bucle_instruccion FIN BUCLE\n"); }
		;

/*******************************/
/*        expresiones          */
/*******************************/

expresion
		: and_logico
		| expresion OR and_logico		 { printf ("  or_logico ->  or_logico '\\/' and_logico\n"); }
		;

and_logico
		: negacion
		| and_logico AND negacion		 { printf ("  and_logico ->  and_logico '/\\' negacion\n"); }
		;

negacion
		: comparacion
		| '~' comparacion { printf ("  negacion -> '~' comparacion\n"); }
		;

comparacion
		: desplazamiento
		| desplazamiento '>' desplazamiento { printf ("  comparacion ->  desplazamiento '>' desplazamiento\n"); }
		| desplazamiento '<' desplazamiento { printf ("  comparacion ->  desplazamiento '<' desplazamiento\n"); }
		| desplazamiento '=' desplazamiento { printf ("  comparacion ->  desplazamiento '=' desplazamiento\n"); }
		| desplazamiento LEQ desplazamiento { printf ("  comparacion ->  desplazamiento '<=' desplazamiento\n"); }
		| desplazamiento GEQ desplazamiento { printf ("  comparacion ->  desplazamiento '>=' desplazamiento\n"); }
		| desplazamiento NEQ desplazamiento { printf ("  comparacion ->  desplazamiento '<>' desplazamiento\n"); }
		;

desplazamiento
		:	suma_resta
		| desplazamiento DESP_DCHA suma_resta { printf ("  desplazamiento ->  desplazamiento '->' suma_resta\n"); }
		| desplazamiento DESP_IZDA suma_resta { printf ("  desplazamiento ->  desplazamiento '<-' suma_resta\n"); }
		;

suma_resta
		: multi_div 
		| suma_resta '-' multi_div { printf ("  suma_resta ->  suma_resta '-' multi_div\n"); }
		| suma_resta '+' multi_div { printf ("  suma_resta ->  suma_resta '+' multi_div\n"); }
		;

multi_div
		: potencia
		| multi_div '*' potencia { printf ("  multi_div ->  multi_div '*' potencia\n"); }
		| multi_div '/' potencia { printf ("  multi_div ->  multi_div '/' potencia\n"); } 
		| multi_div RESTO potencia { printf ("  multi_div ->  multi_div '\\' potencia\n"); } 
		;

potencia
		: expresion_posfija
		| expresion_posfija POTENCIA potencia { printf ("  potencia ->  expr_posfija '**' potencia\n"); }
		;

expresion_posfija 
		: expresion_unaria
		| expresion_unaria operador_posfijo	{ printf ("  expresion posfija -> expr_unaria op_posfijo\n"); }
		;

operador_posfijo 
		: INC		{ printf ("  operador posfijo -> '++'\n"); } 
		| DEC		{ printf ("  operador posfijo -> '--'\n"); }
		;

expresion_unaria 		
		: primario			{ printf ("  expresion unaria -> primario\n"); }
		| '-' primario	{ printf ("  expresion unaria -> '-' primario\n"); }
		;

primario
		: literal       		{ printf ("  primario -> literal\n"); }
		| nombre				{ printf ("  primario -> nombre\n"); }
		| '(' expresion ')' 	{ printf ("  primario -> '(' expresion ')'\n"); }
		; 

nombre	
		: IDENTIFICADOR 		{ printf ("  nombre -> IDENTIFICADOR\n"); }
		| elemento_tabla 		{ printf ("  nombre -> elemento_tabla\n"); }
		| campo_registro 		{ printf ("  nombre -> campo_registro\n"); }
		| llamada_subprograma 	{ printf ("  nombre -> llamada_subprograma\n"); }
		;

campo_registro 
		: nombre '.' IDENTIFICADOR 	{ printf ("  campo registro -> nombre '.' IDENTIFICADOR\n"); }
		;

elemento_tabla
		: nombre '[' expresion ']' 	{ printf ("  elemento tabla -> nombre '[' expresion ']'\n"); }
		;

literal
		: numero			{ printf ("  literal -> numero\n"); }
		| booleano		{ printf ("  literal -> booleano\n"); }
		| CTC_CARACTER 	{ printf ("  literal -> CTC_CARACTER\n"); }
		| CTC_CADENA 		{ printf ("  literal -> CTC_CADENA\n"); }
		;

booleano
		: VERDADERO 	{ printf ("  booleano -> VERDADERO\n"); }
		| FALSO 		{ printf ("  booleano -> FALSO\n"); }
		;

numero
		: CTC_ENTERA	{ printf ("  numero -> CTC_ENTERA\n"); }
		| CTC_REAL 	{ printf ("  numero -> CTC_REAL\n"); }
		;	

%%

int yyerror(char *s) {
  fflush(stdout);
  printf("***************** %s\n",s);
  }

int yywrap() {
  return(1);
  }

int main(int argc, char *argv[]) {

  yydebug = 0;
	
  if (argc < 2) {
    printf("Uso: ./simplon NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
