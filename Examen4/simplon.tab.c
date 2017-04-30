/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "simplon.y" /* yacc.c:339  */


  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1


#line 76 "simplon.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "simplon.tab.h".  */
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

/* Copy the second part of user declarations.  */

#line 188 "simplon.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   455

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  305

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      63,    64,    73,    72,    62,    71,    75,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    65,    61,
      69,    70,    68,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,     2,    77,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    66,     2,    67,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    29,    29,    33,    34,    38,    42,    43,    47,    48,
      56,    57,    61,    65,    66,    70,    71,    75,    76,    80,
      84,    85,    89,    90,    91,    95,    96,    97,    98,   102,
     103,   111,   112,   113,   114,   122,   123,   124,   125,   129,
     133,   134,   138,   142,   143,   147,   151,   152,   156,   160,
     164,   165,   169,   170,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   190,   191,   195,   199,   200,   201,   202,
     206,   210,   214,   218,   219,   223,   224,   228,   229,   233,
     237,   238,   242,   243,   247,   248,   249,   253,   254,   255,
     256,   260,   261,   262,   263,   264,   265,   269,   277,   278,
     282,   283,   287,   288,   292,   293,   294,   295,   296,   297,
     298,   302,   303,   304,   308,   309,   310,   314,   315,   316,
     317,   321,   322,   326,   327,   331,   332,   336,   337,   341,
     342,   343,   347,   348,   349,   350,   354,   358,   362,   363,
     364,   365,   369,   370,   374,   375
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOLEANO", "BUCLE", "CARACTER", "CASOS",
  "COMIENZO", "CONSTANTE", "CUANDO", "DE", "DEVOLVER", "EN", "ENTERO",
  "ENTONCES", "ES", "EXPORTAR", "DECLARACION", "DESCENDENTE", "FALSO",
  "FIN", "FUNCION", "MIENTRAS", "MODULO", "OTRO", "PARA", "PROCEDIMIENTO",
  "RANGO", "REAL", "REFERENCIA", "REGISTRO", "REPETIR", "SALIR", "SI",
  "SINO", "SUBTIPO", "TABLA", "TIPO", "VACIA", "VALOR", "VERDADERO",
  "CTC_CARACTER", "CTC_CADENA", "IDENTIFICADOR", "CTC_ENTERA", "CTC_REAL",
  "NOMBRE_MODULO", "PUNTOS", "RESTO", "ASIGNACION", "FLECHA", "POTENCIA",
  "INC", "DEC", "DESP_IZDA", "DESP_DCHA", "LEQ", "GEQ", "NEQ", "AND", "OR",
  "';'", "','", "'('", "')'", "':'", "'|'", "'~'", "'>'", "'<'", "'='",
  "'-'", "'+'", "'*'", "'/'", "'.'", "'['", "']'", "$accept", "programa",
  "modulos", "modulo", "exportaciones", "identificadores",
  "declaraciones_subprograma", "declaracion_subprograma",
  "especificacion_subprograma", "parametrizacion",
  "lista_declaracion_parametros", "declaracion_parametros", "modo",
  "cuerpo_subprograma", "declaracion", "bucle_declaracion",
  "declaracion_objeto", "tipo_escalar", "declaracion_tipo",
  "tipo_compuesto", "tipo_tabla", "especificacion_tipo", "tipo_registro",
  "campo", "declaracion_subtipo", "definicion_subtipo", "restriccion",
  "nombre_tipo", "instruccion", "bucle_instruccion",
  "instruccion_asignacion", "instruccion_salir", "instruccion_bloque",
  "instruccion_devolver", "instruccion_llamada", "llamada_subprograma",
  "parametros", "instruccion_si", "instruccion_casos", "caso", "entradas",
  "entrada", "instruccion_bucle", "clausula_iteracion", "bucle_base",
  "expresion", "and_logico", "negacion", "comparacion", "desplazamiento",
  "suma_resta", "multi_div", "potencia", "expresion_posfija",
  "operador_posfijo", "expresion_unaria", "primario", "nombre",
  "campo_registro", "elemento_tabla", "literal", "booleano", "numero", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    59,    44,    40,    41,    58,   124,   126,    62,    60,
      61,    45,    43,    42,    47,    46,    91,    93
};
# endif

#define YYPACT_NINF -140

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-140)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -140,    85,   146,  -140,    54,    70,  -140,   156,  -140,   -38,
      67,    99,   137,   156,  -140,   177,  -140,   153,  -140,   142,
     142,  -140,   240,   157,  -140,    54,   189,  -140,   377,   252,
     252,   -14,  -140,  -140,   318,  -140,  -140,  -140,  -140,   152,
     159,  -140,   136,    81,    81,   352,    81,   197,   207,     8,
      81,   195,   141,  -140,   280,  -140,  -140,  -140,  -140,  -140,
     203,  -140,  -140,  -140,   254,    12,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,   264,   266,   185,   377,  -140,   132,
      54,  -140,    54,   204,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,   206,  -140,  -140,    81,   167,    33,  -140,
      -3,   217,  -140,  -140,   374,   -56,    35,  -140,   241,   193,
    -140,   173,  -140,  -140,  -140,   213,   390,   246,   287,   312,
      81,   290,  -140,    -1,  -140,    -9,   143,   295,  -140,  -140,
     377,   -21,    81,   302,    81,   252,   145,    16,   281,   289,
     301,   309,  -140,  -140,   136,  -140,   162,    -6,    81,   127,
    -140,  -140,   347,    81,    81,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,  -140,
    -140,  -140,  -140,   377,   324,    92,   224,    11,   377,  -140,
     175,   246,   254,  -140,   326,   311,  -140,   229,  -140,    21,
     323,   363,   335,   321,    81,  -140,  -140,   336,  -140,   136,
     382,   164,   -17,  -140,    23,   110,   217,  -140,   -56,   -56,
     249,   249,   249,   249,   249,   249,    35,    35,  -140,  -140,
    -140,  -140,   343,  -140,    81,    32,  -140,    81,  -140,   276,
      81,  -140,   -15,   409,  -140,  -140,  -140,  -140,    81,    81,
    -140,    81,   256,  -140,   353,  -140,   136,    81,  -140,    39,
    -140,    46,    23,   411,   357,    71,    81,   261,   386,   377,
     246,   361,  -140,  -140,    93,   246,   267,  -140,  -140,   362,
     139,   377,    23,    81,    51,   365,  -140,    81,   107,  -140,
     379,   360,  -140,    81,  -140,  -140,   414,   377,  -140,   246,
     377,  -140,   113,    81,  -140,   388,   246,   136,   377,    81,
     246,   380,  -140,   246,  -140
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     6,     1,     0,     0,     4,     0,     8,     0,
       0,     0,     0,     2,    10,    22,     7,     0,     5,    15,
      15,    11,     0,     0,     9,     0,     0,    13,     0,     0,
       0,     0,    28,    29,     0,    25,    26,    27,    12,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   132,    63,     0,    55,    56,    57,    58,    59,
     135,    60,    61,    62,     0,     0,   134,   133,    35,    36,
      37,    38,    52,    53,     0,     0,     0,     0,    30,     0,
       0,    16,     0,     0,    43,    40,    14,    41,    44,   143,
     142,   140,   141,   132,   144,   145,     0,     0,     0,   135,
       0,    98,   100,   102,   104,   111,   114,   117,   121,   123,
     127,   130,   129,   139,   138,     0,     0,    91,     0,     0,
       0,     0,    66,     0,    54,     0,     0,     0,    64,    72,
       0,     0,     0,     0,     0,     0,     0,     0,    53,     0,
       0,     0,    21,    20,     0,    18,     0,     0,     0,     0,
     103,   128,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
     126,   124,    71,     0,     0,     0,     0,     0,     0,    73,
       0,    75,     0,    23,     0,     0,    87,     0,   136,     0,
       0,     0,     0,     0,     0,    33,    34,     0,    19,     0,
       0,     0,     0,   131,     0,     0,    99,   101,   113,   112,
     108,   109,   110,   105,   106,   107,   115,   116,   120,   118,
     119,   122,     0,    92,     0,     0,    68,     0,    67,     0,
       0,    74,     0,     0,    89,    65,   137,    48,     0,    49,
      39,     0,     0,    24,     0,    45,     0,     0,    86,     0,
      82,    84,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,    88,    97,     0,    51,     0,    32,    46,     0,
       0,     0,     0,     0,     0,     0,    70,     0,    93,    69,
       0,     0,    90,     0,    31,    47,     0,    80,    83,    85,
       0,    79,    94,     0,    77,     0,    50,     0,    81,     0,
      95,     0,    42,    96,    78
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,  -140,  -140,  -140,     0,  -140,   171,  -140,   425,
    -140,   366,  -140,  -140,   -32,   402,  -140,   -67,  -140,   -65,
    -140,  -139,  -140,  -140,  -140,  -140,  -140,   -23,   -46,   -74,
    -140,  -140,  -140,  -140,  -140,   -28,  -140,  -140,  -140,  -140,
     196,   178,  -140,   325,   270,    -5,   296,   299,   358,   277,
     180,   237,   239,  -140,  -140,  -140,   356,   -27,  -140,  -140,
    -140,  -140,  -140
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,    31,    13,    32,    15,    26,
      40,    41,   144,    23,    33,    34,    35,    73,    36,    84,
      85,    86,    87,   147,    37,   190,   239,    88,    53,    54,
      55,    56,    57,    58,    59,    99,   180,    61,    62,   205,
     249,   250,    63,    64,   131,   251,   101,   102,   103,   104,
     105,   106,   107,   108,   171,   109,   110,   111,    66,    67,
     112,   113,   114
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      60,    65,    78,   141,     9,   198,    74,    75,   128,   138,
      89,   139,   152,   178,   200,   163,   164,   120,   121,    68,
     227,    69,   185,    16,    17,    39,    60,    65,   261,    70,
     247,    90,    91,    92,    93,    94,    95,     8,   100,   115,
     186,   117,    89,   153,    71,   123,   262,   248,    17,    60,
      65,    76,    89,   140,    96,   179,   184,   153,    97,   153,
     244,   132,    98,    90,    91,    92,    93,    94,    95,   122,
     193,   192,   228,    90,    91,    92,    93,    94,    95,   256,
      39,   153,   146,   165,    78,     3,    96,   133,   134,   271,
      97,   149,   153,   273,    98,   128,    96,     8,   236,   222,
      89,   290,    60,    65,   229,   272,   153,   269,   166,   167,
     224,    89,   191,    60,    65,   176,    10,   272,   277,   252,
     181,    90,    91,    92,    93,    94,    95,   187,    18,   189,
     253,   153,    90,    91,    92,    93,    94,    95,   128,    68,
     283,    69,    19,   202,    96,    60,    65,   201,    97,    70,
      60,    65,    98,   153,   293,    96,    60,    65,   302,    97,
     299,   142,     4,    98,    71,    46,    82,   153,    47,     5,
     225,   143,    83,   153,    48,    82,   128,    11,    14,    72,
      20,    83,    12,   128,    21,   281,    89,   153,    68,   242,
      69,   203,    22,   137,    60,    65,    24,   287,    70,   153,
      42,    60,    65,   286,   125,    25,   126,    90,    91,    92,
      93,    94,    95,    71,    17,    82,   298,    79,    38,   255,
      80,    83,   257,    81,    17,   260,    17,   199,    72,   246,
      96,    60,    65,   264,   265,   128,   266,   230,    98,   231,
     118,   128,   270,    60,    65,   169,   170,    28,   133,   134,
     119,   278,   128,    60,    65,    68,   124,    69,   130,    60,
      65,    11,    60,    65,   129,    70,    12,   148,   289,   125,
      60,    65,   292,   153,   172,    29,   154,    30,   296,   135,
      71,   136,    43,     8,   153,   226,    43,    44,   300,   153,
     235,    44,   168,    45,   303,    72,   258,    45,    46,   174,
     127,    47,    46,   155,   156,    47,   153,    48,    49,    50,
     259,    48,    49,    50,    51,    43,   153,   267,    51,    52,
      44,   153,   279,    52,   175,    77,    45,   153,   284,   197,
     194,    46,    43,   177,    47,   208,   209,    44,   183,    11,
      48,    49,    50,    45,    12,   188,   233,    51,    46,    43,
     195,    47,    52,    29,    44,    30,   204,    48,    49,    50,
      45,     8,   196,   254,    51,    46,    43,   223,    47,    52,
     241,    44,   234,    11,    48,    49,    50,    45,    12,   243,
     295,    51,    46,    43,   237,    47,    52,    29,    44,    30,
     238,    48,    49,    50,    45,     8,   240,   173,    51,    46,
     216,   217,    47,    52,   218,   219,   220,   221,    48,    49,
      50,    11,   245,   263,   268,    51,    12,   275,   276,   280,
      52,   301,   282,   285,   297,    29,   291,    30,   155,   156,
     157,   158,   159,     8,   210,   211,   212,   213,   214,   215,
     294,   304,   160,   161,   162,    27,   145,   116,   274,   206,
     288,   182,   232,   207,   151,   150
};

static const yytype_uint16 yycheck[] =
{
      28,    28,    34,    77,     4,   144,    29,    30,    54,    76,
      19,    76,    15,    14,    20,    71,    72,     9,    10,     3,
       9,     5,    43,    61,    62,    25,    54,    54,    43,    13,
      47,    40,    41,    42,    43,    44,    45,    43,    43,    44,
      61,    46,    19,    60,    28,    50,    61,    24,    62,    77,
      77,    65,    19,    76,    63,    64,   130,    60,    67,    60,
     199,    49,    71,    40,    41,    42,    43,    44,    45,    61,
     137,   136,    61,    40,    41,    42,    43,    44,    45,    47,
      80,    60,    82,    48,   116,     0,    63,    75,    76,    50,
      67,    96,    60,    47,    71,   141,    63,    43,    77,   173,
      19,    50,   130,   130,   178,    66,    60,   246,    73,    74,
      18,    19,   135,   141,   141,   120,    46,    66,    47,     9,
     125,    40,    41,    42,    43,    44,    45,   132,    61,   134,
      20,    60,    40,    41,    42,    43,    44,    45,   184,     3,
      47,     5,    43,   148,    63,   173,   173,   147,    67,    13,
     178,   178,    71,    60,    47,    63,   184,   184,   297,    67,
      47,    29,    16,    71,    28,    22,    30,    60,    25,    23,
     175,    39,    36,    60,    31,    30,   222,    21,     7,    43,
      43,    36,    26,   229,    13,   259,    19,    60,     3,   194,
       5,    64,    15,     8,   222,   222,    43,   271,    13,    60,
      11,   229,   229,    64,    63,    63,    65,    40,    41,    42,
      43,    44,    45,    28,    62,    30,   290,    65,    61,   224,
      61,    36,   227,    64,    62,   230,    62,    65,    43,    65,
      63,   259,   259,   238,   239,   281,   241,    62,    71,    64,
      43,   287,   247,   271,   271,    52,    53,     7,    75,    76,
      43,   256,   298,   281,   281,     3,    61,     5,     4,   287,
     287,    21,   290,   290,    61,    13,    26,    63,   273,    63,
     298,   298,   277,    60,    61,    35,    59,    37,   283,    15,
      28,    15,     6,    43,    60,    61,     6,    11,   293,    60,
      61,    11,    51,    17,   299,    43,    20,    17,    22,    12,
      20,    25,    22,    54,    55,    25,    60,    31,    32,    33,
      34,    31,    32,    33,    38,     6,    60,    61,    38,    43,
      11,    60,    61,    43,    12,     7,    17,    60,    61,    20,
      49,    22,     6,    43,    25,   155,   156,    11,    43,    21,
      31,    32,    33,    17,    26,    43,    20,    38,    22,     6,
      61,    25,    43,    35,    11,    37,     9,    31,    32,    33,
      17,    43,    61,    20,    38,    22,     6,    43,    25,    43,
      49,    11,    61,    21,    31,    32,    33,    17,    26,    43,
      20,    38,    22,     6,    61,    25,    43,    35,    11,    37,
      27,    31,    32,    33,    17,    43,    61,     7,    38,    22,
     163,   164,    25,    43,   165,   166,   167,   168,    31,    32,
      33,    21,    30,     4,    61,    38,    26,     6,    61,    33,
      43,    33,    61,    61,    10,    35,    61,    37,    54,    55,
      56,    57,    58,    43,   157,   158,   159,   160,   161,   162,
      61,    61,    68,    69,    70,    20,    80,    45,   252,   153,
     272,   126,   182,   154,    98,    97
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    79,    80,     0,    16,    23,    81,    82,    43,    83,
      46,    21,    26,    84,    85,    86,    61,    62,    61,    43,
      43,    85,    15,    91,    43,    63,    87,    87,     7,    35,
      37,    83,    85,    92,    93,    94,    96,   102,    61,    83,
      88,    89,    11,     6,    11,    17,    22,    25,    31,    32,
      33,    38,    43,   106,   107,   108,   109,   110,   111,   112,
     113,   115,   116,   120,   121,   135,   136,   137,     3,     5,
      13,    28,    43,    95,   105,   105,    65,     7,    92,    65,
      61,    64,    30,    36,    97,    98,    99,   100,   105,    19,
      40,    41,    42,    43,    44,    45,    63,    67,    71,   113,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   133,
     134,   135,   138,   139,   140,   123,    93,   123,    43,    43,
       9,    10,    61,   123,    61,    63,    65,    20,   106,    61,
       4,   122,    49,    75,    76,    15,    15,     8,    95,    97,
     105,   107,    29,    39,    90,    89,    83,   101,    63,   123,
     126,   134,    15,    60,    59,    54,    55,    56,    57,    58,
      68,    69,    70,    71,    72,    48,    73,    74,    51,    52,
      53,   132,    61,     7,    12,    12,   123,    43,    14,    64,
     114,   123,   121,    43,   107,    43,    61,   123,    43,   123,
     103,   105,    97,    95,    49,    61,    61,    20,    99,    65,
      20,    83,   123,    64,     9,   117,   124,   125,   128,   128,
     127,   127,   127,   127,   127,   127,   129,   129,   130,   130,
     130,   130,   107,    43,    18,   123,    61,     9,    61,   107,
      62,    64,   122,    20,    61,    61,    77,    61,    27,   104,
      61,    49,   123,    43,    99,    30,    65,    47,    24,   118,
     119,   123,     9,    20,    20,   123,    47,   123,    20,    34,
     123,    43,    61,     4,   123,   123,   123,    61,    61,    99,
     123,    50,    66,    47,   118,     6,    61,    47,   123,    61,
      33,   107,    61,    47,    61,    61,    64,   107,   119,   123,
      50,    61,   123,    47,    61,    20,   123,    10,   107,    47,
     123,    33,    99,   123,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    78,    79,    80,    80,    81,    82,    82,    83,    83,
      84,    84,    85,    86,    86,    87,    87,    88,    88,    89,
      90,    90,    91,    91,    91,    92,    92,    92,    92,    93,
      93,    94,    94,    94,    94,    95,    95,    95,    95,    96,
      97,    97,    98,    99,    99,   100,   101,   101,   102,   103,
     104,   104,   105,   105,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   107,   107,   108,   109,   109,   109,   109,
     110,   111,   112,   113,   113,   114,   114,   115,   115,   116,
     117,   117,   118,   118,   119,   119,   119,   120,   120,   120,
     120,   121,   121,   121,   121,   121,   121,   122,   123,   123,
     124,   124,   125,   125,   126,   126,   126,   126,   126,   126,
     126,   127,   127,   127,   128,   128,   128,   129,   129,   129,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     134,   134,   135,   135,   135,   135,   136,   137,   138,   138,
     138,   138,   139,   139,   140,   140
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     2,     3,     0,     3,     1,     3,
       1,     2,     3,     3,     5,     0,     3,     1,     3,     4,
       1,     1,     0,     5,     6,     1,     1,     1,     1,     1,
       2,     7,     6,     4,     4,     1,     1,     1,     1,     5,
       1,     1,     8,     1,     1,     4,     4,     5,     5,     2,
       4,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     2,     4,     4,     6,
       6,     3,     2,     3,     4,     1,     3,     7,     9,     7,
       4,     5,     1,     3,     1,     3,     1,     3,     5,     4,
       6,     2,     4,     6,     7,     8,     9,     4,     1,     3,
       1,     3,     1,     2,     1,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     1,     2,     1,     1,     1,     2,     1,
       1,     3,     1,     1,     1,     1,     3,     4,     1,     1,
       1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 29 "simplon.y" /* yacc.c:1646  */
    { printf ("EXITO: programa -> export decls_subpr\n"); }
#line 1526 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 33 "simplon.y" /* yacc.c:1646  */
    { printf ("  modulos -> epsilon\n"); }
#line 1532 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 34 "simplon.y" /* yacc.c:1646  */
    { printf ("  modulos -> modulos modulo\n"); }
#line 1538 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 38 "simplon.y" /* yacc.c:1646  */
    { printf ("  modulo -> MODULO NOMBRE_MODULO ';'\n"); }
#line 1544 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 42 "simplon.y" /* yacc.c:1646  */
    { printf ("  export -> epsilon\n"); }
#line 1550 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 43 "simplon.y" /* yacc.c:1646  */
    { printf ("  export -> EXPORTAR ids ';'\n"); }
#line 1556 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 47 "simplon.y" /* yacc.c:1646  */
    { printf ("  ids -> ID\n"); }
#line 1562 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 48 "simplon.y" /* yacc.c:1646  */
    { printf ("  ids -> id ',' ID\n"); }
#line 1568 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 56 "simplon.y" /* yacc.c:1646  */
    { printf ("  subprograma -> declar_subpr\n"); }
#line 1574 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 57 "simplon.y" /* yacc.c:1646  */
    { printf ("  subprograma -> declars_subpr decla_subpr\n"); }
#line 1580 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 61 "simplon.y" /* yacc.c:1646  */
    {	printf ("  declaracion subpr -> esp_subpr cuerpo_subpr\n"); }
#line 1586 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 65 "simplon.y" /* yacc.c:1646  */
    { printf ("  espec subprograma -> PROC ID param\n"); }
#line 1592 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 66 "simplon.y" /* yacc.c:1646  */
    { printf ("  espec subprograma -> FUNCION ID param DEVOLVER espec_tipo\n"); }
#line 1598 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 70 "simplon.y" /* yacc.c:1646  */
    { printf ("  parametrizacion -> epsilon\n"); }
#line 1604 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 71 "simplon.y" /* yacc.c:1646  */
    { printf ("  parametrizacion ->   '(' lista_params ')'\n"); }
#line 1610 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 75 "simplon.y" /* yacc.c:1646  */
    { printf ("  lista declaracion param -> epsilon\n"); }
#line 1616 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 76 "simplon.y" /* yacc.c:1646  */
    { printf ("  lista declaracion param -> lista_params ';' declar_params\n"); }
#line 1622 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 80 "simplon.y" /* yacc.c:1646  */
    { printf ("  declaracion param -> modo espec_tipo\n"); }
#line 1628 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 84 "simplon.y" /* yacc.c:1646  */
    { printf ("  modo -> VALOR\n"); }
#line 1634 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 85 "simplon.y" /* yacc.c:1646  */
    { printf ("  modo -> REFER\n"); }
#line 1640 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 89 "simplon.y" /* yacc.c:1646  */
    { printf ("  cuerpo subprograma -> epsilon\n"); }
#line 1646 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 90 "simplon.y" /* yacc.c:1646  */
    { printf ("  cuerpo subprograma -> ES declar COMIENZO instruccion FIN ID\n"); }
#line 1652 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 91 "simplon.y" /* yacc.c:1646  */
    { printf ("  cuerpo subprograma -> ES declar COMIENZO instruccion FIN ID\n"); }
#line 1658 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 95 "simplon.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declar_objeto\n"); }
#line 1664 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 96 "simplon.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declar_tipo\n"); }
#line 1670 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 97 "simplon.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declar_subtipo\n"); }
#line 1676 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 98 "simplon.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declar_subprog\n"); }
#line 1682 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 102 "simplon.y" /* yacc.c:1646  */
    { printf ("  bucle declaracion-> declaracion\n"); }
#line 1688 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 103 "simplon.y" /* yacc.c:1646  */
    { printf ("  bucle declaracion-> bucle_declaracion declaracion\n"); }
#line 1694 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 111 "simplon.y" /* yacc.c:1646  */
    { printf ("  declaracion_obj -> ids ':' CONSTANTE tipo escalar ':=' expresion ';'\n"); }
#line 1700 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 112 "simplon.y" /* yacc.c:1646  */
    { printf ("  declaracion_obj -> ids ':' tipo escalar ':=' expresion ';'\n"); }
#line 1706 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 113 "simplon.y" /* yacc.c:1646  */
    { printf ("  declaracion_obj -> ids ':' tipo compuesto ';'\n"); }
#line 1712 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 114 "simplon.y" /* yacc.c:1646  */
    { printf ("  declaracion_obj -> ids ':' nombre tipo ';'\n"); }
#line 1718 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 122 "simplon.y" /* yacc.c:1646  */
    { printf ("  tipo escalar -> BOOLEANO\n"); }
#line 1724 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 123 "simplon.y" /* yacc.c:1646  */
    { printf ("  tipo escalar -> CARACTER\n"); }
#line 1730 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 124 "simplon.y" /* yacc.c:1646  */
    { printf ("  tipo escalar -> ENTERO\n"); }
#line 1736 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 125 "simplon.y" /* yacc.c:1646  */
    { printf ("  tipo escalar -> REAL\n"); }
#line 1742 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 129 "simplon.y" /* yacc.c:1646  */
    { printf ("  declaracion tipo -> TIPO nombre_tipo ES tipo_compuesto\n"); }
#line 1748 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 133 "simplon.y" /* yacc.c:1646  */
    { printf ("  tipo compuesto -> tipo_tabla\n"); }
#line 1754 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 134 "simplon.y" /* yacc.c:1646  */
    { printf ("  tipo compuesto -> tipo_registro\n"); }
#line 1760 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 138 "simplon.y" /* yacc.c:1646  */
    { printf ("  tipo tabla -> TABLA '(' expresion PUNTOS expresion ')' DE especificacion_tipo \n"); }
#line 1766 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 142 "simplon.y" /* yacc.c:1646  */
    { printf ("  especificacion tipo -> tipo_compuesto\n"); }
#line 1772 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 143 "simplon.y" /* yacc.c:1646  */
    { printf ("  especificacion tipo -> nombre_tipo\n"); }
#line 1778 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 147 "simplon.y" /* yacc.c:1646  */
    { printf ("  tipo registro -> REGISTRO campo FIN REGISTRO\n"); }
#line 1784 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 151 "simplon.y" /* yacc.c:1646  */
    { printf ("  campo -> identificadores ':' especificacion_tipo ';'\n"); }
#line 1790 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 152 "simplon.y" /* yacc.c:1646  */
    { printf ("  campo -> campo identificadores ':' especificacion_tipo ';'\n"); }
#line 1796 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 156 "simplon.y" /* yacc.c:1646  */
    { printf ("  declaracion subtipo -> SUBTIPO nombre_tipo ES definicion_subtipo ';'\n"); }
#line 1802 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 160 "simplon.y" /* yacc.c:1646  */
    { printf ("  definicion subtipo -> nombre_tipo restriccion\n"); }
#line 1808 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 164 "simplon.y" /* yacc.c:1646  */
    { printf ("  restriccion -> RANGO expresion PUNTOS expresion\n"); }
#line 1814 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 165 "simplon.y" /* yacc.c:1646  */
    { printf ("  restriccion -> restriccion expresion\n"); }
#line 1820 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 169 "simplon.y" /* yacc.c:1646  */
    { printf ("  nombre tipo -> IDENTIFICADOR\n"); }
#line 1826 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 170 "simplon.y" /* yacc.c:1646  */
    { printf ("  nombre tipo -> tipo_escalar\n"); }
#line 1832 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 178 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion -> VACIA ';'\n"); }
#line 1838 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 179 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion -> instruccion_asignacion\n"); }
#line 1844 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 180 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion -> instruccion_salir\n"); }
#line 1850 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 181 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion -> instruccion_bloque\n"); }
#line 1856 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 182 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion -> instruccion_devolver\n"); }
#line 1862 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 183 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion -> instruccion_llamada\n"); }
#line 1868 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 184 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion -> instruccion_si\n"); }
#line 1874 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 185 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion -> instruccion_casos\n"); }
#line 1880 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 186 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion -> instruccion_bucle\n"); }
#line 1886 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 190 "simplon.y" /* yacc.c:1646  */
    { printf ("  bucle instruccion-> instruccion\n"); }
#line 1892 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 191 "simplon.y" /* yacc.c:1646  */
    { printf ("  bucle instruccion-> bucle_instruccion instruccion\n"); }
#line 1898 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 195 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion asignacion -> nombre ':=' expresion ';'\n"); }
#line 1904 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 199 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion salir-> SALIR ';'\n"); }
#line 1910 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 200 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion salir-> SALIR DE IDENTIFICADOR ';' \n"); }
#line 1916 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 201 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion salir-> SALIR CUANDO expresion ';'\n"); }
#line 1922 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 202 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion salir-> SALIR DE IDENTIFICADOR CUANDO expresion ';'\n"); }
#line 1928 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 206 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion bloque-> DECLARACION bucle_declaracion COMIENZO bucle_instruccion FIN ';'\n"); }
#line 1934 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 210 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion devolver-> DEVOLVER expresion ';'\n"); }
#line 1940 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 214 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion llamada-> llamada_subprograma ';'\n"); }
#line 1946 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 218 "simplon.y" /* yacc.c:1646  */
    { printf ("  llamada subprograma-> IDENTIFICADOR '(' ')'\n"); }
#line 1952 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 219 "simplon.y" /* yacc.c:1646  */
    { printf ("  llamada subprograma-> IDENTIFICADOR '(' parametros ')'\n"); }
#line 1958 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 223 "simplon.y" /* yacc.c:1646  */
    { printf ("  parametros-> expresion\n"); }
#line 1964 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 224 "simplon.y" /* yacc.c:1646  */
    { printf ("  parametros-> parametros ',' expresion\n"); }
#line 1970 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 228 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion si-> SI expresion ENTONCES bucle_instruccion FIN SI ';'\n"); }
#line 1976 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 229 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion si-> SI expresion ENTONCES bucle_instruccion SINO bucle_instruccion FIN SI ';'\n"); }
#line 1982 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 233 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion casos -> CASOS expresion ES caso FIN CASOS ';'\n"); }
#line 1988 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 237 "simplon.y" /* yacc.c:1646  */
    { printf ("  caso -> CUANDO entradas '=>' bucle_instruccion\n"); }
#line 1994 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 238 "simplon.y" /* yacc.c:1646  */
    { printf ("  caso -> caso CUANDO entradas '=>' bucle_instruccion\n"); }
#line 2000 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 242 "simplon.y" /* yacc.c:1646  */
    { printf ("  entrada -> entrada\n"); }
#line 2006 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 243 "simplon.y" /* yacc.c:1646  */
    { printf ("  entrada -> entradas '|' entrada\n"); }
#line 2012 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 247 "simplon.y" /* yacc.c:1646  */
    { printf ("  entrada -> expresion\n"); }
#line 2018 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 248 "simplon.y" /* yacc.c:1646  */
    { printf ("  entrada -> expresion PUNTOS expresion\n"); }
#line 2024 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 249 "simplon.y" /* yacc.c:1646  */
    { printf ("  entrada -> OTRO\n"); }
#line 2030 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 253 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion bucle -> clausula_iteracion bucle_base ';'\n"); }
#line 2036 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 254 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion bucle -> IDENTIFICADOR ':' clausula_iteracion bucle_base ';'\n"); }
#line 2042 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 255 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion bucle -> clausula_iteracion bucle_base IDENTIFICADOR ';'\n"); }
#line 2048 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 256 "simplon.y" /* yacc.c:1646  */
    { printf ("  instruccion bucle -> IDENTIFICADOR ':' clausula_iteracion bucle_base IDENTIFICADOR ';'\n"); }
#line 2054 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 260 "simplon.y" /* yacc.c:1646  */
    { printf ("  clausula iteracion -> MIENTRAS expresion\n"); }
#line 2060 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 261 "simplon.y" /* yacc.c:1646  */
    { printf ("  clausula iteracion -> PARA IDENTIFICADOR EN IDENTIFICADOR\n"); }
#line 2066 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 262 "simplon.y" /* yacc.c:1646  */
    { printf ("  clausula iteracion -> REPETIR IDENTIFICADOR EN expresion PUNTOS expresion\n"); }
#line 2072 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 263 "simplon.y" /* yacc.c:1646  */
    { printf ("  clausula iteracion -> REPETIR IDENTIFICADOR EN DESCENDENTE expresion PUNTOS expresion\n"); }
#line 2078 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 264 "simplon.y" /* yacc.c:1646  */
    { printf ("  clausula iteracion -> REPETIR IDENTIFICADOR EN expresion PUNTOS expresion PUNTOS expresion\n"); }
#line 2084 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 265 "simplon.y" /* yacc.c:1646  */
    { printf ("  clausula iteracion -> REPETIR IDENTIFICADOR EN DESCENDENTE expresion PUNTOS expresion PUNTOS expresion\n"); }
#line 2090 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 269 "simplon.y" /* yacc.c:1646  */
    { printf ("  bucle base -> BUCLE bucle_instruccion FIN BUCLE\n"); }
#line 2096 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 278 "simplon.y" /* yacc.c:1646  */
    { printf ("  or_logico ->  or_logico '\\/' and_logico\n"); }
#line 2102 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 283 "simplon.y" /* yacc.c:1646  */
    { printf ("  and_logico ->  and_logico '/\\' negacion\n"); }
#line 2108 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 288 "simplon.y" /* yacc.c:1646  */
    { printf ("  negacion -> '~' comparacion\n"); }
#line 2114 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 293 "simplon.y" /* yacc.c:1646  */
    { printf ("  comparacion ->  desplazamiento '>' desplazamiento\n"); }
#line 2120 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 294 "simplon.y" /* yacc.c:1646  */
    { printf ("  comparacion ->  desplazamiento '<' desplazamiento\n"); }
#line 2126 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 295 "simplon.y" /* yacc.c:1646  */
    { printf ("  comparacion ->  desplazamiento '=' desplazamiento\n"); }
#line 2132 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 296 "simplon.y" /* yacc.c:1646  */
    { printf ("  comparacion ->  desplazamiento '<=' desplazamiento\n"); }
#line 2138 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 297 "simplon.y" /* yacc.c:1646  */
    { printf ("  comparacion ->  desplazamiento '>=' desplazamiento\n"); }
#line 2144 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 298 "simplon.y" /* yacc.c:1646  */
    { printf ("  comparacion ->  desplazamiento '<>' desplazamiento\n"); }
#line 2150 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 303 "simplon.y" /* yacc.c:1646  */
    { printf ("  desplazamiento ->  desplazamiento '->' suma_resta\n"); }
#line 2156 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 304 "simplon.y" /* yacc.c:1646  */
    { printf ("  desplazamiento ->  desplazamiento '<-' suma_resta\n"); }
#line 2162 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 309 "simplon.y" /* yacc.c:1646  */
    { printf ("  suma_resta ->  suma_resta '-' multi_div\n"); }
#line 2168 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 310 "simplon.y" /* yacc.c:1646  */
    { printf ("  suma_resta ->  suma_resta '+' multi_div\n"); }
#line 2174 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 315 "simplon.y" /* yacc.c:1646  */
    { printf ("  multi_div ->  multi_div '*' potencia\n"); }
#line 2180 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 316 "simplon.y" /* yacc.c:1646  */
    { printf ("  multi_div ->  multi_div '/' potencia\n"); }
#line 2186 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 317 "simplon.y" /* yacc.c:1646  */
    { printf ("  multi_div ->  multi_div '\\' potencia\n"); }
#line 2192 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 322 "simplon.y" /* yacc.c:1646  */
    { printf ("  potencia ->  expr_posfija '**' potencia\n"); }
#line 2198 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 327 "simplon.y" /* yacc.c:1646  */
    { printf ("  expresion posfija -> expr_unaria op_posfijo\n"); }
#line 2204 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 331 "simplon.y" /* yacc.c:1646  */
    { printf ("  operador posfijo -> '++'\n"); }
#line 2210 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 332 "simplon.y" /* yacc.c:1646  */
    { printf ("  operador posfijo -> '--'\n"); }
#line 2216 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 336 "simplon.y" /* yacc.c:1646  */
    { printf ("  expresion unaria -> primario\n"); }
#line 2222 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 337 "simplon.y" /* yacc.c:1646  */
    { printf ("  expresion unaria -> '-' primario\n"); }
#line 2228 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 341 "simplon.y" /* yacc.c:1646  */
    { printf ("  primario -> literal\n"); }
#line 2234 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 342 "simplon.y" /* yacc.c:1646  */
    { printf ("  primario -> nombre\n"); }
#line 2240 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 343 "simplon.y" /* yacc.c:1646  */
    { printf ("  primario -> '(' expresion ')'\n"); }
#line 2246 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 347 "simplon.y" /* yacc.c:1646  */
    { printf ("  nombre -> IDENTIFICADOR\n"); }
#line 2252 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 348 "simplon.y" /* yacc.c:1646  */
    { printf ("  nombre -> elemento_tabla\n"); }
#line 2258 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 349 "simplon.y" /* yacc.c:1646  */
    { printf ("  nombre -> campo_registro\n"); }
#line 2264 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 350 "simplon.y" /* yacc.c:1646  */
    { printf ("  nombre -> llamada_subprograma\n"); }
#line 2270 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 354 "simplon.y" /* yacc.c:1646  */
    { printf ("  campo registro -> nombre '.' IDENTIFICADOR\n"); }
#line 2276 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 358 "simplon.y" /* yacc.c:1646  */
    { printf ("  elemento tabla -> nombre '[' expresion ']'\n"); }
#line 2282 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 362 "simplon.y" /* yacc.c:1646  */
    { printf ("  literal -> numero\n"); }
#line 2288 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 363 "simplon.y" /* yacc.c:1646  */
    { printf ("  literal -> booleano\n"); }
#line 2294 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 364 "simplon.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_CARACTER\n"); }
#line 2300 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 365 "simplon.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_CADENA\n"); }
#line 2306 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 369 "simplon.y" /* yacc.c:1646  */
    { printf ("  booleano -> VERDADERO\n"); }
#line 2312 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 370 "simplon.y" /* yacc.c:1646  */
    { printf ("  booleano -> FALSO\n"); }
#line 2318 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 374 "simplon.y" /* yacc.c:1646  */
    { printf ("  numero -> CTC_ENTERA\n"); }
#line 2324 "simplon.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 375 "simplon.y" /* yacc.c:1646  */
    { printf ("  numero -> CTC_REAL\n"); }
#line 2330 "simplon.tab.c" /* yacc.c:1646  */
    break;


#line 2334 "simplon.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 378 "simplon.y" /* yacc.c:1906  */


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
