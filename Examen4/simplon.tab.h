/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_SIMPLON_TAB_H_INCLUDED
# define YY_YY_SIMPLON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BOOLEANO = 258,
    BUCLE = 259,
    CARACTER = 260,
    CASOS = 261,
    COMIENZO = 262,
    CONSTANTE = 263,
    CUANDO = 264,
    DE = 265,
    DEVOLVER = 266,
    EN = 267,
    ENTERO = 268,
    ENTONCES = 269,
    ES = 270,
    EXPORTAR = 271,
    DECLARACION = 272,
    DESCENDENTE = 273,
    FALSO = 274,
    FIN = 275,
    FUNCION = 276,
    MIENTRAS = 277,
    MODULO = 278,
    OTRO = 279,
    PARA = 280,
    PROCEDIMIENTO = 281,
    RANGO = 282,
    REAL = 283,
    REFERENCIA = 284,
    REGISTRO = 285,
    REPETIR = 286,
    SALIR = 287,
    SI = 288,
    SINO = 289,
    SUBTIPO = 290,
    TABLA = 291,
    TIPO = 292,
    VACIA = 293,
    VALOR = 294,
    VERDADERO = 295,
    CTC_CARACTER = 296,
    CTC_CADENA = 297,
    IDENTIFICADOR = 298,
    CTC_ENTERA = 299,
    CTC_REAL = 300,
    NOMBRE_MODULO = 301,
    PUNTOS = 302,
    RESTO = 303,
    ASIGNACION = 304,
    FLECHA = 305,
    POTENCIA = 306,
    INC = 307,
    DEC = 308,
    DESP_IZDA = 309,
    DESP_DCHA = 310,
    LEQ = 311,
    GEQ = 312,
    NEQ = 313,
    AND = 314,
    OR = 315
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SIMPLON_TAB_H_INCLUDED  */
