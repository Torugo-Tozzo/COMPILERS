/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "sintatico.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lexico.c"
#include "utils.c"
int contaVar;  //conta numero de variaveis
int contaVarGlobal;
int rotulo = 0; //marca lugares no codigo
int pos_funcao = 0;
int escopo = GLO;
int tipo;

#line 85 "sintatico.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "sintatico.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_PROGRAMA = 3,                 /* T_PROGRAMA  */
  YYSYMBOL_T_INICIO = 4,                   /* T_INICIO  */
  YYSYMBOL_T_FIM = 5,                      /* T_FIM  */
  YYSYMBOL_T_LEIA = 6,                     /* T_LEIA  */
  YYSYMBOL_T_ESCREVA = 7,                  /* T_ESCREVA  */
  YYSYMBOL_T_SE = 8,                       /* T_SE  */
  YYSYMBOL_T_ENTAO = 9,                    /* T_ENTAO  */
  YYSYMBOL_T_SENAO = 10,                   /* T_SENAO  */
  YYSYMBOL_T_FIMSE = 11,                   /* T_FIMSE  */
  YYSYMBOL_T_ENQTO = 12,                   /* T_ENQTO  */
  YYSYMBOL_T_FACA = 13,                    /* T_FACA  */
  YYSYMBOL_T_FIMENQTO = 14,                /* T_FIMENQTO  */
  YYSYMBOL_T_INTEIRO = 15,                 /* T_INTEIRO  */
  YYSYMBOL_T_LOGICO = 16,                  /* T_LOGICO  */
  YYSYMBOL_T_MAIS = 17,                    /* T_MAIS  */
  YYSYMBOL_T_MENOS = 18,                   /* T_MENOS  */
  YYSYMBOL_T_VEZES = 19,                   /* T_VEZES  */
  YYSYMBOL_T_DIV = 20,                     /* T_DIV  */
  YYSYMBOL_T_ATRIBUI = 21,                 /* T_ATRIBUI  */
  YYSYMBOL_T_MAIOR = 22,                   /* T_MAIOR  */
  YYSYMBOL_T_MENOR = 23,                   /* T_MENOR  */
  YYSYMBOL_T_IGUAL = 24,                   /* T_IGUAL  */
  YYSYMBOL_T_E = 25,                       /* T_E  */
  YYSYMBOL_T_OU = 26,                      /* T_OU  */
  YYSYMBOL_T_NAO = 27,                     /* T_NAO  */
  YYSYMBOL_T_ABRE = 28,                    /* T_ABRE  */
  YYSYMBOL_T_FECHA = 29,                   /* T_FECHA  */
  YYSYMBOL_T_V = 30,                       /* T_V  */
  YYSYMBOL_T_F = 31,                       /* T_F  */
  YYSYMBOL_T_IDENTIF = 32,                 /* T_IDENTIF  */
  YYSYMBOL_T_NUMERO = 33,                  /* T_NUMERO  */
  YYSYMBOL_T_RETORNE = 34,                 /* T_RETORNE  */
  YYSYMBOL_T_FUNC = 35,                    /* T_FUNC  */
  YYSYMBOL_T_FIMFUNC = 36,                 /* T_FIMFUNC  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_programa = 38,                  /* programa  */
  YYSYMBOL_39_1 = 39,                      /* $@1  */
  YYSYMBOL_40_2 = 40,                      /* $@2  */
  YYSYMBOL_41_3 = 41,                      /* $@3  */
  YYSYMBOL_cabecalho = 42,                 /* cabecalho  */
  YYSYMBOL_variaveis = 43,                 /* variaveis  */
  YYSYMBOL_44_4 = 44,                      /* $@4  */
  YYSYMBOL_declaracao_variaveis = 45,      /* declaracao_variaveis  */
  YYSYMBOL_tipo = 46,                      /* tipo  */
  YYSYMBOL_lista_variaveis = 47,           /* lista_variaveis  */
  YYSYMBOL_funcoes = 48,                   /* funcoes  */
  YYSYMBOL_49_5 = 49,                      /* $@5  */
  YYSYMBOL_declaracao_funcoes = 50,        /* declaracao_funcoes  */
  YYSYMBOL_funcao = 51,                    /* funcao  */
  YYSYMBOL_52_6 = 52,                      /* $@6  */
  YYSYMBOL_parametros = 53,                /* parametros  */
  YYSYMBOL_parametro = 54,                 /* parametro  */
  YYSYMBOL_lista_comandos = 55,            /* lista_comandos  */
  YYSYMBOL_comando = 56,                   /* comando  */
  YYSYMBOL_retorno = 57,                   /* retorno  */
  YYSYMBOL_entrada_saida = 58,             /* entrada_saida  */
  YYSYMBOL_leitura = 59,                   /* leitura  */
  YYSYMBOL_escrita = 60,                   /* escrita  */
  YYSYMBOL_repeticao = 61,                 /* repeticao  */
  YYSYMBOL_62_7 = 62,                      /* $@7  */
  YYSYMBOL_63_8 = 63,                      /* $@8  */
  YYSYMBOL_selecao = 64,                   /* selecao  */
  YYSYMBOL_65_9 = 65,                      /* $@9  */
  YYSYMBOL_66_10 = 66,                     /* $@10  */
  YYSYMBOL_atribuicao = 67,                /* atribuicao  */
  YYSYMBOL_68_11 = 68,                     /* $@11  */
  YYSYMBOL_expressao = 69,                 /* expressao  */
  YYSYMBOL_chamada = 70,                   /* chamada  */
  YYSYMBOL_71_12 = 71,                     /* $@12  */
  YYSYMBOL_lista_argumentos = 72,          /* lista_argumentos  */
  YYSYMBOL_identificador = 73,             /* identificador  */
  YYSYMBOL_termo = 74                      /* termo  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   143

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  113

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    63,    63,    72,    78,    62,    91,    96,    97,    97,
     108,   109,   113,   115,   120,   131,   145,   146,   146,   157,
     158,   162,   162,   181,   182,   186,   201,   202,   206,   207,
     208,   209,   210,   214,   230,   231,   235,   243,   252,   257,
     251,   276,   284,   275,   299,   298,   322,   327,   332,   337,
     342,   347,   352,   357,   362,   367,   375,   377,   376,   392,
     393,   397,   423,   424,   429,   434,   439,   446
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_PROGRAMA",
  "T_INICIO", "T_FIM", "T_LEIA", "T_ESCREVA", "T_SE", "T_ENTAO", "T_SENAO",
  "T_FIMSE", "T_ENQTO", "T_FACA", "T_FIMENQTO", "T_INTEIRO", "T_LOGICO",
  "T_MAIS", "T_MENOS", "T_VEZES", "T_DIV", "T_ATRIBUI", "T_MAIOR",
  "T_MENOR", "T_IGUAL", "T_E", "T_OU", "T_NAO", "T_ABRE", "T_FECHA", "T_V",
  "T_F", "T_IDENTIF", "T_NUMERO", "T_RETORNE", "T_FUNC", "T_FIMFUNC",
  "$accept", "programa", "$@1", "$@2", "$@3", "cabecalho", "variaveis",
  "$@4", "declaracao_variaveis", "tipo", "lista_variaveis", "funcoes",
  "$@5", "declaracao_funcoes", "funcao", "$@6", "parametros", "parametro",
  "lista_comandos", "comando", "retorno", "entrada_saida", "leitura",
  "escrita", "repeticao", "$@7", "$@8", "selecao", "$@9", "$@10",
  "atribuicao", "$@11", "expressao", "chamada", "$@12", "lista_argumentos",
  "identificador", "termo", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-31)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-18)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       8,   -29,    13,   -31,   -31,   -31,     9,   -31,    37,    -2,
     -31,   -31,   -31,    26,   -31,    25,   -31,    -6,    57,    37,
     -31,    25,   -31,   -31,     0,    30,   -31,    31,    96,    96,
     -31,   -31,    96,    69,     0,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,    96,    96,   -31,   -31,   -31,   -31,
      -3,    49,   -31,    47,    96,    70,    -3,   -31,   -31,    55,
     -31,    93,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,   -31,   -31,    83,    96,    37,   -31,    35,    35,
     -31,   -31,    11,    11,   113,    27,    27,    62,   -31,     0,
     -31,    -3,    65,    75,    37,   -31,    85,    88,     0,   -31,
      95,   -31,   -31,   -31,   106,   117,     0,   -31,     0,   114,
      98,   -31,   -31
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     6,     1,     7,     3,     0,    16,
      13,    12,     9,     0,     4,     0,    15,    11,     0,     0,
      18,    20,    14,    10,    26,     0,    19,     0,     0,     0,
      38,    44,     0,     0,    26,    32,    28,    34,    35,    29,
      30,    31,    21,    36,     0,     0,    64,    65,    61,    63,
      37,    56,    55,     0,     0,     0,    33,     5,    27,     0,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    62,    41,     0,     0,    23,    67,    48,    49,
      46,    47,    50,    51,    52,    53,    54,    59,    57,    26,
      39,    45,     0,     0,    23,    60,     0,     0,    26,    25,
       8,    24,    58,    42,     0,     0,    26,    40,    26,     0,
       0,    43,    22
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -31,   -31,   -31,   -31,   -31,   -31,    38,   -31,   120,   -19,
     -31,   -31,   -31,   118,   -31,   -31,    46,   -31,   -30,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -27,   -31,   -31,    54,   -31,    99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     6,     9,    18,     3,     7,     8,    12,    13,
      17,    14,    15,    20,    21,    59,    93,    94,    33,    34,
      35,    36,    37,    38,    39,    54,    98,    40,    89,   106,
      41,    55,    87,    72,    96,    88,    51,    52
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      25,    50,    53,     4,    58,    56,    27,    28,    29,    10,
      11,     1,    30,     5,    62,    63,    64,    65,    61,    66,
      67,    68,    69,    70,    -8,    -8,    22,    74,    62,    63,
      64,    65,    31,   -17,    32,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    62,    63,    64,    65,    91,    66,
      67,    68,    10,    11,    64,    65,    73,    92,    16,    97,
      19,    24,    42,    43,    62,    63,    64,    65,   104,    66,
      67,    68,    69,    70,    57,    92,   109,    71,   110,    62,
      63,    64,    65,    76,    66,    67,    68,    69,    70,    44,
      45,    75,    46,    47,    48,    49,    90,    99,   103,    -7,
      62,    63,    64,    65,   100,    66,    67,    68,    69,    70,
      62,    63,    64,    65,   102,    66,    67,    68,    69,    70,
     107,   108,    77,    44,    45,   111,    46,    47,    48,    49,
      62,    63,    64,    65,   112,    66,    67,    23,   105,    26,
     101,    95,     0,    60
};

static const yytype_int8 yycheck[] =
{
      19,    28,    29,    32,    34,    32,     6,     7,     8,    15,
      16,     3,    12,     0,    17,    18,    19,    20,    45,    22,
      23,    24,    25,    26,    15,    16,    32,    54,    17,    18,
      19,    20,    32,    35,    34,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    17,    18,    19,    20,    75,    22,
      23,    24,    15,    16,    19,    20,     9,    76,    32,    89,
      35,     4,    32,    32,    17,    18,    19,    20,    98,    22,
      23,    24,    25,    26,     5,    94,   106,    28,   108,    17,
      18,    19,    20,    28,    22,    23,    24,    25,    26,    27,
      28,    21,    30,    31,    32,    33,    13,    32,    10,     4,
      17,    18,    19,    20,    29,    22,    23,    24,    25,    26,
      17,    18,    19,    20,    29,    22,    23,    24,    25,    26,
      14,     4,    29,    27,    28,    11,    30,    31,    32,    33,
      17,    18,    19,    20,    36,    22,    23,    17,   100,    21,
      94,    87,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    38,    42,    32,     0,    39,    43,    44,    40,
      15,    16,    45,    46,    48,    49,    32,    47,    41,    35,
      50,    51,    32,    45,     4,    46,    50,     6,     7,     8,
      12,    32,    34,    55,    56,    57,    58,    59,    60,    61,
      64,    67,    32,    32,    27,    28,    30,    31,    32,    33,
      69,    73,    74,    69,    62,    68,    69,     5,    55,    52,
      74,    69,    17,    18,    19,    20,    22,    23,    24,    25,
      26,    28,    70,     9,    69,    21,    28,    29,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    72,    65,
      13,    69,    46,    53,    54,    72,    71,    55,    63,    32,
      29,    53,    29,    10,    55,    43,    66,    14,     4,    55,
      55,    11,    36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    39,    40,    41,    38,    42,    43,    44,    43,
      45,    45,    46,    46,    47,    47,    48,    49,    48,    50,
      50,    52,    51,    53,    53,    54,    55,    55,    56,    56,
      56,    56,    56,    57,    58,    58,    59,    60,    62,    63,
      61,    65,    66,    64,    68,    67,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    71,    70,    72,
      72,    73,    74,    74,    74,    74,    74,    74
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     0,     9,     2,     0,     0,     2,
       3,     2,     1,     1,     2,     1,     0,     0,     2,     2,
       1,     0,    11,     0,     2,     2,     0,     2,     1,     1,
       1,     1,     1,     2,     1,     1,     2,     2,     0,     0,
       7,     0,     0,     9,     0,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     0,     0,     4,     0,
       2,     1,     2,     1,     1,     1,     2,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* $@1: %empty  */
#line 63 "sintatico.y"
        {
            pilha = malloc(sizeof(struct Pilha));
            pilha_func = malloc(sizeof(struct Pilha));
            pilha->topo = -1;
            pilha_func->topo = -1;
            contaVar = 0;
            escopo = GLO;    
        }
#line 1239 "sintatico.c"
    break;

  case 3: /* $@2: %empty  */
#line 72 "sintatico.y"
        { 
            contaVarGlobal = desempilha(pilha);
            escopo = LOC;
        }
#line 1248 "sintatico.c"
    break;

  case 4: /* $@3: %empty  */
#line 78 "sintatico.y"
        {
            escopo = GLO;
            mostraTabela();
        }
#line 1257 "sintatico.c"
    break;

  case 5: /* programa: cabecalho $@1 variaveis $@2 funcoes $@3 T_INICIO lista_comandos T_FIM  */
#line 83 "sintatico.y"
        { 
            if (contaVarGlobal > 0)
               fprintf(yyout,"\tDMEM\t%d\n", contaVarGlobal); 
            fprintf(yyout, "\tFIMP\n");    
        }
#line 1267 "sintatico.c"
    break;

  case 6: /* cabecalho: T_PROGRAMA T_IDENTIF  */
#line 92 "sintatico.y"
        { fprintf(yyout,"\tINPP\n"); }
#line 1273 "sintatico.c"
    break;

  case 7: /* variaveis: %empty  */
#line 96 "sintatico.y"
      { empilha(pilha, contaVar); }
#line 1279 "sintatico.c"
    break;

  case 8: /* $@4: %empty  */
#line 97 "sintatico.y"
      { empilha(pilha, contaVar); }
#line 1285 "sintatico.c"
    break;

  case 9: /* variaveis: $@4 declaracao_variaveis  */
#line 99 "sintatico.y"
    {
        int var = contaVar - desempilha(pilha);
        if(var)
               fprintf(yyout,"\tAMEM\t%d\n", var); 
        empilha(pilha,var);
    }
#line 1296 "sintatico.c"
    break;

  case 12: /* tipo: T_LOGICO  */
#line 114 "sintatico.y"
     { tipo = LOG; }
#line 1302 "sintatico.c"
    break;

  case 13: /* tipo: T_INTEIRO  */
#line 116 "sintatico.y"
    { tipo = INT;}
#line 1308 "sintatico.c"
    break;

  case 14: /* lista_variaveis: lista_variaveis T_IDENTIF  */
#line 121 "sintatico.y"
         { 
           strcpy(elemTab.id, atomo);
           elemTab.end = contaVar;
           elemTab.tip = tipo;
           elemTab.cat = VAR;
           elemTab.exc = escopo;
           elemTab.rot = rotulo;
           insereSimbolo(elemTab);
           contaVar++;
         }
#line 1323 "sintatico.c"
    break;

  case 15: /* lista_variaveis: T_IDENTIF  */
#line 132 "sintatico.y"
        { 
           strcpy(elemTab.id, atomo);
           elemTab.end = contaVar;
           elemTab.tip = tipo;
           elemTab.cat = VAR;
           elemTab.exc = escopo;
           elemTab.rot = rotulo;
           insereSimbolo(elemTab);
           contaVar++;      
        }
#line 1338 "sintatico.c"
    break;

  case 17: /* $@5: %empty  */
#line 146 "sintatico.y"
        {
            fprintf(yyout,"\tDSVS\tL0\n"); 
            rotulo++;
        }
#line 1347 "sintatico.c"
    break;

  case 18: /* funcoes: $@5 declaracao_funcoes  */
#line 151 "sintatico.y"
        {
            fprintf(yyout,"L0\tNADA\t\n");
        }
#line 1355 "sintatico.c"
    break;

  case 21: /* $@6: %empty  */
#line 162 "sintatico.y"
                            {
        fprintf(yyout,"L%d\tENSP\n", rotulo);
        strcpy(elemTab.id, atomo);
        elemTab.end = contaVar;
        elemTab.tip = tipo;
        elemTab.cat = FUN;
        elemTab.exc = GLO;
        elemTab.rot = rotulo;
        insereSimbolo(elemTab);
        pos_funcao = contaVar;
        contaVar++;
    }
#line 1372 "sintatico.c"
    break;

  case 22: /* funcao: T_FUNC tipo T_IDENTIF $@6 T_ABRE parametros T_FECHA variaveis T_INICIO lista_comandos T_FIMFUNC  */
#line 175 "sintatico.y"
    {
        rotulo++;
    }
#line 1380 "sintatico.c"
    break;

  case 25: /* parametro: tipo T_IDENTIF  */
#line 186 "sintatico.y"
                     {
        strcpy(elemTab.id, atomo);
        elemTab.end = contaVar;
        elemTab.tip = tipo;
        elemTab.cat = PAR;
        elemTab.exc = LOC;
        elemTab.rot = rotulo;
        insereSimbolo(elemTab);
        tabSimb[pos_funcao].par[tabSimb[pos_funcao].npa] = tipo;
        tabSimb[pos_funcao].npa++;
        contaVar++;
    }
#line 1397 "sintatico.c"
    break;

  case 33: /* retorno: T_RETORNE expressao  */
#line 214 "sintatico.y"
                          {
        if(escopo == GLO)
            yyerror("Comando retorne no c??digo principal");
        int tipo = desempilha(pilha);
        if(tipo != tabSimb[pos_funcao].tip)
            yyerror("Incompatilidade de tipo");
        int npa = tabSimb[pos_funcao].npa;
        int varFuncao = contaVar - (pos_funcao + 1) - npa;
        fprintf(yyout,"\tARZL\t%d\n", -1 * (npa + 3)); 
        if(varFuncao > 0)
            fprintf(yyout,"\tDMEM\t%d\n", varFuncao); 
        fprintf(yyout,"\tRTSP\t%d\n", npa);
    }
#line 1415 "sintatico.c"
    break;

  case 36: /* leitura: T_LEIA T_IDENTIF  */
#line 236 "sintatico.y"
        { 
            int pos = buscaSimbolo(atomo);
            fprintf(yyout,"\tLEIA\n\tARZG\t%d\n", tabSimb[pos].end); 
        }
#line 1424 "sintatico.c"
    break;

  case 37: /* escrita: T_ESCREVA expressao  */
#line 244 "sintatico.y"
         { 
            desempilha(pilha);
            fprintf(yyout,"\tESCR\n"); 
         }
#line 1433 "sintatico.c"
    break;

  case 38: /* $@7: %empty  */
#line 252 "sintatico.y"
        { 
            fprintf(yyout,"L%d\tNADA\n", ++rotulo); 
            empilha(pilha, rotulo);
        }
#line 1442 "sintatico.c"
    break;

  case 39: /* $@8: %empty  */
#line 257 "sintatico.y"
        {
             int tip = desempilha(pilha);
             if(tip != LOG)
                 yyerror("Incompatilidade de tipo");
             fprintf(yyout,"\tDSVF\tL%d\n", ++rotulo);
             empilha(pilha, rotulo);
        }
#line 1454 "sintatico.c"
    break;

  case 40: /* repeticao: T_ENQTO $@7 expressao T_FACA $@8 lista_comandos T_FIMENQTO  */
#line 266 "sintatico.y"
         { 
            int rot1 = desempilha(pilha);
            int rot2 = desempilha(pilha);
            fprintf(yyout,"\tDSVS\tL%d\n",rot2);
            fprintf(yyout,"L%d\tNADA\n",rot1);
         }
#line 1465 "sintatico.c"
    break;

  case 41: /* $@9: %empty  */
#line 276 "sintatico.y"
        {
             int tip = desempilha(pilha);
             if(tip != LOG)
                 yyerror("Imcompatilidade de tipo");
             fprintf(yyout,"\tDSVF\tL%d\n", ++rotulo);
             empilha(pilha, rotulo);
        }
#line 1477 "sintatico.c"
    break;

  case 42: /* $@10: %empty  */
#line 284 "sintatico.y"
        { 
            int rot = desempilha(pilha);
            fprintf(yyout,"\tDSVS\tL%d\n", ++rotulo);
            fprintf(yyout,"L%d\tNADA\n", rot);
            empilha(pilha, rotulo);
        }
#line 1488 "sintatico.c"
    break;

  case 43: /* selecao: T_SE expressao T_ENTAO $@9 lista_comandos T_SENAO $@10 lista_comandos T_FIMSE  */
#line 291 "sintatico.y"
        { 
            int rot = desempilha(pilha);
            fprintf(yyout,"L%d\tNADA\n", rot); 
        }
#line 1497 "sintatico.c"
    break;

  case 44: /* $@11: %empty  */
#line 299 "sintatico.y"
        {
            int pos = buscaSimbolo(atomo);
            empilha(pilha, pos);
        }
#line 1506 "sintatico.c"
    break;

  case 45: /* atribuicao: T_IDENTIF $@11 T_ATRIBUI expressao  */
#line 304 "sintatico.y"
        {
            int tip = desempilha(pilha);
            int pos = desempilha(pilha);
            if (tabSimb[pos].tip != tip)
               yyerror("Incompatibilidade de tipo!");
            if(tabSimb[pos].exc == GLO)
                fprintf(yyout,"\tARZG\t%d\n", tabSimb[pos].end);
            else {
                int pos_var = tabSimb[pos].end - tabSimb[pos_funcao].end - 1;
                int end = pos_var - tabSimb[pos_funcao].npa;
                if(tabSimb[pos].cat == PAR)
                    end-=2;
                fprintf(yyout,"\tARZL\t%d\n", end); 
            }
        }
#line 1526 "sintatico.c"
    break;

  case 46: /* expressao: expressao T_VEZES expressao  */
#line 323 "sintatico.y"
        {
            testaTipo(INT,INT, INT);
            fprintf(yyout,"\tMULT\n"); 
        }
#line 1535 "sintatico.c"
    break;

  case 47: /* expressao: expressao T_DIV expressao  */
#line 328 "sintatico.y"
        {
            testaTipo(INT,INT, INT);
            fprintf(yyout,"\tDIVI\n"); 
        }
#line 1544 "sintatico.c"
    break;

  case 48: /* expressao: expressao T_MAIS expressao  */
#line 333 "sintatico.y"
        {
            testaTipo(INT,INT, INT);
            fprintf(yyout,"\tSOMA\n"); 
        }
#line 1553 "sintatico.c"
    break;

  case 49: /* expressao: expressao T_MENOS expressao  */
#line 338 "sintatico.y"
        {
            testaTipo(INT,INT, INT);
            fprintf(yyout,"\tSUBT\n");
        }
#line 1562 "sintatico.c"
    break;

  case 50: /* expressao: expressao T_MAIOR expressao  */
#line 343 "sintatico.y"
        {
            testaTipo(INT,INT, LOG);
            fprintf(yyout,"\tCMMA\n"); 
        }
#line 1571 "sintatico.c"
    break;

  case 51: /* expressao: expressao T_MENOR expressao  */
#line 348 "sintatico.y"
        {
            testaTipo(INT,INT, LOG);
            fprintf(yyout,"\tCMME\n");
        }
#line 1580 "sintatico.c"
    break;

  case 52: /* expressao: expressao T_IGUAL expressao  */
#line 353 "sintatico.y"
        {
            testaTipo(INT,INT, LOG);
            fprintf(yyout,"\tCMIG\n"); 
        }
#line 1589 "sintatico.c"
    break;

  case 53: /* expressao: expressao T_E expressao  */
#line 358 "sintatico.y"
        {
            testaTipo(LOG, LOG, LOG);
            fprintf(yyout,"\tCONJ\n"); 
        }
#line 1598 "sintatico.c"
    break;

  case 54: /* expressao: expressao T_OU expressao  */
#line 363 "sintatico.y"
        {
            testaTipo(LOG, LOG, LOG);
            fprintf(yyout,"\tDISJ\n"); 
        }
#line 1607 "sintatico.c"
    break;

  case 57: /* $@12: %empty  */
#line 377 "sintatico.y"
    {
        int pos = desempilha(pilha_func);
        int npa = tabSimb[pos].npa;
        for(int i = npa - 1; i > 0; i--){
            int tipo = desempilha(pilha);
            if(tipo != tabSimb[pos].par[i])
                yyerror ("Incompatibilidade de tipo!");
        }
        fprintf(yyout,"\tSVCP\n");
        fprintf(yyout,"\tDSVS\tL%d\n",tabSimb[pos].rot);
    }
#line 1623 "sintatico.c"
    break;

  case 61: /* identificador: T_IDENTIF  */
#line 398 "sintatico.y"
        {
            int pos = buscaSimbolo(atomo);
            if(tabSimb[pos].cat == FUN)
            {
                empilha(pilha_func,pos);
                fprintf(yyout,"\tAMEM\t1\n");
            } 
            else
            {
                int exc = tabSimb[pos].exc;
                if(exc == GLO)
                    fprintf(yyout,"\tCRVG\t%d\n", tabSimb[pos].end); 
                else  {
                    int pos_param = tabSimb[pos].end - tabSimb[pos_funcao].end - 1;
                    int end = (pos_param - tabSimb[pos_funcao].npa);
                    if(tabSimb[pos].cat == PAR)
                        end -= 2;
                    fprintf(yyout,"\tCRVL\t%d\n", end);
                }
            }
            empilha(pilha, tabSimb[pos].tip);
        }
#line 1650 "sintatico.c"
    break;

  case 63: /* termo: T_NUMERO  */
#line 425 "sintatico.y"
        {
        fprintf(yyout,"\tCRCT\t%s\n", atomo);
        empilha(pilha, INT);
        }
#line 1659 "sintatico.c"
    break;

  case 64: /* termo: T_V  */
#line 430 "sintatico.y"
        {
        fprintf(yyout,"\tCRCT\t1\n"); 
        empilha(pilha, LOG);
        }
#line 1668 "sintatico.c"
    break;

  case 65: /* termo: T_F  */
#line 435 "sintatico.y"
        {
        fprintf(yyout,"\tCRCT\t0\n"); 
        empilha(pilha, LOG);
        }
#line 1677 "sintatico.c"
    break;

  case 66: /* termo: T_NAO termo  */
#line 440 "sintatico.y"
        {
        int t = desempilha(pilha);
        if (t != LOG) yyerror ("Incompatibilidade de tipo!");
        fprintf(yyout,"\tNEGA\n"); 
        empilha(pilha, LOG);
        }
#line 1688 "sintatico.c"
    break;


#line 1692 "sintatico.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 448 "sintatico.y"


int main(int argc, char *argv[]){
    char *p, nameIn[100], nameOut[100];
    argv++;
    if(argc < 2){
        puts("\nCompilador Simples\n");
        puts("\n\tUso: ./simples <NOME>[.simples]/n/n");
        exit(10);
    }
    p = strstr(argv[0], ".simples");
    if(p) *p = 0;
    strcpy(nameIn, argv[0]);
    strcat(nameIn, ".simples");
    strcpy(nameOut, argv[0]);
    strcat(nameOut, ".mvs");
    yyin = fopen(nameIn, "rt");
    if(!yyin){
        puts("Programa fonte n??o encontrado!");
        exit(20);
    }
    yyout = fopen(nameOut,"wt");
    yyparse(); /*LR melhorado*/
    puts("Programa ok!");
}
