/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     END_OF_INPUT = 0,
     keyword_class = 258,
     keyword_module = 259,
     keyword_def = 260,
     keyword_undef = 261,
     keyword_begin = 262,
     keyword_rescue = 263,
     keyword_ensure = 264,
     keyword_end = 265,
     keyword_if = 266,
     keyword_unless = 267,
     keyword_then = 268,
     keyword_elsif = 269,
     keyword_else = 270,
     keyword_case = 271,
     keyword_when = 272,
     keyword_while = 273,
     keyword_until = 274,
     keyword_for = 275,
     keyword_break = 276,
     keyword_next = 277,
     keyword_redo = 278,
     keyword_retry = 279,
     keyword_in = 280,
     keyword_do = 281,
     keyword_do_cond = 282,
     keyword_do_block = 283,
     keyword_do_LAMBDA = 284,
     keyword_return = 285,
     keyword_yield = 286,
     keyword_super = 287,
     keyword_self = 288,
     keyword_nil = 289,
     keyword_true = 290,
     keyword_false = 291,
     keyword_and = 292,
     keyword_or = 293,
     keyword_not = 294,
     modifier_if = 295,
     modifier_unless = 296,
     modifier_while = 297,
     modifier_until = 298,
     modifier_rescue = 299,
     keyword_alias = 300,
     keyword_defined = 301,
     keyword_BEGIN = 302,
     keyword_END = 303,
     keyword__LINE__ = 304,
     keyword__FILE__ = 305,
     keyword__ENCODING__ = 306,
     tIDENTIFIER = 307,
     tFID = 308,
     tGVAR = 309,
     tIVAR = 310,
     tCONSTANT = 311,
     tCVAR = 312,
     tLABEL = 313,
     tINTEGER = 314,
     tFLOAT = 315,
     tRATIONAL = 316,
     tIMAGINARY = 317,
     tCHAR = 318,
     tNTH_REF = 319,
     tBACK_REF = 320,
     tSTRING_CONTENT = 321,
     tREGEXP_END = 322,
     tSP = 323,
     tUPLUS = 132,
     tUMINUS = 133,
     tPOW = 134,
     tCMP = 135,
     tEQ = 140,
     tEQQ = 141,
     tNEQ = 142,
     tGEQ = 139,
     tLEQ = 138,
     tANDOP = 148,
     tOROP = 149,
     tMATCH = 143,
     tNMATCH = 144,
     tDOT2 = 128,
     tDOT3 = 129,
     tBDOT2 = 130,
     tBDOT3 = 131,
     tAREF = 145,
     tASET = 146,
     tLSHFT = 136,
     tRSHFT = 137,
     tANDDOT = 150,
     tCOLON2 = 147,
     tCOLON3 = 324,
     tOP_ASGN = 325,
     tASSOC = 326,
     tLPAREN = 327,
     tLPAREN_ARG = 328,
     tRPAREN = 329,
     tLBRACK = 330,
     tLBRACE = 331,
     tLBRACE_ARG = 332,
     tSTAR = 333,
     tDSTAR = 334,
     tAMPER = 335,
     tLAMBDA = 336,
     tSYMBEG = 337,
     tSTRING_BEG = 338,
     tXSTRING_BEG = 339,
     tREGEXP_BEG = 340,
     tWORDS_BEG = 341,
     tQWORDS_BEG = 342,
     tSYMBOLS_BEG = 343,
     tQSYMBOLS_BEG = 344,
     tSTRING_END = 345,
     tSTRING_DEND = 346,
     tSTRING_DBEG = 347,
     tSTRING_DVAR = 348,
     tLAMBEG = 349,
     tLABEL_END = 350,
     tLOWEST = 351,
     tUMINUS_NUM = 352,
     tLAST_TOKEN = 353
   };
#endif
/* Tokens.  */
#define END_OF_INPUT 0
#define keyword_class 258
#define keyword_module 259
#define keyword_def 260
#define keyword_undef 261
#define keyword_begin 262
#define keyword_rescue 263
#define keyword_ensure 264
#define keyword_end 265
#define keyword_if 266
#define keyword_unless 267
#define keyword_then 268
#define keyword_elsif 269
#define keyword_else 270
#define keyword_case 271
#define keyword_when 272
#define keyword_while 273
#define keyword_until 274
#define keyword_for 275
#define keyword_break 276
#define keyword_next 277
#define keyword_redo 278
#define keyword_retry 279
#define keyword_in 280
#define keyword_do 281
#define keyword_do_cond 282
#define keyword_do_block 283
#define keyword_do_LAMBDA 284
#define keyword_return 285
#define keyword_yield 286
#define keyword_super 287
#define keyword_self 288
#define keyword_nil 289
#define keyword_true 290
#define keyword_false 291
#define keyword_and 292
#define keyword_or 293
#define keyword_not 294
#define modifier_if 295
#define modifier_unless 296
#define modifier_while 297
#define modifier_until 298
#define modifier_rescue 299
#define keyword_alias 300
#define keyword_defined 301
#define keyword_BEGIN 302
#define keyword_END 303
#define keyword__LINE__ 304
#define keyword__FILE__ 305
#define keyword__ENCODING__ 306
#define tIDENTIFIER 307
#define tFID 308
#define tGVAR 309
#define tIVAR 310
#define tCONSTANT 311
#define tCVAR 312
#define tLABEL 313
#define tINTEGER 314
#define tFLOAT 315
#define tRATIONAL 316
#define tIMAGINARY 317
#define tCHAR 318
#define tNTH_REF 319
#define tBACK_REF 320
#define tSTRING_CONTENT 321
#define tREGEXP_END 322
#define tSP 323
#define tUPLUS 132
#define tUMINUS 133
#define tPOW 134
#define tCMP 135
#define tEQ 140
#define tEQQ 141
#define tNEQ 142
#define tGEQ 139
#define tLEQ 138
#define tANDOP 148
#define tOROP 149
#define tMATCH 143
#define tNMATCH 144
#define tDOT2 128
#define tDOT3 129
#define tBDOT2 130
#define tBDOT3 131
#define tAREF 145
#define tASET 146
#define tLSHFT 136
#define tRSHFT 137
#define tANDDOT 150
#define tCOLON2 147
#define tCOLON3 324
#define tOP_ASGN 325
#define tASSOC 326
#define tLPAREN 327
#define tLPAREN_ARG 328
#define tRPAREN 329
#define tLBRACK 330
#define tLBRACE 331
#define tLBRACE_ARG 332
#define tSTAR 333
#define tDSTAR 334
#define tAMPER 335
#define tLAMBDA 336
#define tSYMBEG 337
#define tSTRING_BEG 338
#define tXSTRING_BEG 339
#define tREGEXP_BEG 340
#define tWORDS_BEG 341
#define tQWORDS_BEG 342
#define tSYMBOLS_BEG 343
#define tQSYMBOLS_BEG 344
#define tSTRING_END 345
#define tSTRING_DEND 346
#define tSTRING_DBEG 347
#define tSTRING_DVAR 348
#define tLAMBEG 349
#define tLABEL_END 350
#define tLOWEST 351
#define tUMINUS_NUM 352
#define tLAST_TOKEN 353




/* Copy the first part of user declarations.  */
#line 12 "ripper.y"


#if !YYPURE
# error needs pure parser
#endif
#define YYDEBUG 1
#define YYERROR_VERBOSE 1
#define YYSTACK_USE_ALLOCA 0
#define YYLTYPE rb_code_location_t
#define YYLTYPE_IS_DECLARED 1

#include "ruby/ruby.h"
#include "ruby/st.h"
#include "ruby/encoding.h"
#include "internal.h"
#include "node.h"
#include "parse.h"
#include "symbol.h"
#include "regenc.h"
#include <stdio.h>
#include <errno.h>
#include <ctype.h>
#include "probes.h"

#ifndef WARN_PAST_SCOPE
# define WARN_PAST_SCOPE 0
#endif

#define TAB_WIDTH 8

#define yydebug (p->debug)	/* disable the global variable definition */

#define YYMALLOC(size)		rb_parser_malloc(p, (size))
#define YYREALLOC(ptr, size)	rb_parser_realloc(p, (ptr), (size))
#define YYCALLOC(nelem, size)	rb_parser_calloc(p, (nelem), (size))
#define YYFREE(ptr)		rb_parser_free(p, (ptr))
#define YYFPRINTF		rb_parser_printf
#define YYPRINT(out, tok, val)	parser_token_value_print(p, (tok), &(val))
#define YY_LOCATION_PRINT(File, loc) \
     rb_parser_printf(p, "%d.%d-%d.%d", \
		      (loc).beg_pos.lineno, (loc).beg_pos.column,\
		      (loc).end_pos.lineno, (loc).end_pos.column)
#define YYLLOC_DEFAULT(Current, Rhs, N)					\
    do									\
      if (N)								\
	{								\
	  (Current).beg_pos = YYRHSLOC(Rhs, 1).beg_pos;			\
	  (Current).end_pos = YYRHSLOC(Rhs, N).end_pos;			\
	}								\
      else								\
        {                                                               \
          (Current).beg_pos = YYRHSLOC(Rhs, 0).end_pos;                 \
          (Current).end_pos = YYRHSLOC(Rhs, 0).end_pos;                 \
        }                                                               \
    while (0)

#define RUBY_SET_YYLLOC_FROM_STRTERM_HEREDOC(Current)			\
    rb_parser_set_location_from_strterm_heredoc(p, &p->lex.strterm->u.heredoc, &(Current))
#define RUBY_SET_YYLLOC_OF_NONE(Current)					\
    rb_parser_set_location_of_none(p, &(Current))
#define RUBY_SET_YYLLOC(Current)					\
    rb_parser_set_location(p, &(Current))
#define RUBY_INIT_YYLLOC() \
    { \
	{p->ruby_sourceline, (int)(p->lex.ptok - p->lex.pbeg)}, \
	{p->ruby_sourceline, (int)(p->lex.pcur - p->lex.pbeg)}, \
    }

enum lex_state_bits {
    EXPR_BEG_bit,		/* ignore newline, +/- is a sign. */
    EXPR_END_bit,		/* newline significant, +/- is an operator. */
    EXPR_ENDARG_bit,		/* ditto, and unbound braces. */
    EXPR_ENDFN_bit,		/* ditto, and unbound braces. */
    EXPR_ARG_bit,		/* newline significant, +/- is an operator. */
    EXPR_CMDARG_bit,		/* newline significant, +/- is an operator. */
    EXPR_MID_bit,		/* newline significant, +/- is an operator. */
    EXPR_FNAME_bit,		/* ignore newline, no reserved words. */
    EXPR_DOT_bit,		/* right after `.' or `::', no reserved words. */
    EXPR_CLASS_bit,		/* immediate after `class', no here document. */
    EXPR_LABEL_bit,		/* flag bit, label is allowed. */
    EXPR_LABELED_bit,		/* flag bit, just after a label. */
    EXPR_FITEM_bit,		/* symbol literal as FNAME. */
    EXPR_MAX_STATE
};
/* examine combinations */
enum lex_state_e {
#define DEF_EXPR(n) EXPR_##n = (1 << EXPR_##n##_bit)
    DEF_EXPR(BEG),
    DEF_EXPR(END),
    DEF_EXPR(ENDARG),
    DEF_EXPR(ENDFN),
    DEF_EXPR(ARG),
    DEF_EXPR(CMDARG),
    DEF_EXPR(MID),
    DEF_EXPR(FNAME),
    DEF_EXPR(DOT),
    DEF_EXPR(CLASS),
    DEF_EXPR(LABEL),
    DEF_EXPR(LABELED),
    DEF_EXPR(FITEM),
    EXPR_VALUE = EXPR_BEG,
    EXPR_BEG_ANY  =  (EXPR_BEG | EXPR_MID | EXPR_CLASS),
    EXPR_ARG_ANY  =  (EXPR_ARG | EXPR_CMDARG),
    EXPR_END_ANY  =  (EXPR_END | EXPR_ENDARG | EXPR_ENDFN),
    EXPR_NONE = 0
};
#define IS_lex_state_for(x, ls)	((x) & (ls))
#define IS_lex_state_all_for(x, ls) (((x) & (ls)) == (ls))
#define IS_lex_state(ls)	IS_lex_state_for(p->lex.state, (ls))
#define IS_lex_state_all(ls)	IS_lex_state_all_for(p->lex.state, (ls))

# define SET_LEX_STATE(ls) \
    (p->lex.state = \
     (p->debug ? \
      rb_parser_trace_lex_state(p, p->lex.state, (ls), __LINE__) : \
      (enum lex_state_e)(ls)))

typedef VALUE stack_type;

static const rb_code_location_t NULL_LOC = { {0, -1}, {0, -1} };

# define SHOW_BITSTACK(stack, name) (p->debug ? rb_parser_show_bitstack(p, stack, name, __LINE__) : (void)0)
# define BITSTACK_PUSH(stack, n) (((p->stack) = ((p->stack)<<1)|((n)&1)), SHOW_BITSTACK(p->stack, #stack"(push)"))
# define BITSTACK_POP(stack)	 (((p->stack) = (p->stack) >> 1), SHOW_BITSTACK(p->stack, #stack"(pop)"))
# define BITSTACK_SET_P(stack)	 (SHOW_BITSTACK(p->stack, #stack), (p->stack)&1)
# define BITSTACK_SET(stack, n)	 ((p->stack)=(n), SHOW_BITSTACK(p->stack, #stack"(set)"))

/* A flag to identify keyword_do_cond, "do" keyword after condition expression.
   Examples: `while ... do`, `until ... do`, and `for ... in ... do` */
#define COND_PUSH(n)	BITSTACK_PUSH(cond_stack, (n))
#define COND_POP()	BITSTACK_POP(cond_stack)
#define COND_P()	BITSTACK_SET_P(cond_stack)
#define COND_SET(n)	BITSTACK_SET(cond_stack, (n))

/* A flag to identify keyword_do_block; "do" keyword after command_call.
   Example: `foo 1, 2 do`. */
#define CMDARG_PUSH(n)	BITSTACK_PUSH(cmdarg_stack, (n))
#define CMDARG_POP()	BITSTACK_POP(cmdarg_stack)
#define CMDARG_P()	BITSTACK_SET_P(cmdarg_stack)
#define CMDARG_SET(n)	BITSTACK_SET(cmdarg_stack, (n))

struct vtable {
    ID *tbl;
    int pos;
    int capa;
    struct vtable *prev;
};

struct local_vars {
    struct vtable *args;
    struct vtable *vars;
    struct vtable *used;
# if WARN_PAST_SCOPE
    struct vtable *past;
# endif
    struct local_vars *prev;
# ifndef RIPPER
    struct {
	NODE *outer, *inner, *current;
    } numparam;
# endif
};

enum {
    ORDINAL_PARAM = -1,
    NO_PARAM = 0,
    NUMPARAM_MAX = 9,
};

#define NUMPARAM_ID_P(id) numparam_id_p(id)
#define NUMPARAM_ID_TO_IDX(id) (unsigned int)(((id) >> ID_SCOPE_SHIFT) - tNUMPARAM_1 + 1)
#define NUMPARAM_IDX_TO_ID(idx) TOKEN2LOCALID((tNUMPARAM_1 + (idx) - 1))
static int
numparam_id_p(ID id)
{
    if (!is_local_id(id)) return 0;
    unsigned int idx = NUMPARAM_ID_TO_IDX(id);
    return idx > 0 && idx <= NUMPARAM_MAX;
}

#define DVARS_INHERIT ((void*)1)
#define DVARS_TOPSCOPE NULL
#define DVARS_TERMINAL_P(tbl) ((tbl) == DVARS_INHERIT || (tbl) == DVARS_TOPSCOPE)

typedef struct token_info {
    const char *token;
    rb_code_position_t beg;
    int indent;
    int nonspc;
    struct token_info *next;
} token_info;

typedef struct rb_strterm_struct rb_strterm_t;

/*
    Structure of Lexer Buffer:

 lex.pbeg     lex.ptok     lex.pcur     lex.pend
    |            |            |            |
    |------------+------------+------------|
                 |<---------->|
                     token
*/
struct parser_params {
    rb_imemo_tmpbuf_t *heap;

    YYSTYPE *lval;

    struct {
	rb_strterm_t *strterm;
	VALUE (*gets)(struct parser_params*,VALUE);
	VALUE input;
	VALUE prevline;
	VALUE lastline;
	VALUE nextline;
	const char *pbeg;
	const char *pcur;
	const char *pend;
	const char *ptok;
	union {
	    long ptr;
	    VALUE (*call)(VALUE, int);
	} gets_;
	enum lex_state_e state;
	/* track the nest level of any parens "()[]{}" */
	int paren_nest;
	/* keep p->lex.paren_nest at the beginning of lambda "->" to detect tLAMBEG and keyword_do_LAMBDA */
	int lpar_beg;
	/* track the nest level of only braces "{}" */
	int brace_nest;
    } lex;
    stack_type cond_stack;
    stack_type cmdarg_stack;
    int tokidx;
    int toksiz;
    int tokline;
    int heredoc_end;
    int heredoc_indent;
    int heredoc_line_indent;
    char *tokenbuf;
    struct local_vars *lvtbl;
    st_table *pvtbl;
    int line_count;
    int ruby_sourceline;	/* current line no. */
    const char *ruby_sourcefile; /* current source file */
    VALUE ruby_sourcefile_string;
    rb_encoding *enc;
    token_info *token_info;
    VALUE case_labels;
    VALUE compile_option;

    VALUE debug_buffer;
    VALUE debug_output;

    ID cur_arg;

    rb_ast_t *ast;
    int node_id;

    int max_numparam;

    unsigned int command_start:1;
    unsigned int eofp: 1;
    unsigned int ruby__end__seen: 1;
    unsigned int debug: 1;
    unsigned int has_shebang: 1;
    unsigned int in_defined: 1;
    unsigned int in_kwarg: 1;
    unsigned int in_def: 1;
    unsigned int in_class: 1;
    unsigned int token_seen: 1;
    unsigned int token_info_enabled: 1;
# if WARN_PAST_SCOPE
    unsigned int past_scope_enabled: 1;
# endif
    unsigned int error_p: 1;
    unsigned int cr_seen: 1;

#ifndef RIPPER
    /* Ruby core only */

    unsigned int do_print: 1;
    unsigned int do_loop: 1;
    unsigned int do_chomp: 1;
    unsigned int do_split: 1;
    unsigned int warn_location: 1;

    NODE *eval_tree_begin;
    NODE *eval_tree;
    VALUE error_buffer;
    VALUE debug_lines;
    const struct rb_iseq_struct *parent_iseq;
#else
    /* Ripper only */

    struct {
	VALUE token;
	int line;
	int col;
    } delayed;

    VALUE value;
    VALUE result;
    VALUE parsing_thread;
#endif
};

#define intern_cstr(n,l,en) rb_intern3(n,l,en)

#define STR_NEW(ptr,len) rb_enc_str_new((ptr),(len),p->enc)
#define STR_NEW0() rb_enc_str_new(0,0,p->enc)
#define STR_NEW2(ptr) rb_enc_str_new((ptr),strlen(ptr),p->enc)
#define STR_NEW3(ptr,len,e,func) parser_str_new((ptr),(len),(e),(func),p->enc)
#define TOK_INTERN() intern_cstr(tok(p), toklen(p), p->enc)

static int parser_yyerror(struct parser_params*, const YYLTYPE *yylloc, const char*);
#define yyerror0(msg) parser_yyerror(p, NULL, (msg))
#define yyerror1(loc, msg) parser_yyerror(p, (loc), (msg))
#define yyerror(yylloc, p, msg) parser_yyerror(p, yylloc, msg)
#define token_flush(ptr) ((ptr)->lex.ptok = (ptr)->lex.pcur)

#ifdef RIPPER
#define compile_for_eval	(0)
#else
#define compile_for_eval	(p->parent_iseq != 0)
#endif

#define token_column		((int)(p->lex.ptok - p->lex.pbeg))

#define CALL_Q_P(q) ((q) == TOKEN2VAL(tANDDOT))
#define NODE_CALL_Q(q) (CALL_Q_P(q) ? NODE_QCALL : NODE_CALL)
#define NEW_QCALL(q,r,m,a,loc) NEW_NODE(NODE_CALL_Q(q),r,m,a,loc)

#define lambda_beginning_p() (p->lex.lpar_beg == p->lex.paren_nest)

static enum yytokentype yylex(YYSTYPE*, YYLTYPE*, struct parser_params*);

#ifndef RIPPER
static inline void
rb_discard_node(struct parser_params *p, NODE *n)
{
    rb_ast_delete_node(p->ast, n);
}
#endif

#ifdef RIPPER
static inline VALUE
add_mark_object(struct parser_params *p, VALUE obj)
{
    if (!SPECIAL_CONST_P(obj)
	&& !RB_TYPE_P(obj, T_NODE) /* Ripper jumbles NODE objects and other objects... */
    ) {
	rb_ast_add_mark_object(p->ast, obj);
    }
    return obj;
}
#else
static NODE* node_newnode_with_locals(struct parser_params *, enum node_type, VALUE, VALUE, const rb_code_location_t*);
#endif

static NODE* node_newnode(struct parser_params *, enum node_type, VALUE, VALUE, VALUE, const rb_code_location_t*);
#define rb_node_newnode(type, a1, a2, a3, loc) node_newnode(p, (type), (a1), (a2), (a3), (loc))

static NODE *nd_set_loc(NODE *nd, const YYLTYPE *loc);

static int
parser_get_node_id(struct parser_params *p)
{
    int node_id = p->node_id;
    p->node_id++;
    return node_id;
}

#ifndef RIPPER
static inline void
set_line_body(NODE *body, int line)
{
    if (!body) return;
    switch (nd_type(body)) {
      case NODE_RESCUE:
      case NODE_ENSURE:
	nd_set_line(body, line);
    }
}

#define yyparse ruby_yyparse

static NODE* cond(struct parser_params *p, NODE *node, const YYLTYPE *loc);
static NODE* method_cond(struct parser_params *p, NODE *node, const YYLTYPE *loc);
#define new_nil(loc) NEW_NIL(loc)
static NODE *new_if(struct parser_params*,NODE*,NODE*,NODE*,const YYLTYPE*);
static NODE *new_unless(struct parser_params*,NODE*,NODE*,NODE*,const YYLTYPE*);
static NODE *logop(struct parser_params*,ID,NODE*,NODE*,const YYLTYPE*,const YYLTYPE*);

static NODE *newline_node(NODE*);
static void fixpos(NODE*,NODE*);

static int value_expr_gen(struct parser_params*,NODE*);
static void void_expr(struct parser_params*,NODE*);
static NODE *remove_begin(NODE*);
static NODE *remove_begin_all(NODE*);
#define value_expr(node) value_expr_gen(p, (node) = remove_begin(node))
static NODE *void_stmts(struct parser_params*,NODE*);
static void reduce_nodes(struct parser_params*,NODE**);
static void block_dup_check(struct parser_params*,NODE*,NODE*);

static NODE *block_append(struct parser_params*,NODE*,NODE*);
static NODE *list_append(struct parser_params*,NODE*,NODE*);
static NODE *list_concat(NODE*,NODE*);
static NODE *arg_append(struct parser_params*,NODE*,NODE*,const YYLTYPE*);
static NODE *last_arg_append(struct parser_params *p, NODE *args, NODE *last_arg, const YYLTYPE *loc);
static NODE *rest_arg_append(struct parser_params *p, NODE *args, NODE *rest_arg, const YYLTYPE *loc);
static NODE *literal_concat(struct parser_params*,NODE*,NODE*,const YYLTYPE*);
static NODE *new_evstr(struct parser_params*,NODE*,const YYLTYPE*);
static NODE *evstr2dstr(struct parser_params*,NODE*);
static NODE *splat_array(NODE*);
static void mark_lvar_used(struct parser_params *p, NODE *rhs);

static NODE *call_bin_op(struct parser_params*,NODE*,ID,NODE*,const YYLTYPE*,const YYLTYPE*);
static NODE *call_uni_op(struct parser_params*,NODE*,ID,const YYLTYPE*,const YYLTYPE*);
static NODE *new_qcall(struct parser_params* p, ID atype, NODE *recv, ID mid, NODE *args, const YYLTYPE *op_loc, const YYLTYPE *loc);
static NODE *new_command_qcall(struct parser_params* p, ID atype, NODE *recv, ID mid, NODE *args, NODE *block, const YYLTYPE *op_loc, const YYLTYPE *loc);
static NODE *method_add_block(struct parser_params*p, NODE *m, NODE *b, const YYLTYPE *loc) {b->nd_iter = m; b->nd_loc = *loc; return b;}

static bool args_info_empty_p(struct rb_args_info *args);
static NODE *new_args(struct parser_params*,NODE*,NODE*,ID,NODE*,NODE*,const YYLTYPE*);
static NODE *new_args_tail(struct parser_params*,NODE*,ID,ID,const YYLTYPE*);
static NODE *new_array_pattern(struct parser_params *p, NODE *constant, NODE *pre_arg, NODE *aryptn, const YYLTYPE *loc);
static NODE *new_array_pattern_tail(struct parser_params *p, NODE *pre_args, int has_rest, ID rest_arg, NODE *post_args, const YYLTYPE *loc);
static NODE *new_hash_pattern(struct parser_params *p, NODE *constant, NODE *hshptn, const YYLTYPE *loc);
static NODE *new_hash_pattern_tail(struct parser_params *p, NODE *kw_args, ID kw_rest_arg, const YYLTYPE *loc);

static NODE *new_kw_arg(struct parser_params *p, NODE *k, const YYLTYPE *loc);
static NODE *args_with_numbered(struct parser_params*,NODE*,int);

static VALUE negate_lit(struct parser_params*, VALUE);
static NODE *ret_args(struct parser_params*,NODE*);
static NODE *arg_blk_pass(NODE*,NODE*);
static NODE *new_yield(struct parser_params*,NODE*,const YYLTYPE*);
static NODE *dsym_node(struct parser_params*,NODE*,const YYLTYPE*);

static NODE *gettable(struct parser_params*,ID,const YYLTYPE*);
static NODE *assignable(struct parser_params*,ID,NODE*,const YYLTYPE*);

static NODE *aryset(struct parser_params*,NODE*,NODE*,const YYLTYPE*);
static NODE *attrset(struct parser_params*,NODE*,ID,ID,const YYLTYPE*);

static void rb_backref_error(struct parser_params*,NODE*);
static NODE *node_assign(struct parser_params*,NODE*,NODE*,const YYLTYPE*);

static NODE *new_op_assign(struct parser_params *p, NODE *lhs, ID op, NODE *rhs, const YYLTYPE *loc);
static NODE *new_ary_op_assign(struct parser_params *p, NODE *ary, NODE *args, ID op, NODE *rhs, const YYLTYPE *args_loc, const YYLTYPE *loc);
static NODE *new_attr_op_assign(struct parser_params *p, NODE *lhs, ID atype, ID attr, ID op, NODE *rhs, const YYLTYPE *loc);
static NODE *new_const_op_assign(struct parser_params *p, NODE *lhs, ID op, NODE *rhs, const YYLTYPE *loc);
static NODE *new_bodystmt(struct parser_params *p, NODE *head, NODE *rescue, NODE *rescue_else, NODE *ensure, const YYLTYPE *loc);

static NODE *const_decl(struct parser_params *p, NODE* path, const YYLTYPE *loc);

static NODE *opt_arg_append(NODE*, NODE*);
static NODE *kwd_append(NODE*, NODE*);

static NODE *new_hash(struct parser_params *p, NODE *hash, const YYLTYPE *loc);
static NODE *new_unique_key_hash(struct parser_params *p, NODE *hash, const YYLTYPE *loc);

static NODE *new_defined(struct parser_params *p, NODE *expr, const YYLTYPE *loc);

static NODE *new_regexp(struct parser_params *, NODE *, int, const YYLTYPE *);

#define make_list(list, loc) ((list) ? (nd_set_loc(list, loc), list) : NEW_ZLIST(loc))

static NODE *new_xstring(struct parser_params *, NODE *, const YYLTYPE *loc);

static NODE *symbol_append(struct parser_params *p, NODE *symbols, NODE *symbol);

static NODE *match_op(struct parser_params*,NODE*,NODE*,const YYLTYPE*,const YYLTYPE*);

static ID  *local_tbl(struct parser_params*);

static VALUE reg_compile(struct parser_params*, VALUE, int);
static void reg_fragment_setenc(struct parser_params*, VALUE, int);
static int reg_fragment_check(struct parser_params*, VALUE, int);
static NODE *reg_named_capture_assign(struct parser_params* p, VALUE regexp, const YYLTYPE *loc);

static int literal_concat0(struct parser_params *p, VALUE head, VALUE tail);
static NODE *heredoc_dedent(struct parser_params*,NODE*);

static void check_literal_when(struct parser_params *p, NODE *args, const YYLTYPE *loc);

static void error_duplicate_pattern_variable(struct parser_params *p, ID id, const YYLTYPE *loc);

#define get_id(id) (id)
#define get_value(val) (val)
#define get_num(num) (num)
#else  /* RIPPER */
#define NODE_RIPPER NODE_CDECL

static inline VALUE
ripper_new_yylval(struct parser_params *p, ID a, VALUE b, VALUE c)
{
    add_mark_object(p, b);
    add_mark_object(p, c);
    return (VALUE)NEW_CDECL(a, b, c, &NULL_LOC);
}

static inline int
ripper_is_node_yylval(VALUE n)
{
    return RB_TYPE_P(n, T_NODE) && nd_type(RNODE(n)) == NODE_RIPPER;
}

#define value_expr(node) ((void)(node))
#define remove_begin(node) (node)
#define void_stmts(p,x) (x)
#define rb_dvar_defined(id, base) 0
#define rb_local_defined(id, base) 0
static ID ripper_get_id(VALUE);
#define get_id(id) ripper_get_id(id)
static VALUE ripper_get_value(VALUE);
#define get_value(val) ripper_get_value(val)
#define get_num(num) (int)get_id(num)
static VALUE assignable(struct parser_params*,VALUE);
static int id_is_var(struct parser_params *p, ID id);

#define method_cond(p,node,loc) (node)
#define call_bin_op(p, recv,id,arg1,op_loc,loc) dispatch3(binary, (recv), STATIC_ID2SYM(id), (arg1))
#define match_op(p,node1,node2,op_loc,loc) call_bin_op(0, (node1), idEqTilde, (node2), op_loc, loc)
#define call_uni_op(p, recv,id,op_loc,loc) dispatch2(unary, STATIC_ID2SYM(id), (recv))
#define logop(p,id,node1,node2,op_loc,loc) call_bin_op(0, (node1), (id), (node2), op_loc, loc)

#define new_nil(loc) Qnil

static VALUE new_regexp(struct parser_params *, VALUE, VALUE, const YYLTYPE *);

static VALUE const_decl(struct parser_params *p, VALUE path);

static VALUE var_field(struct parser_params *p, VALUE a);
static VALUE assign_error(struct parser_params *p, VALUE a);

static VALUE parser_reg_compile(struct parser_params*, VALUE, int, VALUE *);

#endif /* !RIPPER */

/* forward declaration */
typedef struct rb_strterm_heredoc_struct rb_strterm_heredoc_t;

RUBY_SYMBOL_EXPORT_BEGIN
VALUE rb_parser_reg_compile(struct parser_params* p, VALUE str, int options);
int rb_reg_fragment_setenc(struct parser_params*, VALUE, int);
enum lex_state_e rb_parser_trace_lex_state(struct parser_params *, enum lex_state_e, enum lex_state_e, int);
VALUE rb_parser_lex_state_name(enum lex_state_e state);
void rb_parser_show_bitstack(struct parser_params *, stack_type, const char *, int);
PRINTF_ARGS(void rb_parser_fatal(struct parser_params *p, const char *fmt, ...), 2, 3);
YYLTYPE *rb_parser_set_location_from_strterm_heredoc(struct parser_params *p, rb_strterm_heredoc_t *here, YYLTYPE *yylloc);
YYLTYPE *rb_parser_set_location_of_none(struct parser_params *p, YYLTYPE *yylloc);
YYLTYPE *rb_parser_set_location(struct parser_params *p, YYLTYPE *yylloc);
RUBY_SYMBOL_EXPORT_END

static void parser_token_value_print(struct parser_params *p, enum yytokentype type, const YYSTYPE *valp);
static ID formal_argument(struct parser_params*, ID);
static ID shadowing_lvar(struct parser_params*,ID);
static void new_bv(struct parser_params*,ID);

static void local_push(struct parser_params*,int);
static void local_pop(struct parser_params*);
static void local_var(struct parser_params*, ID);
static void arg_var(struct parser_params*, ID);
static int  local_id(struct parser_params *p, ID id);
static int  local_id_ref(struct parser_params*, ID, ID **);
#ifndef RIPPER
static ID   internal_id(struct parser_params*);
#endif

static const struct vtable *dyna_push(struct parser_params *);
static void dyna_pop(struct parser_params*, const struct vtable *);
static int dyna_in_block(struct parser_params*);
#define dyna_var(p, id) local_var(p, id)
static int dvar_defined(struct parser_params*, ID);
static int dvar_defined_ref(struct parser_params*, ID, ID**);
static int dvar_curr(struct parser_params*,ID);

static int lvar_defined(struct parser_params*, ID);

static NODE *numparam_push(struct parser_params *p);
static void numparam_pop(struct parser_params *p, NODE *prev_inner);

#ifdef RIPPER
# define METHOD_NOT idNOT
#else
# define METHOD_NOT '!'
#endif

#define idFWD_REST   '*'
#ifdef RUBY3_KEYWORDS
#define idFWD_KWREST idPow /* Use simple "**", as tDSTAR is "**arg" */
#else
#define idFWD_KWREST 0
#endif
#define idFWD_BLOCK  '&'

#define RE_OPTION_ONCE (1<<16)
#define RE_OPTION_ENCODING_SHIFT 8
#define RE_OPTION_ENCODING(e) (((e)&0xff)<<RE_OPTION_ENCODING_SHIFT)
#define RE_OPTION_ENCODING_IDX(o) (((o)>>RE_OPTION_ENCODING_SHIFT)&0xff)
#define RE_OPTION_ENCODING_NONE(o) ((o)&RE_OPTION_ARG_ENCODING_NONE)
#define RE_OPTION_MASK  0xff
#define RE_OPTION_ARG_ENCODING_NONE 32

/* structs for managing terminator of string literal and heredocment */
typedef struct rb_strterm_literal_struct {
    union {
	VALUE dummy;
	long nest;
    } u0;
    union {
	VALUE dummy;
	long func;	    /* STR_FUNC_* (e.g., STR_FUNC_ESCAPE and STR_FUNC_EXPAND) */
    } u1;
    union {
	VALUE dummy;
	long paren;	    /* '(' of `%q(...)` */
    } u2;
    union {
	VALUE dummy;
	long term;	    /* ')' of `%q(...)` */
    } u3;
} rb_strterm_literal_t;

#define HERETERM_LENGTH_BITS ((SIZEOF_VALUE - 1) * CHAR_BIT - 1)

struct rb_strterm_heredoc_struct {
    VALUE lastline;	/* the string of line that contains `<<"END"` */
    long offset;	/* the column of END in `<<"END"` */
    int sourceline;	/* lineno of the line that contains `<<"END"` */
    unsigned length	/* the length of END in `<<"END"` */
#if HERETERM_LENGTH_BITS < SIZEOF_INT * CHAR_BIT
    : HERETERM_LENGTH_BITS
# define HERETERM_LENGTH_MAX ((1U << HERETERM_LENGTH_BITS) - 1)
#else
# define HERETERM_LENGTH_MAX UINT_MAX
#endif
    ;
#if HERETERM_LENGTH_BITS < SIZEOF_INT * CHAR_BIT
    unsigned quote: 1;
    unsigned func: 8;
#else
    uint8_t quote;
    uint8_t func;
#endif
};
STATIC_ASSERT(rb_strterm_heredoc_t, sizeof(rb_strterm_heredoc_t) <= 4 * SIZEOF_VALUE);

#define STRTERM_HEREDOC IMEMO_FL_USER0

struct rb_strterm_struct {
    VALUE flags;
    union {
	rb_strterm_literal_t literal;
	rb_strterm_heredoc_t heredoc;
    } u;
};

#ifndef RIPPER
void
rb_strterm_mark(VALUE obj)
{
    rb_strterm_t *strterm = (rb_strterm_t*)obj;
    if (RBASIC(obj)->flags & STRTERM_HEREDOC) {
	rb_strterm_heredoc_t *heredoc = &strterm->u.heredoc;
	rb_gc_mark(heredoc->lastline);
    }
}
#endif

#define yytnamerr(yyres, yystr) (YYSIZE_T)rb_yytnamerr(p, yyres, yystr)
size_t rb_yytnamerr(struct parser_params *p, char *yyres, const char *yystr);

#define TOKEN2ID(tok) ( \
    tTOKEN_LOCAL_BEGIN<(tok)&&(tok)<tTOKEN_LOCAL_END ? TOKEN2LOCALID(tok) : \
    tTOKEN_INSTANCE_BEGIN<(tok)&&(tok)<tTOKEN_INSTANCE_END ? TOKEN2INSTANCEID(tok) : \
    tTOKEN_GLOBAL_BEGIN<(tok)&&(tok)<tTOKEN_GLOBAL_END ? TOKEN2GLOBALID(tok) : \
    tTOKEN_CONST_BEGIN<(tok)&&(tok)<tTOKEN_CONST_END ? TOKEN2CONSTID(tok) : \
    tTOKEN_CLASS_BEGIN<(tok)&&(tok)<tTOKEN_CLASS_END ? TOKEN2CLASSID(tok) : \
    tTOKEN_ATTRSET_BEGIN<(tok)&&(tok)<tTOKEN_ATTRSET_END ? TOKEN2ATTRSETID(tok) : \
    ((tok) / ((tok)<tPRESERVED_ID_END && ((tok)>=128 || rb_ispunct(tok)))))

/****** Ripper *******/

#ifdef RIPPER
#define RIPPER_VERSION "0.1.0"

static inline VALUE intern_sym(const char *name);

#include "eventids1.c"
#include "eventids2.c"

static VALUE ripper_dispatch0(struct parser_params*,ID);
static VALUE ripper_dispatch1(struct parser_params*,ID,VALUE);
static VALUE ripper_dispatch2(struct parser_params*,ID,VALUE,VALUE);
static VALUE ripper_dispatch3(struct parser_params*,ID,VALUE,VALUE,VALUE);
static VALUE ripper_dispatch4(struct parser_params*,ID,VALUE,VALUE,VALUE,VALUE);
static VALUE ripper_dispatch5(struct parser_params*,ID,VALUE,VALUE,VALUE,VALUE,VALUE);
static VALUE ripper_dispatch7(struct parser_params*,ID,VALUE,VALUE,VALUE,VALUE,VALUE,VALUE,VALUE);
static void ripper_error(struct parser_params *p);

#define dispatch0(n)            ripper_dispatch0(p, TOKEN_PASTE(ripper_id_, n))
#define dispatch1(n,a)          ripper_dispatch1(p, TOKEN_PASTE(ripper_id_, n), (a))
#define dispatch2(n,a,b)        ripper_dispatch2(p, TOKEN_PASTE(ripper_id_, n), (a), (b))
#define dispatch3(n,a,b,c)      ripper_dispatch3(p, TOKEN_PASTE(ripper_id_, n), (a), (b), (c))
#define dispatch4(n,a,b,c,d)    ripper_dispatch4(p, TOKEN_PASTE(ripper_id_, n), (a), (b), (c), (d))
#define dispatch5(n,a,b,c,d,e)  ripper_dispatch5(p, TOKEN_PASTE(ripper_id_, n), (a), (b), (c), (d), (e))
#define dispatch7(n,a,b,c,d,e,f,g) ripper_dispatch7(p, TOKEN_PASTE(ripper_id_, n), (a), (b), (c), (d), (e), (f), (g))

#define yyparse ripper_yyparse

#define ID2VAL(id) STATIC_ID2SYM(id)
#define TOKEN2VAL(t) ID2VAL(TOKEN2ID(t))
#define KWD2EID(t, v) ripper_new_yylval(p, keyword_##t, get_value(v), 0)

#define params_new(pars, opts, rest, pars2, kws, kwrest, blk) \
        dispatch7(params, (pars), (opts), (rest), (pars2), (kws), (kwrest), (blk))

#define escape_Qundef(x) ((x)==Qundef ? Qnil : (x))

static inline VALUE
new_args(struct parser_params *p, VALUE pre_args, VALUE opt_args, VALUE rest_arg, VALUE post_args, VALUE tail, YYLTYPE *loc)
{
    NODE *t = (NODE *)tail;
    VALUE kw_args = t->u1.value, kw_rest_arg = t->u2.value, block = t->u3.value;
    return params_new(pre_args, opt_args, rest_arg, post_args, kw_args, kw_rest_arg, escape_Qundef(block));
}

static inline VALUE
new_args_tail(struct parser_params *p, VALUE kw_args, VALUE kw_rest_arg, VALUE block, YYLTYPE *loc)
{
    NODE *t = rb_node_newnode(NODE_ARGS_AUX, kw_args, kw_rest_arg, block, &NULL_LOC);
    add_mark_object(p, kw_args);
    add_mark_object(p, kw_rest_arg);
    add_mark_object(p, block);
    return (VALUE)t;
}

static inline VALUE
args_with_numbered(struct parser_params *p, VALUE args, int max_numparam)
{
    return args;
}

static VALUE
new_array_pattern(struct parser_params *p, VALUE constant, VALUE pre_arg, VALUE aryptn, const YYLTYPE *loc)
{
    NODE *t = (NODE *)aryptn;
    struct rb_ary_pattern_info *apinfo = t->nd_apinfo;
    VALUE pre_args = Qnil, rest_arg = Qnil, post_args = Qnil;

    if (apinfo) {
        pre_args = rb_ary_entry(apinfo->imemo, 0);
        rest_arg = rb_ary_entry(apinfo->imemo, 1);
        post_args = rb_ary_entry(apinfo->imemo, 2);
    }

    if (!NIL_P(pre_arg)) {
	if (!NIL_P(pre_args)) {
	    rb_ary_unshift(pre_args, pre_arg);
	}
	else {
	    pre_args = rb_ary_new_from_args(1, pre_arg);
	}
    }
    return dispatch4(aryptn, constant, pre_args, rest_arg, post_args);
}

static VALUE
new_array_pattern_tail(struct parser_params *p, VALUE pre_args, VALUE has_rest, VALUE rest_arg, VALUE post_args, const YYLTYPE *loc)
{
    NODE *t;
    struct rb_ary_pattern_info *apinfo;

    if (has_rest) {
	rest_arg = dispatch1(var_field, rest_arg ? rest_arg : Qnil);
    }
    else {
	rest_arg = Qnil;
    }

    VALUE tmpbuf = rb_imemo_tmpbuf_auto_free_pointer();
    apinfo = ZALLOC(struct rb_ary_pattern_info);
    rb_imemo_tmpbuf_set_ptr(tmpbuf, apinfo);
    apinfo->imemo = rb_ary_new_from_args(4, pre_args, rest_arg, post_args, tmpbuf);

    t = rb_node_newnode(NODE_ARYPTN, Qnil, Qnil, (VALUE)apinfo, &NULL_LOC);
    RB_OBJ_WRITTEN(p->ast, Qnil, apinfo->imemo);

    return (VALUE)t;
}

#define new_hash(p,h,l) rb_ary_new_from_args(0)

static VALUE
new_unique_key_hash(struct parser_params *p, VALUE ary, const YYLTYPE *loc)
{
    const long len = RARRAY_LEN(ary);
    st_table *tbl;
    long i;

    tbl = st_init_strtable_with_size(len);
    for (i = 0; i < len; i++) {
	VALUE key, a1, a2, a3;
	a1 = RARRAY_AREF(ary, i);
	if (!(RB_TYPE_P(a1, T_ARRAY) && RARRAY_LEN(a1) == 2)) goto error;
	a2 = RARRAY_AREF(a1, 0);
	if (!RB_TYPE_P(a2, T_ARRAY)) goto error;
	switch (RARRAY_LEN(a2)) {
	  case 2: /* "key": */
	    a3 = RARRAY_AREF(a2, 1);
	    if (!(RB_TYPE_P(a3, T_ARRAY) && RARRAY_LEN(a3) == 3)) goto error;
	    key = RARRAY_AREF(a3, 1);
	    break;
	  case 3: /* key: */
	    key = RARRAY_AREF(a2, 1);
	    break;
	  default:
	    goto error;
	}
	if (!RB_TYPE_P(key, T_STRING)) goto error;
	if (st_is_member(tbl, (st_data_t)RSTRING_PTR(key))) goto error;
	st_insert(tbl, (st_data_t)RSTRING_PTR(key), (st_data_t)ary);
    }
    st_free_table(tbl);
    return ary;

  error:
    ripper_error(p);
    st_free_table(tbl);
    return Qnil;
}

static VALUE
new_hash_pattern(struct parser_params *p, VALUE constant, VALUE hshptn, const YYLTYPE *loc)
{
    NODE *t = (NODE *)hshptn;
    VALUE kw_args = t->u1.value, kw_rest_arg = t->u2.value;
    return dispatch3(hshptn, constant, kw_args, kw_rest_arg);
}

static VALUE
new_hash_pattern_tail(struct parser_params *p, VALUE kw_args, VALUE kw_rest_arg, const YYLTYPE *loc)
{
    NODE *t;
    if (kw_rest_arg) {
	kw_rest_arg = dispatch1(var_field, kw_rest_arg);
    }
    else {
	kw_rest_arg = Qnil;
    }
    t = rb_node_newnode(NODE_HSHPTN, kw_args, kw_rest_arg, 0, &NULL_LOC);

    add_mark_object(p, kw_args);
    add_mark_object(p, kw_rest_arg);
    return (VALUE)t;
}

#define new_defined(p,expr,loc) dispatch1(defined, (expr))

static VALUE heredoc_dedent(struct parser_params*,VALUE);

#else
#define ID2VAL(id) (id)
#define TOKEN2VAL(t) ID2VAL(t)
#define KWD2EID(t, v) keyword_##t
#endif /* RIPPER */

#ifndef RIPPER
# define Qnone 0
# define Qnull 0
# define ifndef_ripper(x) (x)
#else
# define Qnone Qnil
# define Qnull Qundef
# define ifndef_ripper(x)
#endif

# define rb_warn0(fmt)         WARN_CALL(WARN_ARGS(fmt, 1))
# define rb_warn1(fmt,a)       WARN_CALL(WARN_ARGS(fmt, 2), (a))
# define rb_warn2(fmt,a,b)     WARN_CALL(WARN_ARGS(fmt, 3), (a), (b))
# define rb_warn3(fmt,a,b,c)   WARN_CALL(WARN_ARGS(fmt, 4), (a), (b), (c))
# define rb_warn4(fmt,a,b,c,d) WARN_CALL(WARN_ARGS(fmt, 5), (a), (b), (c), (d))
# define rb_warning0(fmt)         WARNING_CALL(WARNING_ARGS(fmt, 1))
# define rb_warning1(fmt,a)       WARNING_CALL(WARNING_ARGS(fmt, 2), (a))
# define rb_warning2(fmt,a,b)     WARNING_CALL(WARNING_ARGS(fmt, 3), (a), (b))
# define rb_warning3(fmt,a,b,c)   WARNING_CALL(WARNING_ARGS(fmt, 4), (a), (b), (c))
# define rb_warning4(fmt,a,b,c,d) WARNING_CALL(WARNING_ARGS(fmt, 5), (a), (b), (c), (d))
# define rb_warn0L(l,fmt)         WARN_CALL(WARN_ARGS_L(l, fmt, 1))
# define rb_warn1L(l,fmt,a)       WARN_CALL(WARN_ARGS_L(l, fmt, 2), (a))
# define rb_warn2L(l,fmt,a,b)     WARN_CALL(WARN_ARGS_L(l, fmt, 3), (a), (b))
# define rb_warn3L(l,fmt,a,b,c)   WARN_CALL(WARN_ARGS_L(l, fmt, 4), (a), (b), (c))
# define rb_warn4L(l,fmt,a,b,c,d) WARN_CALL(WARN_ARGS_L(l, fmt, 5), (a), (b), (c), (d))
# define rb_warning0L(l,fmt)         WARNING_CALL(WARNING_ARGS_L(l, fmt, 1))
# define rb_warning1L(l,fmt,a)       WARNING_CALL(WARNING_ARGS_L(l, fmt, 2), (a))
# define rb_warning2L(l,fmt,a,b)     WARNING_CALL(WARNING_ARGS_L(l, fmt, 3), (a), (b))
# define rb_warning3L(l,fmt,a,b,c)   WARNING_CALL(WARNING_ARGS_L(l, fmt, 4), (a), (b), (c))
# define rb_warning4L(l,fmt,a,b,c,d) WARNING_CALL(WARNING_ARGS_L(l, fmt, 5), (a), (b), (c), (d))
#ifdef RIPPER
static ID id_warn, id_warning, id_gets, id_assoc;
# define WARN_S_L(s,l) STR_NEW(s,l)
# define WARN_S(s) STR_NEW2(s)
# define WARN_I(i) INT2NUM(i)
# define WARN_ID(i) rb_id2str(i)
# define WARN_IVAL(i) i
# define PRIsWARN "s"
# define WARN_ARGS(fmt,n) p->value, id_warn, n, rb_usascii_str_new_lit(fmt)
# define WARN_ARGS_L(l,fmt,n) WARN_ARGS(fmt,n)
# ifdef HAVE_VA_ARGS_MACRO
# define WARN_CALL(...) rb_funcall(__VA_ARGS__)
# else
# define WARN_CALL rb_funcall
# endif
# define WARNING_ARGS(fmt,n) p->value, id_warning, n, rb_usascii_str_new_lit(fmt)
# define WARNING_ARGS_L(l, fmt,n) WARNING_ARGS(fmt,n)
# ifdef HAVE_VA_ARGS_MACRO
# define WARNING_CALL(...) rb_funcall(__VA_ARGS__)
# else
# define WARNING_CALL rb_funcall
# endif
PRINTF_ARGS(static void ripper_compile_error(struct parser_params*, const char *fmt, ...), 2, 3);
# define compile_error ripper_compile_error
#else
# define WARN_S_L(s,l) s
# define WARN_S(s) s
# define WARN_I(i) i
# define WARN_ID(i) rb_id2name(i)
# define WARN_IVAL(i) NUM2INT(i)
# define PRIsWARN PRIsVALUE
# define WARN_ARGS(fmt,n) WARN_ARGS_L(p->ruby_sourceline,fmt,n)
# define WARN_ARGS_L(l,fmt,n) p->ruby_sourcefile, (l), (fmt)
# define WARN_CALL rb_compile_warn
# define WARNING_ARGS(fmt,n) WARN_ARGS(fmt,n)
# define WARNING_ARGS_L(l,fmt,n) WARN_ARGS_L(l,fmt,n)
# define WARNING_CALL rb_compile_warning
PRINTF_ARGS(static void parser_compile_error(struct parser_params*, const char *fmt, ...), 2, 3);
# define compile_error parser_compile_error
#endif

static void token_info_setup(token_info *ptinfo, const char *ptr, const rb_code_location_t *loc);
static void token_info_push(struct parser_params*, const char *token, const rb_code_location_t *loc);
static void token_info_pop(struct parser_params*, const char *token, const rb_code_location_t *loc);
static void token_info_warn(struct parser_params *p, const char *token, token_info *ptinfo_beg, int same, const rb_code_location_t *loc);

#define WARN_EOL(tok) \
    (looking_at_eol_p(p) ? \
     (void)rb_warning0("`" tok "' at the end of line without an expression") : \
     (void)0)
static int looking_at_eol_p(struct parser_params *p);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 975 "ripper.y"
{
    VALUE val;
    NODE *node;
    ID id;
    int num;
    st_table *tbl;
    const struct vtable *vars;
    struct rb_strterm_struct *strterm;
}
/* Line 193 of yacc.c.  */
#line 1304 "ripper.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1329 "ripper.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   14066

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  154
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  257
/* YYNRULES -- Number of rules.  */
#define YYNRULES  750
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1234

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   353

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,    71,
     153,    74,    72,    73,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,   152,   140,     2,     2,     2,   138,   133,     2,
     148,   149,   136,   134,   146,   135,    68,   137,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   128,   151,
     130,   126,   129,   127,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   145,    69,   150,   132,     2,   147,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   143,   131,   144,   141,     2,    88,    89,
      90,    91,    75,    76,    77,    78,    94,    95,    83,    82,
      79,    80,    81,    86,    87,    92,    93,    97,    84,    85,
      96,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    70,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   139,   142
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    12,    14,    18,    21,
      23,    26,    30,    31,    38,    42,    45,    47,    49,    53,
      56,    58,    59,    63,    64,    69,    73,    77,    81,    84,
      88,    92,    96,   100,   104,   109,   111,   115,   119,   125,
     129,   131,   135,   139,   146,   152,   158,   164,   170,   174,
     176,   180,   182,   184,   188,   192,   196,   199,   200,   201,
     202,   209,   211,   213,   214,   215,   220,   222,   224,   226,
     231,   235,   237,   240,   244,   249,   255,   260,   266,   269,
     272,   275,   278,   281,   283,   287,   289,   293,   295,   298,
     302,   308,   311,   316,   319,   324,   326,   330,   332,   336,
     339,   343,   345,   349,   351,   353,   358,   362,   366,   370,
     374,   377,   379,   381,   383,   388,   392,   396,   400,   404,
     407,   409,   411,   413,   416,   418,   422,   424,   426,   428,
     430,   432,   434,   436,   438,   439,   444,   446,   448,   450,
     452,   454,   456,   458,   460,   462,   464,   466,   468,   470,
     472,   474,   476,   478,   480,   482,   484,   486,   488,   490,
     492,   494,   496,   498,   500,   502,   504,   506,   508,   510,
     512,   514,   516,   518,   520,   522,   524,   526,   528,   530,
     532,   534,   536,   538,   540,   542,   544,   546,   548,   550,
     552,   554,   556,   558,   560,   562,   564,   566,   568,   570,
     572,   574,   576,   578,   580,   582,   584,   586,   590,   594,
     601,   607,   613,   619,   625,   630,   634,   638,   642,   645,
     648,   651,   654,   658,   662,   666,   670,   674,   678,   683,
     686,   689,   693,   697,   701,   705,   707,   711,   715,   719,
     723,   727,   730,   733,   737,   741,   745,   749,   750,   755,
     762,   764,   766,   768,   770,   772,   776,   780,   782,   784,
     787,   792,   795,   797,   801,   805,   809,   811,   813,   815,
     817,   820,   825,   828,   830,   833,   836,   841,   843,   844,
     847,   850,   853,   855,   857,   860,   864,   869,   871,   873,
     877,   882,   885,   887,   889,   891,   893,   895,   897,   899,
     901,   903,   905,   907,   908,   913,   914,   918,   919,   924,
     928,   932,   935,   939,   943,   945,   950,   954,   956,   957,
     964,   969,   973,   976,   978,   981,   982,   986,   993,  1000,
    1005,  1010,  1011,  1018,  1019,  1025,  1031,  1038,  1039,  1046,
    1047,  1055,  1056,  1062,  1063,  1064,  1072,  1073,  1074,  1084,
    1086,  1088,  1090,  1092,  1094,  1096,  1098,  1100,  1102,  1104,
    1106,  1108,  1110,  1112,  1114,  1116,  1118,  1120,  1122,  1124,
    1126,  1128,  1130,  1132,  1134,  1136,  1139,  1141,  1143,  1145,
    1151,  1153,  1156,  1158,  1160,  1162,  1166,  1168,  1172,  1174,
    1178,  1184,  1186,  1190,  1193,  1195,  1200,  1203,  1206,  1209,
    1211,  1214,  1215,  1222,  1231,  1236,  1243,  1248,  1251,  1258,
    1261,  1266,  1273,  1276,  1281,  1284,  1289,  1291,  1293,  1295,
    1299,  1304,  1306,  1311,  1313,  1317,  1319,  1321,  1322,  1323,
    1324,  1325,  1326,  1334,  1339,  1341,  1345,  1349,  1353,  1356,
    1361,  1367,  1373,  1376,  1381,  1386,  1390,  1394,  1398,  1401,
    1403,  1408,  1412,  1416,  1417,  1418,  1419,  1425,  1426,  1427,
    1428,  1434,  1436,  1439,  1443,  1448,  1454,  1456,  1458,  1459,
    1460,  1461,  1462,  1472,  1474,  1476,  1478,  1482,  1486,  1488,
    1491,  1495,  1497,  1499,  1501,  1505,  1507,  1511,  1513,  1515,
    1520,  1525,  1529,  1534,  1539,  1543,  1547,  1550,  1554,  1557,
    1561,  1563,  1565,  1568,  1572,  1578,  1581,  1586,  1588,  1591,
    1595,  1598,  1603,  1605,  1609,  1611,  1615,  1617,  1621,  1623,
    1625,  1629,  1631,  1633,  1637,  1640,  1642,  1647,  1651,  1654,
    1656,  1659,  1661,  1665,  1669,  1672,  1675,  1677,  1679,  1681,
    1684,  1687,  1689,  1691,  1693,  1695,  1697,  1699,  1701,  1703,
    1705,  1706,  1710,  1712,  1715,  1718,  1722,  1724,  1731,  1733,
    1735,  1737,  1739,  1742,  1744,  1747,  1749,  1751,  1753,  1755,
    1757,  1759,  1762,  1766,  1770,  1774,  1779,  1780,  1784,  1786,
    1789,  1794,  1795,  1799,  1804,  1809,  1810,  1814,  1815,  1819,
    1820,  1823,  1824,  1827,  1828,  1831,  1833,  1834,  1838,  1839,
    1840,  1841,  1842,  1843,  1852,  1854,  1856,  1858,  1860,  1862,
    1864,  1867,  1869,  1871,  1873,  1875,  1879,  1881,  1884,  1886,
    1888,  1890,  1892,  1894,  1896,  1898,  1900,  1902,  1904,  1906,
    1908,  1910,  1912,  1914,  1916,  1918,  1920,  1922,  1924,  1926,
    1928,  1929,  1934,  1935,  1939,  1943,  1944,  1948,  1953,  1956,
    1959,  1962,  1964,  1967,  1968,  1975,  1984,  1989,  1996,  2001,
    2008,  2011,  2016,  2023,  2026,  2031,  2034,  2039,  2041,  2042,
    2044,  2046,  2048,  2050,  2052,  2054,  2056,  2058,  2060,  2064,
    2066,  2070,  2072,  2075,  2077,  2080,  2082,  2084,  2088,  2090,
    2094,  2096,  2098,  2101,  2104,  2106,  2110,  2114,  2116,  2120,
    2122,  2126,  2128,  2130,  2133,  2135,  2137,  2139,  2142,  2145,
    2147,  2149,  2150,  2155,  2157,  2160,  2162,  2166,  2170,  2173,
    2178,  2181,  2183,  2185,  2187,  2189,  2191,  2193,  2195,  2197,
    2199,  2201,  2203,  2205,  2207,  2209,  2211,  2213,  2214,  2216,
    2217,  2219,  2222,  2225,  2226,  2228,  2230,  2232,  2234,  2236,
    2239
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     155,     0,    -1,    -1,   156,   157,    -1,   158,   403,    -1,
     410,    -1,   159,    -1,   158,   409,   159,    -1,     1,   159,
      -1,   167,    -1,    47,   160,    -1,   143,   157,   144,    -1,
      -1,   163,   321,   249,   162,   163,   324,    -1,   163,   321,
     324,    -1,   164,   403,    -1,   410,    -1,   165,    -1,   164,
     409,   165,    -1,     1,   167,    -1,   167,    -1,    -1,    47,
     166,   160,    -1,    -1,    45,   195,   168,   195,    -1,    45,
      54,    54,    -1,    45,    54,    65,    -1,    45,    54,    64,
      -1,     6,   196,    -1,   167,    40,   175,    -1,   167,    41,
     175,    -1,   167,    42,   175,    -1,   167,    43,   175,    -1,
     167,    44,   167,    -1,    48,   143,   163,   144,    -1,   169,
      -1,   184,   126,   179,    -1,   191,   126,   217,    -1,   184,
     126,   216,    44,   167,    -1,   184,   126,   216,    -1,   171,
      -1,   191,   126,   170,    -1,   360,    99,   170,    -1,   233,
     145,   209,   406,    99,   170,    -1,   233,   401,    52,    99,
     170,    -1,   233,   401,    56,    99,   170,    -1,   233,    97,
      56,    99,   170,    -1,   233,    97,    52,    99,   170,    -1,
     361,    99,   170,    -1,   179,    -1,   179,    44,   167,    -1,
     169,    -1,   179,    -1,   171,    37,   171,    -1,   171,    38,
     171,    -1,    39,   404,   171,    -1,   140,   179,    -1,    -1,
      -1,    -1,   200,    25,   172,   173,   301,   174,    -1,   200,
      -1,   171,    -1,    -1,    -1,   177,   175,   254,   178,    -1,
     183,    -1,   180,    -1,   279,    -1,   279,   402,   398,   211,
      -1,   106,   282,   144,    -1,   397,    -1,   182,   211,    -1,
     182,   211,   181,    -1,   233,   401,   398,   211,    -1,   233,
     401,   398,   211,   181,    -1,   233,    97,   398,   211,    -1,
     233,    97,   398,   211,   181,    -1,    32,   211,    -1,    31,
     211,    -1,   252,   210,    -1,    21,   210,    -1,    22,   210,
      -1,   186,    -1,   101,   185,   405,    -1,   186,    -1,   101,
     185,   405,    -1,   188,    -1,   188,   187,    -1,   188,   107,
     190,    -1,   188,   107,   190,   146,   189,    -1,   188,   107,
      -1,   188,   107,   146,   189,    -1,   107,   190,    -1,   107,
     190,   146,   189,    -1,   107,    -1,   107,   146,   189,    -1,
     190,    -1,   101,   185,   405,    -1,   187,   146,    -1,   188,
     187,   146,    -1,   187,    -1,   189,   146,   187,    -1,   357,
      -1,   358,    -1,   233,   145,   209,   406,    -1,   233,   401,
      52,    -1,   233,    97,    52,    -1,   233,   401,    56,    -1,
     233,    97,    56,    -1,    98,    56,    -1,   361,    -1,   357,
      -1,   358,    -1,   233,   145,   209,   406,    -1,   233,   401,
      52,    -1,   233,    97,    52,    -1,   233,   401,    56,    -1,
     233,    97,    56,    -1,    98,    56,    -1,   361,    -1,    52,
      -1,    56,    -1,    98,   192,    -1,   192,    -1,   233,    97,
     192,    -1,    52,    -1,    56,    -1,    53,    -1,   198,    -1,
     199,    -1,   194,    -1,   351,    -1,   195,    -1,    -1,   196,
     146,   197,   195,    -1,   131,    -1,   132,    -1,   133,    -1,
      78,    -1,    79,    -1,    80,    -1,    86,    -1,    87,    -1,
     129,    -1,    82,    -1,   130,    -1,    83,    -1,    81,    -1,
      94,    -1,    95,    -1,   134,    -1,   135,    -1,   136,    -1,
     107,    -1,   137,    -1,   138,    -1,    77,    -1,   108,    -1,
     140,    -1,   141,    -1,    75,    -1,    76,    -1,    92,    -1,
      93,    -1,   147,    -1,    49,    -1,    50,    -1,    51,    -1,
      47,    -1,    48,    -1,    45,    -1,    37,    -1,     7,    -1,
      21,    -1,    16,    -1,     3,    -1,     5,    -1,    46,    -1,
      26,    -1,    15,    -1,    14,    -1,    10,    -1,     9,    -1,
      36,    -1,    20,    -1,    25,    -1,     4,    -1,    22,    -1,
      34,    -1,    39,    -1,    38,    -1,    23,    -1,     8,    -1,
      24,    -1,    30,    -1,    33,    -1,    32,    -1,    13,    -1,
      35,    -1,     6,    -1,    17,    -1,    31,    -1,    11,    -1,
      12,    -1,    18,    -1,    19,    -1,   191,   126,   206,    -1,
     360,    99,   206,    -1,   233,   145,   209,   406,    99,   206,
      -1,   233,   401,    52,    99,   206,    -1,   233,   401,    56,
      99,   206,    -1,   233,    97,    52,    99,   206,    -1,   233,
      97,    56,    99,   206,    -1,    98,    56,    99,   206,    -1,
     361,    99,   206,    -1,   200,    88,   200,    -1,   200,    89,
     200,    -1,   200,    88,    -1,   200,    89,    -1,    90,   200,
      -1,    91,   200,    -1,   200,   134,   200,    -1,   200,   135,
     200,    -1,   200,   136,   200,    -1,   200,   137,   200,    -1,
     200,   138,   200,    -1,   200,    77,   200,    -1,   139,   356,
      77,   200,    -1,    75,   200,    -1,    76,   200,    -1,   200,
     131,   200,    -1,   200,   132,   200,    -1,   200,   133,   200,
      -1,   200,    78,   200,    -1,   203,    -1,   200,    79,   200,
      -1,   200,    80,   200,    -1,   200,    81,   200,    -1,   200,
      86,   200,    -1,   200,    87,   200,    -1,   140,   200,    -1,
     141,   200,    -1,   200,    94,   200,    -1,   200,    95,   200,
      -1,   200,    84,   200,    -1,   200,    85,   200,    -1,    -1,
      46,   404,   201,   200,    -1,   200,   127,   200,   404,   128,
     200,    -1,   218,    -1,   129,    -1,   130,    -1,    82,    -1,
      83,    -1,   200,   202,   200,    -1,   203,   202,   200,    -1,
     200,    -1,   410,    -1,   215,   407,    -1,   215,   146,   395,
     407,    -1,   395,   407,    -1,   200,    -1,   200,    44,   200,
      -1,   148,   209,   405,    -1,   148,   369,   405,    -1,   410,
      -1,   207,    -1,   410,    -1,   210,    -1,   215,   146,    -1,
     215,   146,   395,   146,    -1,   395,   146,    -1,   183,    -1,
     215,   214,    -1,   395,   214,    -1,   215,   146,   395,   214,
      -1,   213,    -1,    -1,   212,   210,    -1,   109,   204,    -1,
     146,   213,    -1,   410,    -1,   204,    -1,   107,   204,    -1,
     215,   146,   204,    -1,   215,   146,   107,   204,    -1,   217,
      -1,   204,    -1,   215,   146,   204,    -1,   215,   146,   107,
     204,    -1,   107,   204,    -1,   325,    -1,   326,    -1,   329,
      -1,   330,    -1,   331,    -1,   336,    -1,   334,    -1,   337,
      -1,   359,    -1,   361,    -1,    53,    -1,    -1,   234,   219,
     161,   251,    -1,    -1,   102,   220,   405,    -1,    -1,   102,
     167,   221,   405,    -1,   101,   163,   149,    -1,   233,    97,
      56,    -1,    98,    56,    -1,   104,   205,   150,    -1,   105,
     394,   144,    -1,   252,    -1,    31,   148,   210,   405,    -1,
      31,   148,   405,    -1,    31,    -1,    -1,    46,   404,   148,
     222,   171,   405,    -1,    39,   148,   171,   405,    -1,    39,
     148,   405,    -1,   182,   281,    -1,   280,    -1,   280,   281,
      -1,    -1,   110,   223,   270,    -1,   235,   175,   253,   163,
     255,   251,    -1,   236,   175,   253,   163,   256,   251,    -1,
     237,   176,   163,   251,    -1,   238,   176,   163,   251,    -1,
      -1,   239,   175,   403,   224,   291,   251,    -1,    -1,   239,
     403,   225,   291,   251,    -1,   239,   175,   403,   293,   251,
      -1,   240,   257,    25,   176,   163,   251,    -1,    -1,   241,
     193,   362,   226,   161,   251,    -1,    -1,   241,    94,   171,
     227,   408,   161,   251,    -1,    -1,   242,   193,   228,   161,
     251,    -1,    -1,    -1,   243,   194,   229,   230,   364,   161,
     251,    -1,    -1,    -1,   243,   392,   400,   231,   194,   232,
     364,   161,   251,    -1,    21,    -1,    22,    -1,    23,    -1,
      24,    -1,   218,    -1,     7,    -1,    11,    -1,    12,    -1,
      18,    -1,    19,    -1,    16,    -1,    20,    -1,     3,    -1,
       4,    -1,     5,    -1,    26,    -1,    28,    -1,     8,    -1,
       9,    -1,    17,    -1,    15,    -1,    14,    -1,    10,    -1,
      30,    -1,   408,    -1,    13,    -1,   408,    13,    -1,   408,
      -1,    27,    -1,   256,    -1,   250,   175,   253,   163,   255,
      -1,   410,    -1,   249,   163,    -1,   191,    -1,   184,    -1,
     371,    -1,   101,   260,   405,    -1,   258,    -1,   259,   146,
     258,    -1,   259,    -1,   259,   146,   261,    -1,   259,   146,
     261,   146,   259,    -1,   261,    -1,   261,   146,   259,    -1,
     107,   371,    -1,   107,    -1,   378,   146,   382,   391,    -1,
     378,   391,    -1,   382,   391,    -1,   381,   391,    -1,   390,
      -1,   146,   262,    -1,    -1,   374,   146,   385,   146,   388,
     263,    -1,   374,   146,   385,   146,   388,   146,   374,   263,
      -1,   374,   146,   385,   263,    -1,   374,   146,   385,   146,
     374,   263,    -1,   374,   146,   388,   263,    -1,   374,   146,
      -1,   374,   146,   388,   146,   374,   263,    -1,   374,   263,
      -1,   385,   146,   388,   263,    -1,   385,   146,   388,   146,
     374,   263,    -1,   385,   263,    -1,   385,   146,   374,   263,
      -1,   388,   263,    -1,   388,   146,   374,   263,    -1,   262,
      -1,   410,    -1,   266,    -1,   131,   267,   131,    -1,   131,
     264,   267,   131,    -1,   404,    -1,   404,   151,   268,   404,
      -1,   269,    -1,   268,   146,   269,    -1,    52,    -1,   370,
      -1,    -1,    -1,    -1,    -1,    -1,   271,   272,   273,   274,
     276,   275,   277,    -1,   148,   368,   267,   149,    -1,   368,
      -1,   123,   163,   144,    -1,    29,   161,   251,    -1,   245,
     286,   251,    -1,   183,   278,    -1,   279,   402,   398,   208,
      -1,   279,   402,   398,   208,   281,    -1,   279,   402,   398,
     211,   278,    -1,   182,   207,    -1,   233,   401,   398,   208,
      -1,   233,    97,   398,   207,    -1,   233,    97,   399,    -1,
     233,   401,   207,    -1,   233,    97,   207,    -1,    32,   207,
      -1,    32,    -1,   233,   145,   209,   406,    -1,   143,   282,
     144,    -1,   244,   286,   251,    -1,    -1,    -1,    -1,   283,
     284,   285,   265,   163,    -1,    -1,    -1,    -1,   287,   288,
     289,   265,   161,    -1,   204,    -1,   107,   204,    -1,   290,
     146,   204,    -1,   290,   146,   107,   204,    -1,   248,   290,
     253,   163,   292,    -1,   256,    -1,   291,    -1,    -1,    -1,
      -1,    -1,    25,   294,   295,   299,   253,   296,   297,   163,
     298,    -1,   256,    -1,   293,    -1,   300,    -1,   300,    40,
     175,    -1,   300,    41,   175,    -1,   301,    -1,   301,   146,
      -1,   301,   146,   305,    -1,   307,    -1,   310,    -1,   302,
      -1,   301,   100,   318,    -1,   303,    -1,   303,   131,   304,
      -1,   304,    -1,   315,    -1,   320,   148,   305,   405,    -1,
     320,   148,   310,   405,    -1,   320,   148,   405,    -1,   320,
     145,   305,   406,    -1,   320,   145,   310,   406,    -1,   320,
     145,   406,    -1,   104,   305,   406,    -1,   104,   406,    -1,
     105,   310,   144,    -1,   105,   144,    -1,   101,   301,   405,
      -1,   301,    -1,   306,    -1,   306,   309,    -1,   306,   107,
      52,    -1,   306,   107,    52,   146,   308,    -1,   306,   107,
      -1,   306,   107,   146,   308,    -1,   307,    -1,   309,   146,
      -1,   306,   309,   146,    -1,   107,    52,    -1,   107,    52,
     146,   308,    -1,   107,    -1,   107,   146,   308,    -1,   309,
      -1,   308,   146,   309,    -1,   301,    -1,   311,   146,   313,
      -1,   311,    -1,   313,    -1,   311,   146,   314,    -1,   314,
      -1,   312,    -1,   311,   146,   312,    -1,    58,   301,    -1,
      58,    -1,   112,   340,   124,   301,    -1,   112,   340,   124,
      -1,   380,    52,    -1,   380,    -1,   380,    34,    -1,   316,
      -1,   316,    88,   316,    -1,   316,    89,   316,    -1,   316,
      88,    -1,   316,    89,    -1,   318,    -1,   319,    -1,   320,
      -1,    90,   316,    -1,    91,   316,    -1,   325,    -1,   326,
      -1,   329,    -1,   330,    -1,   331,    -1,   336,    -1,   334,
      -1,   337,    -1,   358,    -1,    -1,   110,   317,   270,    -1,
      52,    -1,   132,    52,    -1,    98,   192,    -1,   320,    97,
     192,    -1,    56,    -1,   246,   322,   323,   253,   163,   321,
      -1,   410,    -1,   204,    -1,   217,    -1,   410,    -1,   100,
     191,    -1,   410,    -1,   247,   163,    -1,   410,    -1,   355,
      -1,   351,    -1,   327,    -1,    63,    -1,   328,    -1,   327,
     328,    -1,   112,   340,   119,    -1,   113,   341,   119,    -1,
     114,   342,    67,    -1,   115,   152,   332,   119,    -1,    -1,
     332,   333,   152,    -1,   343,    -1,   333,   343,    -1,   117,
     152,   335,   119,    -1,    -1,   335,   333,   152,    -1,   116,
     152,   338,   119,    -1,   118,   152,   339,   119,    -1,    -1,
     338,    66,   152,    -1,    -1,   339,    66,   152,    -1,    -1,
     340,   343,    -1,    -1,   341,   343,    -1,    -1,   342,   343,
      -1,    66,    -1,    -1,   122,   344,   350,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   345,   346,   347,   348,   349,   163,
     120,    -1,    54,    -1,    55,    -1,    57,    -1,   361,    -1,
     352,    -1,   354,    -1,   111,   353,    -1,   194,    -1,    55,
      -1,    54,    -1,    57,    -1,   111,   340,   119,    -1,   356,
      -1,   139,   356,    -1,    59,    -1,    60,    -1,    61,    -1,
      62,    -1,    52,    -1,    55,    -1,    54,    -1,    56,    -1,
      57,    -1,    34,    -1,    33,    -1,    35,    -1,    36,    -1,
      50,    -1,    49,    -1,    51,    -1,   357,    -1,   358,    -1,
     357,    -1,   358,    -1,    64,    -1,    65,    -1,    -1,   130,
     363,   175,   408,    -1,    -1,   148,   368,   405,    -1,   148,
     369,   405,    -1,    -1,   365,   368,   408,    -1,   379,   146,
     382,   391,    -1,   379,   391,    -1,   382,   391,    -1,   381,
     391,    -1,   390,    -1,   146,   366,    -1,    -1,   374,   146,
     386,   146,   388,   367,    -1,   374,   146,   386,   146,   388,
     146,   374,   367,    -1,   374,   146,   386,   367,    -1,   374,
     146,   386,   146,   374,   367,    -1,   374,   146,   388,   367,
      -1,   374,   146,   388,   146,   374,   367,    -1,   374,   367,
      -1,   386,   146,   388,   367,    -1,   386,   146,   388,   146,
     374,   367,    -1,   386,   367,    -1,   386,   146,   374,   367,
      -1,   388,   367,    -1,   388,   146,   374,   367,    -1,   366,
      -1,    -1,    91,    -1,    56,    -1,    55,    -1,    54,    -1,
      57,    -1,   370,    -1,    52,    -1,   371,    -1,   372,    -1,
     101,   260,   405,    -1,   373,    -1,   374,   146,   373,    -1,
      58,    -1,   375,   204,    -1,   375,    -1,   375,   233,    -1,
     375,    -1,   377,    -1,   378,   146,   377,    -1,   376,    -1,
     379,   146,   376,    -1,    77,    -1,   108,    -1,   380,    34,
      -1,   380,    52,    -1,   380,    -1,   372,   126,   204,    -1,
     372,   126,   233,    -1,   384,    -1,   385,   146,   384,    -1,
     383,    -1,   386,   146,   383,    -1,   136,    -1,   107,    -1,
     387,    52,    -1,   387,    -1,   133,    -1,   109,    -1,   389,
      52,    -1,   146,   390,    -1,   410,    -1,   359,    -1,    -1,
     148,   393,   171,   405,    -1,   410,    -1,   395,   407,    -1,
     396,    -1,   395,   146,   396,    -1,   204,   100,   204,    -1,
      58,   204,    -1,   112,   340,   124,   204,    -1,   108,   204,
      -1,    52,    -1,    56,    -1,    53,    -1,    52,    -1,    56,
      -1,    53,    -1,   198,    -1,    52,    -1,    53,    -1,   198,
      -1,    68,    -1,    97,    -1,    68,    -1,    96,    -1,   401,
      -1,    97,    -1,    -1,   409,    -1,    -1,   153,    -1,   404,
     149,    -1,   404,   150,    -1,    -1,   153,    -1,   146,    -1,
     151,    -1,   153,    -1,   408,    -1,   409,   151,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1173,  1173,  1173,  1199,  1205,  1212,  1219,  1226,  1232,
    1233,  1239,  1252,  1250,  1261,  1272,  1278,  1285,  1292,  1299,
    1305,  1310,  1309,  1319,  1319,  1326,  1333,  1343,  1351,  1358,
    1366,  1374,  1386,  1398,  1408,  1422,  1423,  1431,  1439,  1448,
    1455,  1458,  1466,  1474,  1483,  1491,  1499,  1507,  1515,  1525,
    1530,  1539,  1542,  1543,  1547,  1551,  1555,  1560,  1567,  1572,
    1559,  1584,  1587,  1594,  1594,  1594,  1600,  1601,  1604,  1605,
    1614,  1624,  1634,  1643,  1654,  1661,  1668,  1675,  1682,  1690,
    1698,  1705,  1712,  1721,  1722,  1731,  1732,  1741,  1748,  1755,
    1762,  1769,  1776,  1783,  1790,  1797,  1804,  1813,  1814,  1823,
    1830,  1839,  1846,  1855,  1862,  1869,  1876,  1886,  1893,  1903,
    1910,  1917,  1927,  1934,  1941,  1948,  1955,  1962,  1969,  1976,
    1983,  1993,  2000,  2003,  2010,  2017,  2026,  2027,  2028,  2029,
    2034,  2041,  2048,  2051,  2058,  2058,  2068,  2069,  2070,  2071,
    2072,  2073,  2074,  2075,  2076,  2077,  2078,  2079,  2080,  2081,
    2082,  2083,  2084,  2085,  2086,  2087,  2088,  2089,  2090,  2091,
    2092,  2093,  2094,  2095,  2096,  2097,  2100,  2100,  2100,  2101,
    2101,  2102,  2102,  2102,  2103,  2103,  2103,  2103,  2104,  2104,
    2104,  2104,  2105,  2105,  2105,  2106,  2106,  2106,  2106,  2107,
    2107,  2107,  2107,  2108,  2108,  2108,  2108,  2109,  2109,  2109,
    2109,  2110,  2110,  2110,  2110,  2111,  2111,  2114,  2121,  2128,
    2136,  2144,  2152,  2160,  2168,  2175,  2183,  2192,  2201,  2213,
    2225,  2237,  2249,  2253,  2257,  2261,  2265,  2269,  2273,  2277,
    2281,  2285,  2289,  2293,  2297,  2301,  2302,  2306,  2310,  2314,
    2318,  2322,  2326,  2330,  2334,  2338,  2342,  2346,  2346,  2351,
    2360,  2366,  2367,  2368,  2369,  2372,  2376,  2383,  2390,  2391,
    2395,  2402,  2411,  2416,  2427,  2434,  2463,  2464,  2467,  2468,
    2469,  2473,  2480,  2489,  2497,  2504,  2512,  2520,  2524,  2524,
    2561,  2570,  2574,  2580,  2587,  2594,  2601,  2610,  2611,  2614,
    2621,  2628,  2637,  2638,  2639,  2640,  2641,  2642,  2643,  2644,
    2645,  2646,  2647,  2655,  2654,  2669,  2669,  2676,  2676,  2684,
    2692,  2699,  2706,  2713,  2721,  2728,  2735,  2742,  2749,  2749,
    2754,  2758,  2762,  2769,  2770,  2779,  2778,  2789,  2800,  2811,
    2821,  2832,  2831,  2848,  2847,  2862,  2872,  2920,  2919,  2943,
    2942,  2965,  2964,  2988,  2993,  2987,  3013,  3014,  3013,  3038,
    3045,  3052,  3059,  3068,  3075,  3081,  3098,  3104,  3110,  3116,
    3122,  3128,  3134,  3140,  3146,  3152,  3158,  3164,  3170,  3176,
    3191,  3198,  3204,  3211,  3212,  3213,  3216,  3217,  3220,  3221,
    3233,  3234,  3243,  3244,  3247,  3255,  3264,  3271,  3280,  3287,
    3294,  3301,  3308,  3317,  3325,  3334,  3338,  3342,  3346,  3350,
    3356,  3361,  3366,  3370,  3374,  3378,  3382,  3386,  3394,  3398,
    3402,  3406,  3410,  3414,  3418,  3422,  3426,  3432,  3433,  3439,
    3448,  3460,  3464,  3473,  3475,  3479,  3484,  3490,  3493,  3497,
    3501,  3505,  3490,  3529,  3537,  3547,  3552,  3558,  3568,  3582,
    3589,  3596,  3605,  3614,  3622,  3630,  3637,  3645,  3653,  3660,
    3667,  3680,  3688,  3698,  3699,  3703,  3698,  3720,  3721,  3725,
    3720,  3744,  3752,  3759,  3767,  3776,  3788,  3789,  3793,  3799,
    3804,  3808,  3792,  3821,  3822,  3825,  3826,  3834,  3844,  3845,
    3850,  3858,  3862,  3868,  3871,  3880,  3883,  3890,  3893,  3894,
    3902,  3910,  3915,  3923,  3931,  3936,  3940,  3945,  3949,  3954,
    3960,  3969,  3973,  3982,  3986,  3990,  3994,  3998,  4001,  4005,
    4014,  4018,  4022,  4026,  4032,  4033,  4042,  4051,  4055,  4059,
    4063,  4067,  4073,  4074,  4083,  4090,  4101,  4116,  4139,  4143,
    4149,  4155,  4156,  4165,  4174,  4186,  4198,  4199,  4200,  4201,
    4213,  4227,  4228,  4229,  4230,  4231,  4232,  4233,  4234,  4235,
    4243,  4242,  4255,  4265,  4278,  4285,  4292,  4301,  4313,  4316,
    4323,  4330,  4333,  4337,  4340,  4347,  4350,  4351,  4354,  4371,
    4372,  4373,  4382,  4392,  4401,  4407,  4417,  4423,  4432,  4434,
    4443,  4453,  4459,  4468,  4477,  4487,  4493,  4503,  4509,  4519,
    4525,  4535,  4541,  4551,  4561,  4602,  4604,  4603,  4620,  4624,
    4629,  4633,  4637,  4619,  4658,  4665,  4672,  4679,  4682,  4683,
    4686,  4696,  4697,  4698,  4699,  4702,  4712,  4713,  4723,  4724,
    4725,  4726,  4729,  4730,  4731,  4732,  4733,  4736,  4737,  4738,
    4739,  4740,  4741,  4742,  4745,  4758,  4767,  4774,  4783,  4784,
    4788,  4787,  4797,  4805,  4814,  4829,  4829,  4843,  4847,  4851,
    4855,  4859,  4865,  4870,  4875,  4879,  4883,  4887,  4891,  4895,
    4899,  4903,  4907,  4911,  4915,  4919,  4923,  4927,  4932,  4938,
    4947,  4955,  4963,  4971,  4981,  4982,  4990,  4999,  5007,  5028,
    5030,  5043,  5053,  5061,  5071,  5078,  5087,  5094,  5104,  5111,
    5120,  5121,  5124,  5132,  5140,  5150,  5160,  5170,  5177,  5186,
    5193,  5202,  5203,  5206,  5214,  5224,  5225,  5228,  5238,  5242,
    5248,  5253,  5253,  5277,  5278,  5287,  5289,  5312,  5323,  5330,
    5338,  5357,  5358,  5359,  5362,  5363,  5364,  5365,  5368,  5369,
    5370,  5373,  5374,  5377,  5378,  5381,  5382,  5385,  5386,  5389,
    5390,  5393,  5396,  5399,  5400,  5401,  5404,  5405,  5408,  5409,
    5413
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end-of-input\"", "error", "$undefined", "\"`class'\"",
  "\"`module'\"", "\"`def'\"", "\"`undef'\"", "\"`begin'\"",
  "\"`rescue'\"", "\"`ensure'\"", "\"`end'\"", "\"`if'\"", "\"`unless'\"",
  "\"`then'\"", "\"`elsif'\"", "\"`else'\"", "\"`case'\"", "\"`when'\"",
  "\"`while'\"", "\"`until'\"", "\"`for'\"", "\"`break'\"", "\"`next'\"",
  "\"`redo'\"", "\"`retry'\"", "\"`in'\"", "\"`do'\"",
  "\"`do' for condition\"", "\"`do' for block\"", "\"`do' for lambda\"",
  "\"`return'\"", "\"`yield'\"", "\"`super'\"", "\"`self'\"", "\"`nil'\"",
  "\"`true'\"", "\"`false'\"", "\"`and'\"", "\"`or'\"", "\"`not'\"",
  "\"`if' modifier\"", "\"`unless' modifier\"", "\"`while' modifier\"",
  "\"`until' modifier\"", "\"`rescue' modifier\"", "\"`alias'\"",
  "\"`defined?'\"", "\"`BEGIN'\"", "\"`END'\"", "\"`__LINE__'\"",
  "\"`__FILE__'\"", "\"`__ENCODING__'\"", "\"local variable or method\"",
  "\"method\"", "\"global variable\"", "\"instance variable\"",
  "\"constant\"", "\"class variable\"", "tLABEL", "\"integer literal\"",
  "\"float literal\"", "\"rational literal\"", "\"imaginary literal\"",
  "\"char literal\"", "\"numbered reference\"", "\"back reference\"",
  "\"literal content\"", "tREGEXP_END", "'.'", "\"backslash\"",
  "\"escaped space\"", "\"escaped horizontal tab\"",
  "\"escaped form feed\"", "\"escaped carriage return\"",
  "\"escaped vertical tab\"", "\"unary+\"", "\"unary-\"", "\"**\"",
  "\"<=>\"", "\"==\"", "\"===\"", "\"!=\"", "\">=\"", "\"<=\"", "\"&&\"",
  "\"||\"", "\"=~\"", "\"!~\"", "\"..\"", "\"...\"", "\"(..\"", "\"(...\"",
  "\"[]\"", "\"[]=\"", "\"<<\"", "\">>\"", "\"&.\"", "\"::\"",
  "\":: at EXPR_BEG\"", "\"operator-assignment\"", "\"=>\"", "\"(\"",
  "\"( arg\"", "\")\"", "\"[\"", "\"{\"", "\"{ arg\"", "\"*\"",
  "\"**arg\"", "\"&\"", "\"->\"", "\"symbol literal\"",
  "\"string literal\"", "\"backtick literal\"", "\"regexp literal\"",
  "\"word list\"", "\"verbatim word list\"", "\"symbol list\"",
  "\"verbatim symbol list\"", "\"terminator\"", "\"'}'\"", "tSTRING_DBEG",
  "tSTRING_DVAR", "tLAMBEG", "tLABEL_END", "tLOWEST", "'='", "'?'", "':'",
  "'>'", "'<'", "'|'", "'^'", "'&'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "tUMINUS_NUM", "'!'", "'~'", "tLAST_TOKEN", "'{'", "'}'", "'['", "','",
  "'`'", "'('", "')'", "']'", "';'", "' '", "'\\n'", "$accept", "program",
  "@1", "top_compstmt", "top_stmts", "top_stmt", "begin_block", "bodystmt",
  "@2", "compstmt", "stmts", "stmt_or_begin", "@3", "stmt", "@4",
  "command_asgn", "command_rhs", "expr", "@5", "@6", "@7", "expr_value",
  "expr_value_do", "@8", "@9", "command_call", "block_command",
  "cmd_brace_block", "fcall", "command", "mlhs", "mlhs_inner",
  "mlhs_basic", "mlhs_item", "mlhs_head", "mlhs_post", "mlhs_node", "lhs",
  "cname", "cpath", "fname", "fitem", "undef_list", "@10", "op",
  "reswords", "arg", "@11", "relop", "rel_expr", "arg_value", "aref_args",
  "arg_rhs", "paren_args", "opt_paren_args", "opt_call_args", "call_args",
  "command_args", "@12", "block_arg", "opt_block_arg", "args", "mrhs_arg",
  "mrhs", "primary", "@13", "@14", "@15", "@16", "@17", "@18", "@19",
  "@20", "@21", "@22", "@23", "@24", "@25", "@26", "primary_value",
  "k_begin", "k_if", "k_unless", "k_while", "k_until", "k_case", "k_for",
  "k_class", "k_module", "k_def", "k_do", "k_do_block", "k_rescue",
  "k_ensure", "k_when", "k_else", "k_elsif", "k_end", "k_return", "then",
  "do", "if_tail", "opt_else", "for_var", "f_marg", "f_marg_list",
  "f_margs", "f_rest_marg", "block_args_tail", "opt_block_args_tail",
  "block_param", "opt_block_param", "block_param_def", "opt_bv_decl",
  "bv_decls", "bvar", "lambda", "@27", "@28", "@29", "@30", "@31",
  "f_larglist", "lambda_body", "do_block", "block_call", "method_call",
  "brace_block", "brace_body", "@32", "@33", "@34", "do_body", "@35",
  "@36", "@37", "case_args", "case_body", "cases", "p_case_body", "@38",
  "@39", "@40", "@41", "p_cases", "p_top_expr", "p_top_expr_body",
  "p_expr", "p_as", "p_alt", "p_expr_basic", "p_args", "p_args_head",
  "p_args_tail", "p_args_post", "p_arg", "p_kwargs", "p_kwarg", "p_kw",
  "p_kwrest", "p_kwnorest", "p_value", "p_primitive", "@42", "p_variable",
  "p_var_ref", "p_const", "opt_rescue", "exc_list", "exc_var",
  "opt_ensure", "literal", "strings", "string", "string1", "xstring",
  "regexp", "words", "word_list", "word", "symbols", "symbol_list",
  "qwords", "qsymbols", "qword_list", "qsym_list", "string_contents",
  "xstring_contents", "regexp_contents", "string_content", "@43", "@44",
  "@45", "@46", "@47", "@48", "string_dvar", "symbol", "ssym", "sym",
  "dsym", "numeric", "simple_numeric", "user_variable", "keyword_variable",
  "var_ref", "var_lhs", "backref", "superclass", "@49", "f_arglist", "@50",
  "args_tail", "opt_args_tail", "f_args", "args_forward", "f_bad_arg",
  "f_norm_arg", "f_arg_asgn", "f_arg_item", "f_arg", "f_label", "f_kw",
  "f_block_kw", "f_block_kwarg", "f_kwarg", "kwrest_mark", "f_no_kwarg",
  "f_kwrest", "f_opt", "f_block_opt", "f_block_optarg", "f_optarg",
  "restarg_mark", "f_rest_arg", "blkarg_mark", "f_block_arg",
  "opt_f_block_arg", "singleton", "@51", "assoc_list", "assocs", "assoc",
  "operation", "operation2", "operation3", "dot_or_colon", "call_op",
  "call_op2", "opt_terms", "opt_nl", "rparen", "rbracket", "trailer",
  "term", "terms", "none", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,    46,    92,
     323,     9,    12,    13,    11,   132,   133,   134,   135,   140,
     141,   142,   139,   138,   148,   149,   143,   144,   128,   129,
     130,   131,   145,   146,   136,   137,   150,   147,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,    61,    63,    58,    62,
      60,   124,    94,    38,    43,    45,    42,    47,    37,   352,
      33,   126,   353,   123,   125,    91,    44,    96,    40,    41,
      93,    59,    32,    10
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   154,   156,   155,   157,   158,   158,   158,   158,   159,
     159,   160,   162,   161,   161,   163,   164,   164,   164,   164,
     165,   166,   165,   168,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   169,   169,   169,   169,   169,   169,   169,   169,   170,
     170,   170,   171,   171,   171,   171,   171,   172,   173,   174,
     171,   171,   175,   177,   178,   176,   179,   179,   180,   180,
     181,   182,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   184,   184,   185,   185,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   187,   187,   188,
     188,   189,   189,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   192,   192,   193,   193,   193,   194,   194,   194,   194,
     194,   195,   195,   196,   197,   196,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   201,   200,   200,
     200,   202,   202,   202,   202,   203,   203,   204,   205,   205,
     205,   205,   206,   206,   207,   207,   208,   208,   209,   209,
     209,   209,   209,   210,   210,   210,   210,   210,   212,   211,
     213,   214,   214,   215,   215,   215,   215,   216,   216,   217,
     217,   217,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   219,   218,   220,   218,   221,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   222,   218,
     218,   218,   218,   218,   218,   223,   218,   218,   218,   218,
     218,   224,   218,   225,   218,   218,   218,   226,   218,   227,
     218,   228,   218,   229,   230,   218,   231,   232,   218,   218,
     218,   218,   218,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   253,   253,   254,   254,   255,   255,
     256,   256,   257,   257,   258,   258,   259,   259,   260,   260,
     260,   260,   260,   261,   261,   262,   262,   262,   262,   262,
     263,   263,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   265,   265,   266,
     266,   267,   267,   268,   268,   269,   269,   271,   272,   273,
     274,   275,   270,   276,   276,   277,   277,   278,   279,   279,
     279,   279,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   281,   281,   283,   284,   285,   282,   287,   288,   289,
     286,   290,   290,   290,   290,   291,   292,   292,   294,   295,
     296,   297,   293,   298,   298,   299,   299,   299,   300,   300,
     300,   300,   300,   301,   302,   302,   303,   303,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     305,   305,   305,   305,   305,   305,   305,   305,   306,   306,
     307,   307,   307,   307,   308,   308,   309,   310,   310,   310,
     310,   310,   311,   311,   312,   312,   312,   312,   313,   313,
     314,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     317,   316,   318,   319,   320,   320,   320,   321,   321,   322,
     322,   322,   323,   323,   324,   324,   325,   325,   326,   327,
     327,   327,   328,   329,   330,   331,   332,   332,   333,   333,
     334,   335,   335,   336,   337,   338,   338,   339,   339,   340,
     340,   341,   341,   342,   342,   343,   344,   343,   345,   346,
     347,   348,   349,   343,   350,   350,   350,   350,   351,   351,
     352,   353,   353,   353,   353,   354,   355,   355,   356,   356,
     356,   356,   357,   357,   357,   357,   357,   358,   358,   358,
     358,   358,   358,   358,   359,   359,   360,   360,   361,   361,
     363,   362,   362,   364,   364,   365,   364,   366,   366,   366,
     366,   366,   367,   367,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   369,
     370,   370,   370,   370,   371,   371,   372,   373,   373,   374,
     374,   375,   376,   376,   377,   377,   378,   378,   379,   379,
     380,   380,   381,   382,   382,   383,   384,   385,   385,   386,
     386,   387,   387,   388,   388,   389,   389,   390,   391,   391,
     392,   393,   392,   394,   394,   395,   395,   396,   396,   396,
     396,   397,   397,   397,   398,   398,   398,   398,   399,   399,
     399,   400,   400,   401,   401,   402,   402,   403,   403,   404,
     404,   405,   406,   407,   407,   407,   408,   408,   409,   409,
     410
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     3,     2,     1,
       2,     3,     0,     6,     3,     2,     1,     1,     3,     2,
       1,     0,     3,     0,     4,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     4,     1,     3,     3,     5,     3,
       1,     3,     3,     6,     5,     5,     5,     5,     3,     1,
       3,     1,     1,     3,     3,     3,     2,     0,     0,     0,
       6,     1,     1,     0,     0,     4,     1,     1,     1,     4,
       3,     1,     2,     3,     4,     5,     4,     5,     2,     2,
       2,     2,     2,     1,     3,     1,     3,     1,     2,     3,
       5,     2,     4,     2,     4,     1,     3,     1,     3,     2,
       3,     1,     3,     1,     1,     4,     3,     3,     3,     3,
       2,     1,     1,     1,     4,     3,     3,     3,     3,     2,
       1,     1,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     6,
       5,     5,     5,     5,     4,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     4,     2,
       2,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       3,     2,     2,     3,     3,     3,     3,     0,     4,     6,
       1,     1,     1,     1,     1,     3,     3,     1,     1,     2,
       4,     2,     1,     3,     3,     3,     1,     1,     1,     1,
       2,     4,     2,     1,     2,     2,     4,     1,     0,     2,
       2,     2,     1,     1,     2,     3,     4,     1,     1,     3,
       4,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     0,     3,     0,     4,     3,
       3,     2,     3,     3,     1,     4,     3,     1,     0,     6,
       4,     3,     2,     1,     2,     0,     3,     6,     6,     4,
       4,     0,     6,     0,     5,     5,     6,     0,     6,     0,
       7,     0,     5,     0,     0,     7,     0,     0,     9,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     5,
       1,     2,     1,     1,     1,     3,     1,     3,     1,     3,
       5,     1,     3,     2,     1,     4,     2,     2,     2,     1,
       2,     0,     6,     8,     4,     6,     4,     2,     6,     2,
       4,     6,     2,     4,     2,     4,     1,     1,     1,     3,
       4,     1,     4,     1,     3,     1,     1,     0,     0,     0,
       0,     0,     7,     4,     1,     3,     3,     3,     2,     4,
       5,     5,     2,     4,     4,     3,     3,     3,     2,     1,
       4,     3,     3,     0,     0,     0,     5,     0,     0,     0,
       5,     1,     2,     3,     4,     5,     1,     1,     0,     0,
       0,     0,     9,     1,     1,     1,     3,     3,     1,     2,
       3,     1,     1,     1,     3,     1,     3,     1,     1,     4,
       4,     3,     4,     4,     3,     3,     2,     3,     2,     3,
       1,     1,     2,     3,     5,     2,     4,     1,     2,     3,
       2,     4,     1,     3,     1,     3,     1,     3,     1,     1,
       3,     1,     1,     3,     2,     1,     4,     3,     2,     1,
       2,     1,     3,     3,     2,     2,     1,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     1,     2,     2,     3,     1,     6,     1,     1,
       1,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     3,     4,     0,     3,     1,     2,
       4,     0,     3,     4,     4,     0,     3,     0,     3,     0,
       2,     0,     2,     0,     2,     1,     0,     3,     0,     0,
       0,     0,     0,     8,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     0,     3,     3,     0,     3,     4,     2,     2,
       2,     1,     2,     0,     6,     8,     4,     6,     4,     6,
       2,     4,     6,     2,     4,     2,     4,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     1,     2,     1,     2,     1,     1,     3,     1,     3,
       1,     1,     2,     2,     1,     3,     3,     1,     3,     1,
       3,     1,     1,     2,     1,     1,     1,     2,     2,     1,
       1,     0,     4,     1,     2,     1,     3,     3,     2,     4,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       1,     2,     2,     0,     1,     1,     1,     1,     1,     2,
       0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     1,     0,   361,   362,   363,     0,   354,
     355,   356,   359,   357,   358,   360,   349,   350,   351,   352,
     372,   278,   278,   628,   627,   629,   630,   739,     0,   739,
       0,     0,   632,   631,   633,   721,   723,   624,   623,   722,
     626,   618,   619,   620,   621,   569,   638,   639,     0,     0,
       0,     0,     0,     0,   305,   750,   750,    95,   325,   589,
     589,   591,   593,     0,     0,     0,     0,     0,     0,     0,
       3,   737,     6,     9,    35,    40,    52,    67,   278,    66,
       0,    83,     0,    87,    97,     0,    61,   235,   250,     0,
     303,     0,     0,    63,    63,   737,     0,     0,     0,     0,
     314,    68,   323,   292,   293,   568,   570,   294,   295,   296,
     298,   297,   299,   567,   608,   609,   566,   616,   634,   635,
     300,     0,   301,    71,     5,     8,   176,   187,   177,   200,
     173,   193,   183,   182,   203,   204,   198,   181,   180,   175,
     201,   205,   206,   185,   174,   188,   192,   194,   186,   179,
     195,   202,   197,   196,   189,   199,   184,   172,   191,   190,
     171,   178,   169,   170,   166,   167,   168,   126,   128,   127,
     161,   162,   157,   139,   140,   141,   148,   145,   147,   142,
     143,   163,   164,   149,   150,   154,   158,   144,   146,   136,
     137,   138,   151,   152,   153,   155,   156,   159,   160,   165,
     131,   133,    28,   129,   130,   132,     0,     0,     0,     0,
       0,     0,     0,   589,     0,   273,     0,   257,   283,    81,
     277,   750,     0,   634,   635,     0,   301,   750,   715,    82,
     739,    79,     0,   750,   448,    78,   739,   740,     0,     0,
      23,   247,     0,    10,     0,   349,   350,   317,   449,     0,
     229,     0,   314,   230,   220,   221,   311,     0,    21,     0,
       0,   737,    17,    20,   739,    85,    16,   307,   739,     0,
     743,   743,   258,     0,     0,   743,   713,   739,     0,     0,
       0,    93,   353,     0,   103,   104,   111,   427,   613,   612,
     614,   611,     0,   610,     0,     0,     0,   576,   585,   581,
     587,   617,    56,   241,   242,   746,   747,     4,   748,   738,
       0,     0,     0,     0,     0,     0,     0,   364,   453,   442,
      72,   457,   322,   365,   457,   438,     0,    99,     0,    91,
      88,     0,    57,     0,     0,     0,     0,     0,   253,   254,
       0,     0,     0,     0,   218,   219,     0,     0,     0,   251,
     252,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   733,   734,     0,   750,     0,     0,    62,     0,     0,
       0,     0,     0,   737,   333,   738,     0,   383,   382,     0,
       0,   634,   635,   301,   121,   122,     0,     0,   124,   642,
       0,   634,   635,   301,   341,   196,   189,   199,   184,   166,
     167,   168,   126,   127,   711,   343,   710,     0,    80,   736,
     735,     0,   324,   571,     0,     0,   134,   718,   311,   284,
     720,   280,     0,     0,     0,     0,   274,   282,     0,   750,
       0,     0,     0,     0,   275,   739,     0,   316,   279,   669,
     739,   269,   750,   739,   750,   268,   739,   321,    55,    25,
      27,    26,     0,   318,     0,     0,     0,     0,     0,     0,
      19,     0,   739,   309,    15,   738,    84,   739,   306,   312,
     745,   744,   259,   745,   261,   313,   714,     0,   110,   617,
     101,    96,     0,     0,   750,     0,   326,   428,   595,   615,
     598,   596,   590,   572,   573,   592,   574,   594,     0,     0,
       0,     0,     0,   749,     7,    29,    30,    31,    32,    33,
      53,    54,     0,   454,   453,    73,     0,   458,     0,     0,
      36,   288,     0,    39,   287,   739,     0,    89,   100,    51,
      41,    49,     0,   262,   283,   207,    37,     0,   301,    58,
     227,   234,   236,   237,   238,   245,   246,   239,   240,   216,
     217,   243,   244,   739,   231,   232,   233,   222,   223,   224,
     225,   226,   255,   256,   724,   726,   725,   727,   447,   278,
     445,   739,   724,   726,   725,   727,   446,   278,     0,   750,
     374,     0,   373,     0,     0,     0,     0,   331,     0,   311,
       0,   750,     0,    63,   339,   121,   122,   123,   640,   337,
       0,   750,     0,     0,     0,   344,   731,   732,   346,   724,
     725,   278,    42,   262,   208,    48,   215,     0,     0,   717,
       0,   285,   281,   750,   724,   725,   739,   724,   725,   716,
     315,   741,   264,   270,   265,   272,   320,    24,     0,   248,
      11,    34,     0,   750,   214,    22,    86,    18,   308,   743,
       0,    94,   728,   109,   739,   724,   725,   429,   599,     0,
     575,     0,   578,     0,   583,   580,     0,     0,   584,   228,
     451,   455,     0,   371,   452,   459,   437,   291,     0,     0,
      98,    92,     0,     0,     0,     0,     0,   750,     0,     0,
       0,     0,     0,   444,    76,     0,   450,     0,     0,   267,
     443,    74,   266,   304,   366,   750,   750,   558,   750,   375,
     750,   329,   377,    64,   376,   330,   468,     0,     0,   368,
       0,     0,   728,   310,   739,   724,   725,     0,     0,     0,
       0,   121,   122,   125,   739,     0,   739,   645,     0,   439,
      69,   135,   719,   286,   276,     0,     0,   450,     0,     0,
     750,   739,   260,   102,   450,   430,   600,   604,   605,   606,
     597,   607,   577,   579,   586,   582,   588,   750,    70,   750,
       0,   289,    38,    90,    50,   263,   724,   725,   739,   724,
     725,   552,   556,     0,     0,     0,     0,   739,     0,   550,
       0,    59,   483,   485,   487,   488,   531,   536,   537,   538,
     541,   542,   543,   544,   545,   547,   546,   548,   549,     0,
      47,   212,    46,   213,    77,   742,     0,    44,   210,    45,
     211,    75,   559,   560,   750,   561,   367,   369,     0,    12,
      14,   565,   370,     0,     0,     0,   378,   380,     0,    65,
     469,     0,   335,     0,   461,     0,   334,   450,     0,     0,
       0,     0,   450,   342,   712,   668,     0,   668,   347,   440,
     441,     0,   271,   319,   668,   601,   739,     0,   418,   417,
       0,   290,   450,   539,   540,   122,   554,   739,   512,   500,
     739,   501,   507,     0,   496,   525,   690,   691,   589,   498,
       0,   518,   522,   519,   521,   529,   427,   553,     0,    60,
       0,   534,   535,     0,   739,   739,   249,    43,   209,     0,
       0,   563,   564,     0,   381,     0,   327,   328,     0,   332,
     462,     0,     0,   336,     0,   641,   338,   675,   672,   671,
     670,   673,   681,   669,     0,   702,   706,   705,   701,   667,
     739,   739,   674,   676,   677,   679,   653,   683,   688,   750,
     694,   750,   750,   699,   653,   704,   653,     0,   651,     0,
       0,   645,   668,   431,   434,   602,   416,   739,     0,   677,
     401,   685,   686,   750,   750,   750,   697,   401,   401,   399,
     421,   456,   460,   499,   510,     0,   495,   505,   516,   502,
     508,   524,     0,   497,     0,   530,   528,   551,   484,   486,
     532,   533,   555,   589,   739,   739,   494,   739,   739,   491,
       0,   562,     0,   634,   635,   301,     0,   750,     0,     0,
     475,   478,   481,   482,     0,   463,   750,   340,     0,   394,
     386,   388,   739,   391,   384,   643,   644,     0,     0,   660,
     682,     0,   648,   709,   692,   693,     0,   650,   649,     0,
     663,   703,     0,   665,   707,   345,   646,     0,   739,     0,
       0,     0,   419,     0,   407,   409,     0,   684,     0,   396,
     398,   397,     0,   412,     0,   414,     0,     0,   513,   514,
     503,     0,   509,   527,   523,   517,   520,     0,   492,   493,
     489,   490,   311,     0,   750,     0,   750,    13,   750,   470,
       0,     0,   479,   464,   466,   467,   465,   739,   393,     0,
     678,     0,   695,   652,   680,   653,   653,   689,   694,   750,
     708,   653,   700,   653,   677,   653,     0,     0,     0,     0,
     432,     0,   420,   696,   400,   401,   401,   311,     0,   687,
     750,   401,   698,   401,   401,   425,   739,   423,   426,   511,
       0,     0,   506,   526,   728,   310,   739,   724,   725,   557,
     379,   471,   476,   477,   480,   385,   387,   389,   392,     0,
     656,     0,   658,   647,     0,   664,     0,   661,   666,   348,
     433,     0,     0,   603,     0,   404,     0,   406,   728,   310,
     395,     0,   413,     0,   410,   415,     0,   422,   515,   504,
     450,     0,     0,     0,   653,   653,   653,   653,   436,   435,
     401,   401,   401,   401,   424,   750,   390,   657,     0,   654,
     659,   662,   405,     0,   402,   408,   411,   473,   474,   472,
     653,   401,   655,   403
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    70,    71,    72,   243,   578,   913,   579,
     261,   262,   461,   263,   452,    74,   530,    75,   539,   689,
     899,   368,   370,   371,   839,    76,    77,   515,   249,    79,
      80,   264,    81,    82,    83,   481,    84,   216,   388,   389,
     200,   201,   202,   617,   567,   204,    86,   454,   359,    87,
     218,   269,   535,   568,   700,   440,   441,   231,   232,   220,
     426,   442,   523,   524,    88,   366,   268,   467,   638,   287,
     717,   588,   730,   728,   603,   605,   737,   738,   961,   251,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     321,   324,   705,   828,   720,   833,   834,   674,   252,   581,
     713,   835,   836,   380,  1030,  1031,  1032,  1033,  1134,  1065,
     967,   867,   868,   968,  1146,  1147,   486,   487,   657,   755,
     864,  1059,   963,  1130,   325,   101,   102,   322,   512,   513,
     671,   767,   516,   517,   675,   769,   845,   721,  1106,   718,
     840,   918,  1161,  1201,  1229,  1019,  1020,   988,   792,   793,
     794,   880,   881,   882,  1078,   883,   890,   891,   892,   893,
     894,   795,   796,   896,   797,   798,   799,   706,   824,   910,
     830,   103,   104,   105,   106,   107,   108,   109,   498,   661,
     110,   500,   111,   112,   499,   501,   292,   295,   296,   492,
     659,   658,   756,   865,   965,  1060,   760,   113,   114,   293,
     115,   116,   117,   223,   224,   120,   225,   226,   599,   729,
     856,   857,  1113,  1039,   940,   443,   942,   943,  1124,   945,
     946,   947,   948,   972,   973,   949,   950,   951,   952,   953,
     976,   977,   954,   955,   956,   957,   958,  1042,   407,   604,
     274,   444,   228,   123,   642,   570,   608,   602,   411,   307,
     436,   437,   696,   472,   582,   375,   266
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1022
static const yytype_int16 yypact[] =
{
   -1022,   178,  3793, -1022,  9350, -1022, -1022, -1022,  8808, -1022,
   -1022, -1022, -1022, -1022, -1022, -1022,  9476,  9476, -1022, -1022,
   -1022,  5268,  4827, -1022, -1022, -1022, -1022,    26,  8663,   193,
      68,   140, -1022, -1022, -1022,  4092,  4974, -1022, -1022,  4239,
   -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, 11114, 11114,
   11114, 11114,   221,  6863,  9602,  9980, 10358,  9092, -1022,  8518,
   -1022, -1022, -1022,   282,   299,   303,   308,   947, 11240, 11114,
   -1022,   227, -1022,  1278, -1022,   780, -1022, -1022,    25,   494,
     340, -1022,   382, 11492, -1022,   405,  2526,   697,   473,   508,
   -1022, 11366, 11366, -1022, -1022,  7845, 11614, 11736, 11858,  8372,
    9476,   307,    66, -1022, -1022,   455, -1022, -1022, -1022, -1022,
   -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022,   318,   327,
   -1022,   474,   413, -1022, -1022, -1022, -1022, -1022, -1022, -1022,
   -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022,
   -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022,
   -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022,
   -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022,
   -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022,
   -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022,
   -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022,
   -1022, -1022,   498, -1022, -1022, -1022,   504, 11114,   598,  7014,
   11114, 11114, 11114, -1022, 11114, -1022,   546,  4070,   584, -1022,
   -1022,   541,   534,   243,   292,   597,   611,   556, -1022, -1022,
    7719, -1022,  9476,  9728, -1022, -1022,  7971, -1022, 11366,   877,
   -1022,   567,  7165, -1022,  7316, -1022, -1022,   590,   612,    25,
   -1022,   734, -1022,   696,  4217,  4217,   438,  9602, -1022,  6863,
     626,   227, -1022,  1278,   193,   658, -1022,  1278,   193,   636,
     483,   582, -1022,   584,   679,   582, -1022,   193,   776,   947,
   11980,   700, -1022,   737,   743,   748,   751, -1022, -1022, -1022,
   -1022, -1022,   425, -1022,   808,   818,   527, -1022, -1022, -1022,
   -1022,   791, -1022, -1022, -1022, -1022, -1022, -1022, -1022,  8097,
   11366, 11366, 11366, 11366,  9602, 11366, 11366, -1022, -1022, -1022,
     767, -1022, -1022, -1022, -1022, -1022, 10484, -1022,  6863,  9221,
     762, 10484, -1022, 11114, 11114, 11114, 11114, 11114, -1022, -1022,
   11114, 11114, 11114, 11114, 11114, 11114, 11114, 11114, 11114, -1022,
   -1022, 11114, 11114, 11114, 11114, 11114, 11114, 11114, 11114, 11114,
   11114, -1022, -1022, 12569,  9476, 12659,  6007,   780,    85,    85,
    7467, 11366,  7467,   227, -1022,   732,   833, -1022, -1022,   757,
     869,    49,    72,    78,   655,   693, 11366,    62, -1022,   783,
     769, -1022, -1022, -1022, -1022,    63,    88,   424,   459,   510,
     519,   560,   596,   608, -1022, -1022, -1022,   620, -1022, -1022,
   -1022, 13919, -1022, -1022, 11240, 11240, -1022, -1022,   623, -1022,
   -1022, -1022,   324, 11114, 11114,  9854, -1022, -1022, 12749,  9476,
   12839, 11114, 11114, 10106, -1022,   193,   771, -1022, -1022, 11114,
     193, -1022,   770,   193,   778, -1022,   113, -1022, -1022, -1022,
   -1022, -1022,  8808, -1022, 11114,   799,   810, 12749, 12839, 11114,
    1278,    68,   193, -1022, -1022,  8223,   815,   193, -1022, -1022,
   10232, -1022, -1022, 10358, -1022, -1022, -1022,   567,   781, -1022,
   -1022,   822, 11980, 12929,  9476, 13019, -1022, -1022, -1022, -1022,
   -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022,   841,    75,
     857,    95, 11114, -1022, -1022, -1022, -1022, -1022, -1022, -1022,
   -1022, -1022,   836, -1022, -1022, -1022,   967, -1022,   967, 11114,
   -1022,   851,   855,   891, -1022,   193, 11980,   866, -1022, -1022,
   -1022,   943,   888,  3132, -1022, -1022, -1022,   789,   632, -1022,
     696,  3923,  3923,  3923,  3923,  4364,  2866,  3923,  3923,  4217,
    4217,  1045,  1045,  5386,   928,   928,  1470,   529,   529,   696,
     696,   696,  1590,  1590,  3503,  4386,  5562,  4533, -1022,   612,
   -1022,   193,   454, -1022,   486, -1022, -1022,  5121,   967,   987,
   -1022,  6158,   990,  6611,   967,    46,   967,   993,  1004,    97,
   13109,  9476, 13199, -1022,   780, -1022,   781, -1022, -1022, -1022,
   13289,  9476, 13379,  6007, 11366, -1022, -1022, -1022, -1022, -1022,
   -1022,  5856, -1022,  3338, -1022, -1022, -1022,  8808, 11114, -1022,
   11114,   584, -1022,   556,  3945,  4680,   193,   633,   637, -1022,
   -1022, -1022, -1022,  9854, -1022, 10106, -1022, -1022, 11366,  4070,
   -1022, -1022,   612,   612, -1022, -1022,   496, -1022, -1022,   582,
   11980,   822,   563,   523,   193,    38,   246, -1022, -1022,  1108,
   -1022,   316, -1022,   878, -1022, -1022,   381,   894, -1022,   696,
   -1022, -1022,   899, -1022, -1022, -1022, -1022,   892, 10610,  9602,
   -1022,   822, 11980,  9602, 11240, 11114, 13469,  9476, 13559, 12502,
     919, 11240, 11240, -1022,   767,   902,   491, 11240, 11240, -1022,
   -1022,   767, -1022, -1022, -1022, 10736,   148, -1022,   889, -1022,
    1034, -1022, -1022, -1022, -1022, -1022, -1022,  1004,   967, -1022,
   10862,   967,    54,   146,   193,   102,   124,  7467,   227, 11366,
    6007,   724,   523, -1022,   193,   967,   113,   906,  8953,    66,
     494, -1022, -1022, -1022, -1022, 11114, 11114,   644, 11114, 11114,
     910,   113, -1022, -1022,   323, -1022, -1022, -1022, -1022, -1022,
   -1022, -1022, -1022, -1022, -1022, -1022, -1022,   936, -1022,   936,
   11114,   913, -1022,   822, -1022,  4070,  5415,  5709,   193,   667,
     669, -1022, -1022,  3051,  3051,   311, 12502,  5853,   342, -1022,
    1016,   980, -1022,   946, -1022, -1022,   886, -1022, -1022,    14,
   -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, 11114,
   -1022, -1022, -1022, -1022, -1022, -1022, 11240, -1022, -1022, -1022,
   -1022, -1022,   851, -1022,   981, -1022, -1022, -1022,  7467, -1022,
   -1022, -1022, -1022,  7467, 11366,   967, -1022, -1022,   967, -1022,
   -1022,   967, -1022, 11114, -1022,    57, -1022,   130,   967,  6007,
     227,   967, -1022, -1022, -1022,  2080,  6007,  2093, -1022, -1022,
   -1022, 11114, 10106, -1022,  1466, -1022,  1818,  7316, -1022, -1022,
    6007,   937,   716, -1022, -1022, -1022, -1022,   212,    83,    44,
     193, 12383, -1022,   939, -1022, 12502, -1022, -1022, -1022, -1022,
     945,   944, -1022, -1022, -1022,   114, -1022, -1022,  1043, -1022,
   12502,  3051,  3051,   311,  3642,  3642,  4070, -1022, -1022, 12102,
      85, -1022, -1022,  6737, -1022,    85, -1022, -1022, 12297, -1022,
   -1022, 10988,  6309, -1022,   967, -1022, -1022, -1022, -1022, -1022,
   -1022, -1022, -1022, -1022,   977, -1022, -1022, -1022, -1022, -1022,
     193,   193, -1022, -1022,   983, -1022,   961, 11114, -1022,   965,
     445,   968,   968, -1022,   969,  1064,   972,  1067, -1022,   967,
     227,   906,  2093, -1022, -1022, -1022, -1022,   193,   992,   999,
     982, 12224, -1022,   988,   968,   968, -1022,   989,   995, -1022,
     976, -1022, -1022, -1022,   998, 12502, -1022,   251,   980,  1001,
   -1022,   980,   688, -1022,   502, -1022, -1022, -1022, -1022, -1022,
   -1022, -1022, -1022, -1022,   193,   193, -1022,   193,   193, -1022,
    1073, -1022,   803,   134,   173,   233,  6007,  1124,  6158,    85,
     925,   250, -1022, -1022, 11114, -1022,   703, -1022,   977,  1184,
   -1022,  1002,   193,  1006, -1022, -1022, -1022, 11114,  2093, -1022,
   -1022,   453, -1022, -1022, -1022, -1022,   158, -1022, -1022,  2093,
   -1022, -1022,  1477, -1022, -1022, -1022, -1022,  6007,   193,   275,
    7593,  1008, -1022, 12224,  2093, -1022,  1089,   849,   453, -1022,
   -1022, -1022,  2093, -1022,  1477, -1022,  1252, 12502,  1014, -1022,
    1020, 12502, -1022, 12502, -1022, -1022, -1022,   740, -1022, -1022,
   -1022, -1022,   312, 13649,  9476, 13739,   987, -1022,   889, -1022,
   11366, 11366, 12416, -1022, -1022, -1022, -1022,   193, -1022,   977,
   -1022,  1178, -1022, -1022, -1022,  1022,  1030, -1022,  1102,   968,
   -1022,  1032, -1022,  1039, -1022,  1032,   967,  1041,  6007,  7316,
   -1022,  1072, -1022,   849, -1022,  1048,  1051, -1022, 13829, -1022,
     968,  1052, -1022,  1055,  1052, -1022,   710, -1022, -1022,  1014,
   12502, 12502,  1014,   980,   188,   213,   193,   332,   364, -1022,
   -1022, -1022, -1022, -1022, -1022, -1022, -1022,  1056,  1057,  2093,
   -1022,  1477, -1022, -1022,  1477, -1022,  1477, -1022, -1022, -1022,
   -1022,   967,  1062, -1022,  2093, -1022,  1477, -1022,  1061,  1063,
   -1022,  1477, -1022,  1477, -1022, -1022,  1252, -1022, -1022,  1014,
     372,  6460,  1178,  1178,  1032,  1068,  1032,  1032, -1022, -1022,
    1052,  1069,  1052,  1052, -1022,   609,  1057, -1022,  1477, -1022,
   -1022, -1022, -1022,  1477, -1022, -1022, -1022, -1022, -1022, -1022,
    1032,  1052, -1022, -1022
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1022, -1022, -1022,   975, -1022,    28,   749,  -547, -1022,   -32,
   -1022,   755, -1022,    74, -1022,  -126,  -262,   -56, -1022, -1022,
   -1022,   -90,   -80, -1022, -1022,    90, -1022,   149,   760,    12,
    1126,  -135,    -1,   -67, -1022,  -417,   -15,  2123,  -353,  1128,
     -52,   -19, -1022, -1022,     9, -1022,  2975, -1022,  1140, -1022,
    1372, -1022,   568,    58,   617,  -352,    89,   -14, -1022,  -400,
    -214,     2, -1022,  -300,   -12, -1022, -1022, -1022, -1022, -1022,
   -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022,    42,
   -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022,
   -1022, -1022, -1022, -1022, -1022,   525, -1022,   -44,  1096,  -358,
   -1022,   131,  -706, -1022,  -728, -1010,   214,   136,   380,    64,
   -1022,   478, -1022,  -841, -1022,    53,   354, -1022, -1022, -1022,
   -1022, -1022, -1022, -1022,   511, -1022, -1022,   -99,   744, -1022,
   -1022, -1022,   930, -1022, -1022, -1022, -1022,  -697, -1022,    47,
   -1022, -1022, -1022, -1022, -1022, -1022, -1022,  -191, -1022, -1022,
     357,  -838, -1022,   343,  -670,  -840,    52, -1022,   269,   270,
     273, -1022,  -424, -1022,   370, -1022, -1022,   174, -1022, -1022,
     252,   135,   469, -1022,  1167,   515,   933,  1617, -1022,   782,
    1659, -1022,  1979,  2148, -1022, -1022,   -59, -1022, -1022,  -166,
   -1022, -1022, -1022, -1022, -1022, -1022, -1022,    41, -1022, -1022,
   -1022, -1022,    -6,  1998,  1381,  1182,  2425,  1658, -1022, -1022,
     322, -1022,  -433,   265,  -774,   429, -1021,  -859,   329,  -976,
     465,    87,   247,   219, -1022, -1022,  -386,  -685,   -83,  -962,
    -968,   225,   254, -1022,  -759, -1022,  -136,  -858, -1022, -1022,
   -1022,    65,  -373, -1022,  -339, -1022, -1022,   -79, -1022,   -55,
      21,   216,  -611,  -248,   -65,   -33,    -2
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -751
static const yytype_int16 yytable[] =
{
     124,   294,   369,   412,   838,   373,   308,   291,   235,   240,
     365,   583,   571,   434,   372,   747,   330,   203,   221,   221,
     841,   260,   410,   474,   569,   622,   577,   476,   215,   215,
     308,   536,   125,   622,   597,   367,   367,   203,   309,   367,
     374,   989,   281,   754,    89,   282,    89,   405,   238,   205,
     241,   317,   265,   272,   276,  1148,   735,   270,   222,   222,
     629,   301,  1114,  -106,   320,   651,  1004,  1007,   203,   205,
     580,   282,   611,   712,  -112,  1034,    73,   626,    73,  -116,
     234,   227,   227,   960,   282,   282,   282,  1122,  1114,   569,
     964,   577,   317,  1047,  1048,    89,    89,  -113,   580,   283,
     629,  1168,   221,  -120,  1142,   219,   229,   978,   203,   681,
     222,   903,   215,   847,   595,  1069,  1070,  1071,   596,   643,
     271,   275,  -119,   852,   462,   283,  1061,  -115,   267,   495,
     497,  -628,   654,   222,   222,   984,   319,   222,   379,   390,
     390,   663,   222,   430,   898,  1079,   643,  -112,   995,  -117,
     315,   316,   612,   615,   422,  -114,  -627,   826,   302,   904,
    -628,   667,   905,   827,  -106,   227,   996,   872,   318,  1034,
    1108,  -118,   458,   233,   236,  1148,   884,   260,     3,   237,
     446,   974,   448,   851,  -106,  -627,  -113,  -106,  1058,   408,
    -516,  -106,  1216,   525,   664,  -103,   308,   305,  1114,   306,
    -107,  -116,  -724,   921,   485,   529,   464,  1122,   305,   318,
     306,   242,   456,   480,   668,  1114,  1142,  1127,  -104,   427,
     505,   506,   507,   508,  -111,   427,  -118,   260,   465,   985,
     434,   445,   221,   622,   221,   622,   305,  1079,   306,   724,
     124,  1079,   215,  -110,   215,   215,  -120,   733,  -106,   734,
    1034,    89,  1034,   643,   367,   367,   367,   367,   265,   510,
     511,  1173,   629,   643,  1164,   773,   237,   936,   282,   986,
    -108,  -108,   222,   479,   222,   222,  -105,   256,   222,  1116,
     222,   585,  1190,   244,    89,  -112,    89,  -112,   529,   529,
    1123,   937,  -109,  1006,  -725,   227,   260,   227,   477,    89,
     592,    89,   924,  1080,  1128,  1136,   234,   319,   308,   959,
    1198,  1079,   898,  1143,   527,   367,    73,   282,   587,   435,
    1104,   438,   283,   982,  -113,  -119,  -113,   265,   522,  1105,
     594,   460,   662,   522,   662,   778,  -724,   504,   584,  -116,
     586,  -116,  -636,  1034,  1034,  -115,   237,   569,  -105,   577,
     898,    89,   222,   222,   222,   222,    89,   222,   222,   873,
     874,  -725,   445,   595,  -118,   237,  -118,   875,   222,  -112,
      89,   283,  -108,   537,   575,   361,   215,  -117,   305,   974,
     306,  1166,   488,    73,  -120,  -114,  -120,   974,   509,   974,
     488,  -637,  -108,  1088,  1089,  -108,  1102,  1081,  1129,  -108,
     885,   752,   895,   362,   409,   823,   222,  1149,    89,   744,
    1205,  1152,    89,   222,    89,   480,   520,  -636,  -113,   886,
     575,   531,   939,   576,   939,  1211,  -637,   445,   222,   810,
     812,   939,   876,   637,   297,   817,   819,   490,   491,   575,
     427,   215,   427,   493,  -112,   490,   491,   488,   618,  -105,
     887,   298,   447,  -113,   888,   299,   537,   537,   688,   480,
     300,   203,   622,  -119,  -103,  -119,   326,   575,   762,  -105,
     282,   222,  -105,  -104,   676,  1166,  -105,  1000,  1001,  1044,
     466,  1199,   445,  -115,   468,  -115,   889,   922,   576,   629,
     623,   488,  -629,   205,   575,   763,   215,  1045,   791,   974,
     763,   974,   490,   491,   531,   531,   974,    89,   974,  1227,
    1126,   932,   415,   727,   282,  -117,   576,  -117,   895,   895,
     714,  -629,   323,  -114,   283,  -114,   222,  -630,   327,   939,
     886,   331,   895,   765,   703,   649,   744,   459,   974,  -120,
     711,  -353,   715,   576,   489,  1200,   490,   491,   736,   708,
    1002,   710,  1016,   697,   907,   694,  -630,  1018,   529,  -111,
     885,   887,   936,   701,  -119,   529,   529,    60,   283,  -353,
    -353,   529,   529,   414,   690,   702,   361,   707,  -632,   886,
    -115,  1181,   751,   753,  -110,   698,   937,  -631,  -107,   445,
     816,  -310,   695,   488,   496,   877,   879,   740,   741,   445,
    -106,   575,   361,   215,   362,   363,   333,  -632,   895,   702,
     887,   575,  -117,   215,   888,   480,  -631,  -114,  -353,  -310,
    -310,   427,   -84,    89,   827,    89,   203,   693,  -633,   470,
     362,   428,  -108,   222,   716,   699,   471,  -105,   282,   850,
     859,   702,   -98,   222,   416,    89,   222,   695,   490,   491,
     576,   630,   236,   364,   418,  1118,   632,  -633,   205,   634,
     576,  1099,   636,   849,  -622,   356,   357,   358,  -310,   699,
     282,  -725,   423,   367,   842,   695,  -625,   846,   646,   429,
     222,  -721,  1118,   648,   424,   445,   858,   425,   606,  -107,
     529,   853,   283,  -622,   991,   848,   431,   575,   750,   215,
     693,   699,   433,   825,   831,  -625,   837,   522,   837,  -107,
     432,  -724,  -107,   879,   879,   453,  -107,   607,   827,  -722,
     719,    89,   459,  -622,   283,    89,   537,  1021,   473,   222,
     979,   415,   748,   537,   537,   471,   749,  -120,   230,   537,
     537,   680,  1156,   861,   915,   695,   576,   203,   427,  -119,
    -728,  -622,  -622,   772,   488,   695,   643,   774,  -120,  -115,
     233,  -625,    78,  -117,    78,   869,   697,   869,   698,    89,
    -114,   222,    89,   333,   531,   463,    78,    78,   367,   338,
     339,   531,   531,   975,   -83,   925,   469,   531,   531,  -625,
    -625,   916,  -728,  -115,   917,  -117,   912,   919,  -721,   695,
    -622,   914,   361,  -721,   923,   361,   488,   926,   695,   490,
     491,  -634,  1083,    78,    78,   816,  -635,   315,   316,  -301,
    -728,  -728,   911,   475,   800,   361,   349,   350,    78,   992,
     362,   457,   478,   362,   483,   981,  -722,   361,  -625,  -634,
    -634,  -722,  -114,   814,  -635,  -635,   482,  -301,  -301,  -311,
     821,    78,    78,   362,   590,    78,  1196,   361,   537,   493,
      78,   490,   491,   237,  1083,   362,   600,  -728,   502,  -728,
      89,   361,  -724,   514,   488,    89,   222,  -311,  -311,   429,
    1027,  1017,   484,   503,   488,   362,   686,   980,  -634,   589,
    1026,    89,  1153,  -635,   593,  1056,  -301,   282,    89,   362,
    1093,   695,   591,   832,   827,  1120,   531,   488,   528,    89,
    1120,   879,    89,   598,   601,  1055,   633,   361,   800,   800,
     631,   800,   800,   488,   635,   695,  -311,   493,   979,   490,
     491,   449,  1120,  1095,   687,   679,   979,   494,   979,   490,
     491,   450,   451,   640,  1087,   362,  1138,  1043,  1094,  1043,
    1043,  1012,   854,   971,   641,    89,  1005,  1008,  1119,   282,
     660,   -98,   490,   491,    89,  1100,  1101,   863,   650,    78,
    1023,  1043,  1043,  1043,   901,   902,   665,   673,   490,   491,
     670,   975,   614,   616,  1096,  1140,  1098,   683,   980,   975,
      78,   975,    78,    78,   601,   704,    78,  -283,    78,   614,
     616,   678,    78,   709,    78,   333,    41,    42,    43,    44,
    1162,  1163,   682,  1067,   684,   831,   800,    78,   716,    78,
     800,   719,   346,   347,   837,   695,   695,   644,  1131,   927,
     764,   928,   929,   930,   931,   800,   800,   800,  -284,   800,
     800,  1073,  1075,   768,   367,   367,   766,   809,   979,   827,
     979,   282,   815,   800,   855,   979,   862,   979,    89,  -285,
      89,   353,   354,   355,   356,   357,   358,   866,   897,    78,
      78,    78,    78,    78,    78,    78,    78,   900,  1028,   980,
     898,   909,  1179,  -286,  1029,   990,    78,   979,    78,   993,
     994,    78,   445,   983,   707,   781,   837,  1182,   100,    89,
     100,   975,    89,   975,   575,  1133,   215,  1038,   975,  1037,
     975,  1041,   100,   100,  1046,  1049,  1051,  1043,  1052,  1054,
     800,  1009,   333,  1062,    78,  1063,    78,  1076,  1064,  1092,
      78,    78,    78,   826,  1068,  1072,   222,  1208,  1043,  1132,
     975,  1074,   222,   222,  1077,  1137,    78,  1082,  1109,   100,
     100,   971,  1111,   576,  1045,   971,  1035,  1036,   801,   971,
    1150,   971,   757,   758,   100,   759,  1151,  1197,  1169,  1215,
      89,    89,    46,    47,    78,    78,  1171,   695,  1174,   354,
     355,   356,   357,   358,   944,  1176,   944,   100,   100,    78,
    1180,   100,  1183,   944,  1184,   969,   100,  1186,  1191,  1185,
    1187,  1193,  1202,  1203,   802,  1192,  1209,  1194,  1195,  -724,
     645,  -725,   800,   837,  1218,  1223,   800,   455,   800,  1050,
     647,  1053,   377,  1090,  1091,    78,   394,   360,   739,  1160,
     927,   829,   928,   929,   930,   931,   927,   800,   928,   929,
     930,   931,  1107,    89,    78,  1167,   966,   870,  1110,  1214,
     997,   860,   801,   801,   518,   801,   801,   999,   672,   811,
     813,  1022,  1228,  1084,  1085,   818,   820,  1086,   998,  1097,
    1159,   971,   413,   971,  1222,  1224,  1225,  1226,   971,  1028,
     971,   406,   666,  1057,   941,   800,   800,  1139,  1117,  1135,
       0,   944,  1115,     0,     0,  1233,     0,     0,   802,   802,
       0,   802,   802,     0,  1145,   100,   928,   929,   930,   931,
     971,     0,     0,   811,   813,     0,   818,   820,   310,   311,
     312,   313,   314,  1165,     0,     0,   100,     0,   100,   100,
       0,   970,   100,     0,   100,     0,     0,     0,   100,     0,
     100,    78,     0,    78,     0,     0,     0,     0,     0,     0,
     801,    78,     0,   100,   801,   100,     0,     0,     0,     0,
       0,    78,     0,    78,    78,     0,     0,   944,     0,   801,
     801,   801,     0,   801,   801,     0,     0,     0,   944,     0,
    1170,  1172,     0,   119,   908,   119,  1175,   801,  1177,     0,
    1178,     0,     0,   969,     0,     0,   802,     0,    78,     0,
     802,   969,     0,     0,     0,   100,   100,   100,   100,   100,
     100,   100,   100,     0,     0,   802,   802,   802,     0,   802,
     802,     0,   100,     0,   100,     0,     0,   100,   273,   908,
       0,     0,     0,   802,   119,   119,     0,     0,   285,    78,
       0,     0,     0,    78,    78,     0,     0,    78,     0,     0,
       0,    78,    78,     0,   801,     0,     0,    78,    78,     0,
     100,     0,   100,     0,   285,     0,   100,   100,   100,  1217,
    1219,  1220,  1221,     0,     0,     0,     0,   382,   392,   392,
     392,     0,   100,     0,     0,     0,     0,    78,     0,    78,
      78,     0,     0,     0,     0,  1232,     0,     0,   944,     0,
     802,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,   100,     0,   969,  1121,     0,     0,  1125,   927,     0,
     928,   929,   930,   931,   932,   100,     0,     0,     0,   927,
       0,   928,   929,   930,   931,   932,     0,  1141,     0,  1144,
       0,     0,     0,   886,     0,     0,   801,   333,     0,     0,
     801,     0,   801,     0,   886,     0,     0,     0,     0,     0,
       0,   100,     0,     0,   346,   347,     0,   934,     0,     0,
       0,   801,     0,   935,   887,   936,    78,     0,   934,   417,
     100,     0,   419,   420,   421,   887,   936,     0,    78,     0,
     119,     0,   802,    78,    78,     0,   802,     0,   802,   937,
       0,     0,   938,     0,   354,   355,   356,   357,   358,    78,
     937,     0,     0,     0,   962,     0,    78,   802,     0,   801,
     801,     0,   803,   119,     0,   119,     0,    78,     0,     0,
      78,     0,     0,     0,  1204,     0,  1206,     0,   119,     0,
     119,  1207,     0,     0,     0,     0,     0,     0,     0,  1210,
       0,  1212,     0,     0,     0,     0,     0,     0,  1213,     0,
     122,   285,   122,     0,     0,   802,   802,   333,     0,     0,
       0,     0,     0,    78,     0,     0,     0,   100,     0,   100,
       0,     0,    78,  1230,   346,   347,     0,   100,  1231,     0,
     119,     0,     0,     0,     0,   119,     0,   100,   521,   100,
     100,     0,     0,   534,     0,     0,     0,     0,     0,   119,
     285,   122,   122,     0,     0,   286,   803,   803,     0,   803,
     803,   351,   352,   353,   354,   355,   356,   357,   358,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,   286,     0,     0,     0,     0,     0,   119,     0,     0,
       0,   119,     0,   119,   383,   393,   393,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,    78,     0,    78,   100,
     100,     0,     0,   100,     0,     0,     0,   100,   100,     0,
       0,     0,     0,   100,   100,     0,   619,   621,     0,     0,
       0,     0,     0,     0,     0,   273,     0,     0,     0,     0,
       0,     0,     0,     0,   803,     0,     0,    78,   803,     0,
      78,     0,     0,   100,     0,   100,   100,     0,     0,     0,
       0,     0,     0,   803,   803,   803,     0,   803,   803,     0,
       0,     0,   621,     0,     0,   273,   119,     0,     0,     0,
       0,   803,     0,     0,    78,     0,     0,     0,     0,     0,
      78,    78,     0,   285,     0,     0,     0,   122,     0,     0,
     927,     0,   928,   929,   930,   931,   932,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    78,
       0,   677,     0,     0,     0,   886,     0,     0,     0,     0,
     122,     0,   122,     0,     0,     0,     0,   285,     0,     0,
       0,     0,   100,     0,     0,   122,     0,   122,   803,   934,
       0,     0,     0,     0,   100,   935,   887,   936,     0,   100,
     100,     0,     0,     0,     0,     0,     0,     0,   286,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,   937,   100,     0,   938,     0,     0,     0,     0,     0,
       0,    78,   119,   100,   119,     0,   100,   122,     0,     0,
       0,   237,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,     0,   122,   286,     0,   538,
     742,     0,   743,     0,     0,     0,     0,     0,     0,     0,
     118,     0,   118,     0,     0,   621,     0,   273,     0,   100,
     803,     0,     0,     0,   803,     0,   803,     0,   100,     0,
       0,     0,     0,     0,   122,     0,     0,     0,   122,     0,
     122,   285,     0,     0,     0,   803,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     771,   118,   118,     0,     0,   284,     0,     0,     0,     0,
     119,     0,     0,   285,   119,     0,     0,     0,     0,     0,
     808,     0,   538,   538,     0,     0,     0,   822,     0,     0,
       0,   284,     0,   803,   803,     0,     0,     0,     0,     0,
       0,     0,   844,     0,   381,   391,   391,   391,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,     0,
       0,   119,   100,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   122,     0,    85,     0,    85,     0,     0,
       0,     0,   927,     0,   928,   929,   930,   931,   932,     0,
     286,     0,   871,     0,     0,   927,     0,   928,   929,   930,
     931,   932,     0,   100,     0,     0,   100,   886,     0,     0,
       0,     0,     0,     0,   808,   808,     0,   808,   808,     0,
     886,   933,     0,     0,     0,     0,    85,    85,     0,     0,
       0,   934,     0,     0,   286,     0,     0,   935,   887,   936,
     100,     0,     0,     0,   934,     0,   100,   100,     0,     0,
     935,   887,   936,     0,     0,     0,     0,   118,     0,   119,
       0,     0,     0,   937,   119,   920,   938,     0,     0,   378,
       0,     0,     0,     0,   100,   100,   937,     0,     0,   938,
     119,     0,     0,     0,   273,     0,     0,   119,     0,   122,
     118,   122,   118,     0,     0,     0,     0,     0,   119,     0,
       0,   119,     0,     0,     0,   118,     0,   118,     0,     0,
       0,   122,   808,     0,     0,     0,   808,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   284,     0,
       0,   808,   808,   808,     0,   808,   808,     0,     0,     0,
    1014,     0,     0,  1025,   119,     0,     0,   100,     0,   808,
       0,     0,     0,   119,     0,     0,   804,   118,   286,     0,
       0,     0,   118,     0,     0,     0,     0,   761,     0,  1040,
       0,     0,     0,     0,     0,     0,   118,   284,     0,     0,
       0,     0,    85,     0,     0,     0,     0,   122,     0,     0,
     286,   122,   538,     0,     0,     0,     0,     0,   805,   538,
     538,     0,   392,     0,     0,   538,   538,     0,     0,     0,
       0,     0,     0,     0,   118,    85,   808,    85,   118,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,    85,     0,     0,   122,     0,     0,   122,     0,
       0,     0,     0,     0,     0,     0,  1103,   119,     0,   119,
     804,   804,     0,   804,   804,     0,     0,     0,     0,  1112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,     0,   121,
       0,     0,    85,     0,     0,     0,     0,    85,   119,     0,
       0,   119,   805,   805,   392,   805,   805,     0,     0,     0,
       0,    85,     0,     0,   532,     0,     0,     0,   808,     0,
       0,     0,   808,   118,   808,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   538,     0,     0,     0,   121,   121,
     284,     0,     0,   808,     0,     0,   122,     0,     0,    85,
       0,   122,     0,    85,     0,    85,     0,     0,   804,     0,
       0,     0,   804,     0,     0,     0,     0,   122,     0,   119,
     119,     0,     0,     0,   122,     0,     0,   804,   804,   804,
       0,   804,   804,     0,   284,   122,     0,     0,   122,     0,
       0,   808,   808,     0,     0,   804,     0,   532,   532,     0,
     805,     0,     0,     0,   805,     0,     0,     0,     0,     0,
       0,   332,     0,     0,     0,     0,     0,     0,     0,   805,
     805,   805,     0,   805,   805,     0,     0,  1015,     0,     0,
       0,   122,     0,     0,     0,     0,     0,   805,     0,   118,
     122,   118,   119,     0,     0,     0,     0,     0,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,   804,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,     0,     0,     0,     0,
     346,   347,     0,     0,     0,     0,     0,     0,     0,   393,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   805,     0,     0,     0,   284,     0,
       0,     0,     0,   348,     0,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,     0,     0,   121,   806,   121,
       0,     0,     0,     0,   122,     0,   122,   118,     0,     0,
     284,   118,   121,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   804,     0,     0,     0,   804,     0,
     804,     0,     0,     0,    85,     0,    85,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,   122,   804,
       0,   393,     0,     0,     0,   118,    85,     0,   118,     0,
       0,     0,     0,     0,   121,     0,   805,     0,     0,   121,
     805,     0,   805,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,     0,     0,   121,     0,     0,     0,
       0,   805,   806,   806,     0,   806,   806,   804,   804,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,   122,     0,     0,
       0,   121,     0,     0,     0,   121,     0,   121,     0,     0,
       0,     0,    85,     0,     0,     0,    85,   532,     0,   805,
     805,     0,     0,     0,   532,   532,     0,     0,     0,     0,
     532,   532,     0,     0,     0,     0,   118,     0,     0,     0,
       0,   118,     0,     0,     0,     0,     0,   807,     0,   121,
     121,     0,     0,     0,     0,     0,     0,   118,     0,     0,
      85,     0,     0,    85,   118,     0,     0,     0,     0,   122,
     806,     0,     0,     0,   806,   118,     0,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   806,
     806,   806,     0,   806,   806,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,   806,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1013,     0,     0,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   807,   807,     0,   807,   807,     0,     0,     0,   532,
       0,     0,     0,   333,   334,   335,   336,   337,   338,   339,
     340,    85,   342,   343,     0,     0,    85,     0,     0,     0,
     346,   347,     0,     0,   806,     0,     0,     0,     0,   391,
       0,     0,    85,     0,     0,     0,     0,     0,     0,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,   217,   217,    85,     0,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,     0,   121,     0,   121,     0,
       0,     0,     0,     0,   118,     0,   118,     0,     0,     0,
       0,     0,     0,   250,   253,   254,   255,     0,   121,   807,
     217,   217,  1011,   807,     0,     0,    85,     0,     0,     0,
       0,     0,     0,   303,   304,    85,     0,     0,   807,   807,
     807,     0,   807,   807,     0,   118,   806,     0,   118,     0,
     806,   391,   806,     0,     0,     0,   807,     0,     0,     0,
       0,     0,     0,     0,     0,   217,     0,     0,     0,     0,
       0,   806,     0,     0,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,     0,   121,     0,     0,     0,   121,   121,
      41,    42,    43,    44,    45,     0,   121,   121,     0,     0,
       0,     0,   121,   121,     0,     0,   118,   118,     0,   806,
     806,     0,     0,   807,     0,     0,     0,     0,     0,    85,
       0,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,   121,     0,     0,     0,     0,
       0,   789,    59,    60,    61,    62,    63,    64,    65,    66,
       0,     0,     0,     0,     0,     0,   685,     0,     0,     0,
      85,     0,   217,    85,     0,   217,   217,   217,     0,   303,
     279,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,   217,     0,   217,   217,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,     0,     0,     0,   807,   346,   347,     0,   807,
       0,   807,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
     807,    85,    85,   121,     0,     0,     0,     0,   121,   348,
       0,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,     0,     0,     0,   121,     0,     0,     0,  -257,     0,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,   121,     0,     0,   807,   807,
       0,   217,     0,     0,     0,     0,   533,     0,   540,   541,
     542,   543,   544,     0,     0,   545,   546,   547,   548,   549,
     550,   551,   552,   553,    85,     0,   554,   555,   556,   557,
     558,   559,   560,   561,   562,   563,     0,     0,   121,   217,
       0,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   685,     0,     0,     0,     0,     0,     0,   613,
     613,     0,     0,     0,     0,     0,     0,     0,   613,   217,
     217,     0,     0,     0,   217,     0,   613,   613,   217,     0,
       0,     0,     0,     0,   255,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,     0,   639,
       0,     0,   346,   347,   613,     0,     0,     0,     0,     0,
       0,   121,     0,   121,     0,   217,     0,     0,   217,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   217,
       0,     0,     0,     0,     0,   348,     0,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   669,     0,     0,
       0,     0,   121,     0,     0,   121,     0,     0,     0,     0,
       0,     0,     0,     0,   217,     0,     0,     0,     0,     0,
       0,     0,     0,  -728,     0,     0,     0,     0,     0,     0,
       0,  -728,  -728,  -728,     0,     0,     0,  -728,  -728,     0,
    -728,     0,     0,     0,     0,     0,     0,     0,  -728,  -728,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -728,  -728,     0,  -728,  -728,  -728,  -728,  -728,     0,     0,
       0,     0,     0,   121,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   217,     0,     0,     0,
       0,  -728,     0,     0,     0,     0,   217,     0,     0,     0,
    -728,  -728,  -728,  -728,  -728,  -728,  -728,  -728,  -728,  -728,
    -728,  -728,  -728,   217,     0,   217,     0,  -728,  -728,  -728,
    -728,     0,   691,     0,     0,     0,     0,     0,   217,     0,
     217,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -728,     0,     0,   121,     0,     0,  -116,
    -728,     0,  -728,  -728,  -728,  -728,  -728,  -728,  -728,  -728,
    -728,  -728,     0,     0,     0,     0,  -728,  -728,  -728,  -107,
       0,     0,  -728,   217,  -728,     0,  -728,     0,     0,   613,
     775,     0,   217,     0,     0,     0,   613,   613,     0,     0,
       0,     0,   613,   613,     0,    23,    24,    25,    26,     0,
     217,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,   781,   217,     0,     0,   782,     0,
     885,    41,    42,    43,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   886,
     613,   613,     0,   613,   613,     0,     0,     0,     0,     0,
       0,     0,   783,   784,     0,     0,     0,     0,     0,     0,
     785,     0,     0,   786,     0,   217,   787,   788,     0,   878,
     887,     0,   789,    59,  1003,    61,    62,    63,    64,    65,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   790,     0,     0,     0,     0,     0,
       0,   279,     0,     0,   906,     0,     0,     0,     0,     0,
       0,   613,     0,  -750,     4,   237,     5,     6,     7,     8,
       9,     0,     0,     0,    10,    11,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,   217,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,    27,     0,     0,     0,   613,   217,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,    43,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    51,     0,     0,     0,     0,     0,
       0,    52,     0,     0,    53,    54,   217,    55,    56,     0,
      57,     0,     0,    58,    59,    60,    61,    62,    63,    64,
      65,    66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    67,    68,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -750,  -728,  -750,     0,     0,     0,
       0,     0,     0,  -728,  -728,  -728,     0,     0,  -728,  -728,
    -728,     0,  -728,     0,     0,     0,     0,     0,     0,     0,
    -728,  -728,  -728,  -728,  -728,     0,     0,     0,     0,     0,
       0,     0,  -728,  -728,     0,  -728,  -728,  -728,  -728,  -728,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   217,
     333,  -751,  -751,  -751,  -751,   338,   339,     0,     0,  -751,
    -751,     0,   217,  -728,     0,     0,     0,   346,   347,     0,
       0,     0,  -728,  -728,  -728,  -728,  -728,  -728,  -728,  -728,
    -728,  -728,  -728,  -728,  -728,     0,     0,     0,     0,  -728,
    -728,  -728,  -728,     0,   745,  -728,     0,     0,     0,     0,
       0,  -728,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,     0,     0,     0,  -728,     0,     0,  -728,   217,
       0,  -116,  -728,  -728,  -728,  -728,  -728,  -728,  -728,  -728,
    -728,  -728,  -728,  -728,     0,     0,     0,     0,  -728,  -728,
    -728,  -728,  -622,     0,  -728,  -728,  -728,     0,  -728,     0,
    -622,  -622,  -622,     0,     0,  -622,  -622,  -622,     0,  -622,
       0,     0,     0,     0,     0,     0,     0,  -622,     0,  -622,
    -622,  -622,     0,     0,     0,     0,     0,     0,     0,  -622,
    -622,     0,  -622,  -622,  -622,  -622,  -622,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
    -622,     0,     0,     0,   346,   347,     0,     0,     0,  -622,
    -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,
    -622,  -622,     0,     0,     0,     0,  -622,  -622,  -622,  -622,
       0,  -622,  -622,     0,     0,     0,     0,   348,  -622,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,     0,
       0,     0,  -622,     0,     0,  -622,     0,     0,  -622,  -622,
    -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,
    -622,     0,     0,     0,     0,     0,  -622,  -622,  -622,  -625,
       0,  -622,  -622,  -622,     0,  -622,     0,  -625,  -625,  -625,
       0,     0,  -625,  -625,  -625,     0,  -625,     0,     0,     0,
       0,     0,     0,     0,  -625,     0,  -625,  -625,  -625,     0,
       0,     0,     0,     0,     0,     0,  -625,  -625,     0,  -625,
    -625,  -625,  -625,  -625,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,  -751,  -751,  -625,     0,     0,
       0,   346,   347,     0,     0,     0,  -625,  -625,  -625,  -625,
    -625,  -625,  -625,  -625,  -625,  -625,  -625,  -625,  -625,     0,
       0,     0,     0,  -625,  -625,  -625,  -625,     0,  -625,  -625,
       0,     0,     0,     0,     0,  -625,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,     0,     0,     0,  -625,
       0,     0,  -625,     0,     0,  -625,  -625,  -625,  -625,  -625,
    -625,  -625,  -625,  -625,  -625,  -625,  -625,  -625,     0,     0,
       0,     0,     0,  -625,  -625,  -625,  -729,     0,  -625,  -625,
    -625,     0,  -625,     0,  -729,  -729,  -729,     0,     0,  -729,
    -729,  -729,     0,  -729,     0,     0,     0,     0,     0,     0,
       0,  -729,  -729,  -729,  -729,  -729,     0,     0,     0,     0,
       0,     0,     0,  -729,  -729,     0,  -729,  -729,  -729,  -729,
    -729,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   333,   334,   335,   336,   337,   338,   339,     0,     0,
     342,   343,     0,     0,  -729,     0,     0,     0,   346,   347,
       0,     0,     0,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,     0,     0,     0,     0,
    -729,  -729,  -729,  -729,     0,     0,  -729,     0,     0,     0,
       0,     0,  -729,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,     0,     0,     0,  -729,     0,     0,  -729,
       0,     0,     0,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,     0,     0,     0,     0,  -729,
    -729,  -729,  -729,  -730,     0,  -729,  -729,  -729,     0,  -729,
       0,  -730,  -730,  -730,     0,     0,  -730,  -730,  -730,     0,
    -730,     0,     0,     0,     0,     0,     0,     0,  -730,  -730,
    -730,  -730,  -730,     0,     0,     0,     0,     0,     0,     0,
    -730,  -730,     0,  -730,  -730,  -730,  -730,  -730,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -730,     0,     0,     0,     0,     0,     0,     0,     0,
    -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,
    -730,  -730,  -730,     0,     0,     0,     0,  -730,  -730,  -730,
    -730,     0,     0,  -730,     0,     0,     0,     0,     0,  -730,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -730,     0,     0,  -730,     0,     0,     0,
    -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,
    -730,  -730,     0,     0,     0,     0,  -730,  -730,  -730,  -730,
    -310,     0,  -730,  -730,  -730,     0,  -730,     0,  -310,  -310,
    -310,     0,     0,  -310,  -310,  -310,     0,  -310,     0,     0,
       0,     0,     0,     0,     0,  -310,     0,  -310,  -310,  -310,
       0,     0,     0,     0,     0,     0,     0,  -310,  -310,     0,
    -310,  -310,  -310,  -310,  -310,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -310,     0,
       0,     0,     0,     0,     0,     0,     0,  -310,  -310,  -310,
    -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,
       0,     0,     0,     0,  -310,  -310,  -310,  -310,     0,   746,
    -310,     0,     0,     0,     0,     0,  -310,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -310,     0,     0,  -310,     0,     0,  -118,  -310,  -310,  -310,
    -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,     0,
       0,     0,     0,     0,  -310,  -310,  -310,  -449,     0,  -310,
    -310,  -310,     0,  -310,     0,  -449,  -449,  -449,     0,     0,
    -449,  -449,  -449,     0,  -449,     0,     0,     0,     0,     0,
       0,     0,  -449,  -449,  -449,  -449,     0,     0,     0,     0,
       0,     0,     0,     0,  -449,  -449,     0,  -449,  -449,  -449,
    -449,  -449,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -449,     0,     0,     0,     0,
       0,     0,     0,     0,  -449,  -449,  -449,  -449,  -449,  -449,
    -449,  -449,  -449,  -449,  -449,  -449,  -449,     0,     0,     0,
       0,  -449,  -449,  -449,  -449,     0,     0,  -449,     0,     0,
       0,     0,     0,  -449,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -449,     0,     0,
       0,     0,     0,     0,  -449,     0,  -449,  -449,  -449,  -449,
    -449,  -449,  -449,  -449,  -449,  -449,     0,     0,     0,     0,
    -449,  -449,  -449,  -449,  -302,   233,  -449,  -449,  -449,     0,
    -449,     0,  -302,  -302,  -302,     0,     0,  -302,  -302,  -302,
       0,  -302,     0,     0,     0,     0,     0,     0,     0,  -302,
       0,  -302,  -302,  -302,     0,     0,     0,     0,     0,     0,
       0,  -302,  -302,     0,  -302,  -302,  -302,  -302,  -302,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -302,     0,     0,     0,     0,     0,     0,     0,
       0,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,     0,     0,     0,     0,  -302,  -302,
    -302,  -302,     0,     0,  -302,     0,     0,     0,     0,     0,
    -302,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -302,     0,     0,  -302,     0,     0,
       0,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,     0,     0,     0,     0,     0,  -302,  -302,
    -302,  -750,     0,  -302,  -302,  -302,     0,  -302,     0,  -750,
    -750,  -750,     0,     0,  -750,  -750,  -750,     0,  -750,     0,
       0,     0,     0,     0,     0,     0,  -750,  -750,  -750,  -750,
       0,     0,     0,     0,     0,     0,     0,     0,  -750,  -750,
       0,  -750,  -750,  -750,  -750,  -750,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -750,
       0,     0,     0,     0,     0,     0,     0,     0,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,     0,     0,     0,     0,  -750,  -750,  -750,  -750,     0,
       0,  -750,     0,     0,     0,     0,     0,  -750,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -750,     0,     0,     0,     0,     0,     0,  -750,     0,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
       0,     0,     0,     0,  -750,  -750,  -750,  -750,  -317,   233,
    -750,  -750,  -750,     0,  -750,     0,  -317,  -317,  -317,     0,
       0,  -317,  -317,  -317,     0,  -317,     0,     0,     0,     0,
       0,     0,     0,  -317,     0,  -317,  -317,     0,     0,     0,
       0,     0,     0,     0,     0,  -317,  -317,     0,  -317,  -317,
    -317,  -317,  -317,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -317,     0,     0,     0,
       0,     0,     0,     0,     0,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,     0,     0,
       0,     0,  -317,  -317,  -317,  -317,     0,     0,  -317,     0,
       0,     0,     0,     0,  -317,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -317,     0,
       0,     0,     0,     0,     0,  -317,     0,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,     0,     0,     0,
       0,     0,  -317,  -317,  -317,  -728,   230,  -317,  -317,  -317,
       0,  -317,     0,  -728,  -728,  -728,     0,     0,     0,  -728,
    -728,     0,  -728,     0,     0,     0,     0,     0,     0,     0,
    -728,  -728,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -728,  -728,     0,  -728,  -728,  -728,  -728,  -728,
       0,     0,     0,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,     0,     0,     0,     0,
     346,   347,     0,  -728,     0,     0,     0,     0,     0,     0,
       0,     0,  -728,  -728,  -728,  -728,  -728,  -728,  -728,  -728,
    -728,  -728,  -728,  -728,  -728,     0,     0,     0,     0,  -728,
    -728,  -728,  -728,   348,   691,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -728,     0,     0,     0,   237,
       0,  -116,  -728,     0,  -728,  -728,  -728,  -728,  -728,  -728,
    -728,  -728,  -728,  -728,     0,     0,     0,     0,  -728,  -728,
    -728,  -728,  -310,     0,  -728,     0,  -728,     0,  -728,     0,
    -310,  -310,  -310,     0,     0,     0,  -310,  -310,     0,  -310,
       0,     0,     0,     0,     0,     0,     0,  -310,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -310,
    -310,     0,  -310,  -310,  -310,  -310,  -310,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -310,     0,     0,     0,     0,     0,     0,     0,     0,  -310,
    -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,
    -310,  -310,     0,     0,     0,     0,  -310,  -310,  -310,  -310,
       0,   692,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -310,     0,     0,     0,     0,     0,  -118,  -310,
       0,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,
    -310,     0,     0,     0,     0,     0,  -310,  -310,  -109,  -310,
       0,  -310,     0,  -310,     0,  -310,     0,  -310,  -310,  -310,
       0,     0,     0,  -310,  -310,     0,  -310,     0,     0,     0,
       0,     0,     0,     0,  -310,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -310,  -310,     0,  -310,
    -310,  -310,  -310,  -310,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -310,     0,     0,
       0,     0,     0,     0,     0,     0,  -310,  -310,  -310,  -310,
    -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,     0,
       0,     0,     0,  -310,  -310,  -310,  -310,     0,   692,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -310,
       0,     0,     0,     0,     0,  -118,  -310,     0,  -310,  -310,
    -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,     0,     0,
       0,     0,     0,  -310,  -310,  -310,  -750,     0,  -310,     0,
    -310,     0,  -310,     0,  -750,  -750,  -750,     0,     0,  -750,
    -750,  -750,     0,  -750,     0,     0,     0,     0,     0,     0,
       0,  -750,  -750,  -750,     0,     0,    23,    24,    25,    26,
       0,     0,     0,  -750,  -750,     0,  -750,  -750,  -750,  -750,
    -750,     0,    32,    33,    34,   781,     0,     0,     0,   782,
       0,     0,    41,    42,    43,    44,    45,     0,     0,     0,
       0,     0,     0,     0,  -750,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   783,   784,     0,     0,     0,     0,     0,
       0,   785,  -750,  -750,   786,     0,     0,   787,   788,     0,
     878,     0,     0,   789,    59,    60,    61,    62,    63,    64,
      65,    66,     0,     0,     0,     0,  -750,     0,     0,     0,
       0,     0,     0,     0,     0,   790,     0,     0,     0,     0,
       0,     0,   279,     0,     0,     0,     0,     0,     0,  -750,
    -750,     0,     0,     0,   233,  -750,   237,  -750,   257,  -750,
       5,     6,     7,     8,     9,  -750,  -750,  -750,    10,    11,
       0,     0,  -750,    12,     0,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,    29,   258,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,    43,    44,
      45,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    51,     0,
       0,     0,     0,     0,     0,    52,     0,     0,    53,    54,
       0,    55,    56,     0,    57,     0,     0,    58,    59,    60,
      61,    62,    63,    64,    65,    66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,    68,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -750,   257,
    -750,     5,     6,     7,     8,     9,     0,     0,  -750,    10,
      11,     0,  -750,  -750,    12,     0,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,     0,     0,    20,    21,
      22,    23,    24,    25,    26,     0,     0,    27,     0,     0,
       0,     0,     0,    28,    29,   258,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,    41,    42,    43,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,    51,
       0,     0,     0,     0,     0,     0,    52,     0,     0,    53,
      54,     0,    55,    56,     0,    57,     0,     0,    58,    59,
      60,    61,    62,    63,    64,    65,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,    68,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -750,
     257,  -750,     5,     6,     7,     8,     9,     0,     0,  -750,
      10,    11,     0,     0,  -750,    12,  -750,    13,    14,    15,
      16,    17,    18,    19,     0,     0,     0,     0,     0,    20,
      21,    22,    23,    24,    25,    26,     0,     0,    27,     0,
       0,     0,     0,     0,    28,    29,   258,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,    41,    42,
      43,    44,    45,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      51,     0,     0,     0,     0,     0,     0,    52,     0,     0,
      53,    54,     0,    55,    56,     0,    57,     0,     0,    58,
      59,    60,    61,    62,    63,    64,    65,    66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    67,    68,
      69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -750,   257,  -750,     5,     6,     7,     8,     9,     0,     0,
    -750,    10,    11,     0,     0,  -750,    12,     0,    13,    14,
      15,    16,    17,    18,    19,  -750,     0,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,     0,     0,    27,
       0,     0,     0,     0,     0,    28,    29,   258,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,    41,
      42,    43,    44,    45,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    51,     0,     0,     0,     0,     0,     0,    52,     0,
       0,    53,    54,     0,    55,    56,     0,    57,     0,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -750,   257,  -750,     5,     6,     7,     8,     9,     0,
       0,  -750,    10,    11,     0,     0,  -750,    12,     0,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
       0,    20,    21,    22,    23,    24,    25,    26,     0,     0,
      27,     0,     0,     0,     0,     0,    28,    29,   258,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      41,    42,    43,    44,    45,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    51,     0,     0,     0,     0,     0,     0,    52,
       0,     0,    53,    54,     0,    55,    56,     0,    57,     0,
       0,    58,    59,    60,    61,    62,    63,    64,    65,    66,
       0,     0,     0,     0,     0,     0,     0,     0,   257,     0,
       5,     6,     7,     8,     9,     0,  -750,  -750,    10,    11,
      67,    68,    69,    12,     0,    13,    14,    15,    16,    17,
      18,    19,  -750,     0,  -750,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,    29,   258,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,    43,    44,
      45,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    51,     0,
       0,     0,     0,     0,     0,    52,     0,     0,    53,    54,
       0,    55,    56,     0,    57,     0,     0,    58,    59,    60,
      61,    62,    63,    64,    65,    66,     0,     0,     0,     0,
       0,     0,     0,     0,   257,     0,     5,     6,     7,     8,
       9,     0,     0,     0,    10,    11,    67,    68,    69,    12,
       0,    13,    14,    15,    16,    17,    18,    19,  -750,     0,
    -750,     0,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,    28,    29,
     258,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,    43,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    51,     0,     0,     0,     0,     0,
       0,    52,     0,     0,   259,    54,     0,    55,    56,     0,
      57,     0,     0,    58,    59,    60,    61,    62,    63,    64,
      65,    66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    67,    68,    69,     0,     0,     0,     0,     0,
       0,     0,  -750,     0,  -750,   257,  -750,     5,     6,     7,
       8,     9,     0,     0,     0,    10,    11,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,     0,
       0,     0,     0,     0,    20,    21,    22,    23,    24,    25,
      26,     0,     0,    27,     0,     0,     0,     0,     0,    28,
      29,   258,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,    43,    44,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,     0,     0,     0,     0,
       0,     0,    52,     0,     0,    53,    54,     0,    55,    56,
       0,    57,     0,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,     0,     0,     0,     0,
       0,     0,     0,  -750,     0,  -750,     4,  -750,     5,     6,
       7,     8,     9,     0,     0,     0,    10,    11,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    27,     0,     0,     0,     0,     0,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,    43,    44,    45,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    51,     0,     0,     0,
       0,     0,     0,    52,     0,     0,    53,    54,     0,    55,
      56,     0,    57,     0,     0,    58,    59,    60,    61,    62,
      63,    64,    65,    66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    67,    68,    69,     0,     0,  -750,
       0,     0,     0,     0,     0,     0,  -750,   257,  -750,     5,
       6,     7,     8,     9,     0,     0,     0,    10,    11,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,     0,     0,     0,     0,     0,    20,    21,    22,    23,
      24,    25,    26,     0,     0,    27,     0,     0,     0,     0,
       0,    28,    29,   258,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,    41,    42,    43,    44,    45,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    51,     0,     0,
       0,     0,     0,     0,    52,     0,     0,    53,    54,     0,
      55,    56,     0,    57,     0,     0,    58,    59,    60,    61,
      62,    63,    64,    65,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    69,     0,     0,
    -750,     0,     0,     0,     0,     0,     0,  -750,   257,  -750,
       5,     6,     7,     8,     9,     0,     0,  -750,    10,    11,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,    29,   258,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,    43,    44,
      45,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    51,     0,
       0,     0,     0,     0,     0,    52,     0,     0,    53,    54,
       0,    55,    56,     0,    57,     0,     0,    58,    59,    60,
      61,    62,    63,    64,    65,    66,     0,     0,     0,     0,
       0,     0,     0,     0,   257,     0,     5,     6,     7,     8,
       9,     0,     0,     0,    10,    11,    67,    68,    69,    12,
       0,    13,    14,    15,    16,    17,    18,    19,  -750,     0,
    -750,     0,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,    28,    29,
     258,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,    43,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    51,     0,     0,     0,     0,     0,
       0,    52,     0,     0,    53,    54,     0,    55,    56,     0,
      57,     0,     0,    58,    59,    60,    61,    62,    63,    64,
      65,    66,     0,  -750,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,    67,    68,    69,    12,     0,    13,    14,    15,
      16,    17,    18,    19,  -750,     0,  -750,     0,     0,    20,
      21,    22,    23,    24,    25,    26,     0,     0,   206,     0,
       0,     0,     0,     0,     0,    29,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,   207,    41,    42,
      43,    44,    45,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      51,     0,     0,     0,     0,     0,     0,   208,     0,     0,
     209,    54,     0,    55,    56,     0,   210,   211,   212,    58,
      59,   213,    61,    62,    63,    64,    65,    66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    67,   214,
      69,    12,     0,    13,    14,    15,    16,    17,    18,    19,
       0,     0,   237,     0,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    27,     0,     0,     0,     0,     0,
       0,    29,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,    43,    44,    45,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    51,     0,     0,     0,
       0,     0,     0,   208,     0,     0,   209,    54,     0,    55,
      56,     0,     0,     0,     0,    58,    59,    60,    61,    62,
      63,    64,    65,    66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,    67,    68,    69,    12,     0,    13,
      14,    15,    16,    17,    18,    19,   305,     0,   306,     0,
       0,    20,    21,    22,    23,    24,    25,    26,     0,     0,
      27,     0,     0,     0,     0,     0,     0,    29,     0,     0,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      41,    42,    43,    44,    45,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    51,     0,     0,     0,     0,     0,     0,   208,
       0,     0,   209,    54,     0,    55,    56,     0,     0,     0,
       0,    58,    59,    60,    61,    62,    63,    64,    65,    66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,     0,     0,     0,    10,    11,
      67,    68,    69,    12,     0,    13,    14,    15,    16,    17,
      18,    19,     0,     0,   237,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,    43,    44,
      45,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    51,     0,
       0,     0,     0,     0,     0,    52,     0,     0,    53,    54,
       0,    55,    56,     0,    57,     0,     0,    58,    59,    60,
      61,    62,    63,    64,    65,    66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     8,
       9,     0,     0,     0,    10,    11,    67,    68,    69,    12,
       0,    13,    14,    15,    16,    17,    18,    19,   503,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,    28,    29,
     258,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,    43,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    51,     0,     0,     0,     0,     0,
       0,    52,     0,     0,    53,    54,     0,    55,    56,     0,
      57,     0,     0,    58,    59,    60,    61,    62,    63,    64,
      65,    66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    67,    68,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   503,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,     0,
       0,     0,   150,   151,   152,   395,   396,   397,   398,   157,
     158,   159,     0,     0,     0,     0,     0,   160,   161,   162,
     163,   399,   400,   401,   402,   168,    37,    38,   403,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   170,   171,   172,
     173,   174,   175,   176,   177,   178,     0,     0,   179,   180,
       0,     0,     0,     0,   181,   182,   183,   184,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   185,
     186,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,     0,   197,   198,     0,     0,     0,     0,     0,   199,
     404,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,     0,     0,     0,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,     0,     0,
       0,     0,     0,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   288,   289,   169,   290,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   170,   171,   172,   173,   174,   175,   176,
     177,   178,     0,     0,   179,   180,     0,     0,     0,     0,
     181,   182,   183,   184,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   185,   186,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,     0,   197,   198,
       0,     0,     0,     0,     0,   199,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
       0,     0,     0,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,     0,     0,     0,     0,     0,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   239,     0,   169,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   170,   171,
     172,   173,   174,   175,   176,   177,   178,     0,     0,   179,
     180,     0,     0,     0,     0,   181,   182,   183,   184,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     185,   186,     0,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,     0,   197,   198,     0,     0,     0,     0,     0,
     199,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,     0,     0,     0,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,     0,     0,
       0,     0,     0,   160,   161,   162,   163,   164,   165,   166,
     167,   168,     0,     0,   169,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   170,   171,   172,   173,   174,   175,   176,
     177,   178,     0,     0,   179,   180,     0,     0,     0,     0,
     181,   182,   183,   184,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   185,   186,     0,     0,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,     0,   197,   198,
       0,     0,     0,     0,     0,   199,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
       0,     0,     0,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,     0,     0,     0,     0,     0,   160,   161,
     162,   163,   164,   165,   166,   167,   168,     0,     0,   169,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   170,   171,
     172,   173,   174,   175,   176,   177,   178,     0,     0,   179,
     180,     0,     0,     0,     0,   181,   182,   183,   184,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     185,   186,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,     0,   197,   198,     5,     6,     7,     0,     9,
     199,     0,     0,    10,    11,     0,     0,     0,    12,     0,
      13,    14,    15,   245,   246,    18,    19,     0,     0,     0,
       0,     0,    20,   247,   248,    23,    24,    25,    26,     0,
       0,   206,     0,     0,     0,     0,     0,     0,   277,     0,
       0,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,    41,    42,    43,    44,    45,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     278,     0,     0,   209,    54,     0,    55,    56,     0,     0,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,   279,    10,    11,     0,     0,     0,    12,   280,    13,
      14,    15,   245,   246,    18,    19,     0,     0,     0,     0,
       0,    20,   247,   248,    23,    24,    25,    26,     0,     0,
     206,     0,     0,     0,     0,     0,     0,   277,     0,     0,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      41,    42,    43,    44,    45,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   278,
       0,     0,   209,    54,     0,    55,    56,     0,     0,     0,
       0,    58,    59,    60,    61,    62,    63,    64,    65,    66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     8,     9,     0,     0,
     279,    10,    11,     0,     0,     0,    12,   526,    13,    14,
      15,    16,    17,    18,    19,     0,     0,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,     0,     0,    27,
       0,     0,     0,     0,     0,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,    41,
      42,    43,    44,    45,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    51,     0,     0,     0,     0,     0,     0,    52,     0,
       0,    53,    54,     0,    55,    56,     0,    57,     0,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     9,     0,     0,     0,    10,    11,    67,
      68,    69,    12,     0,    13,    14,    15,    16,    17,    18,
      19,     0,     0,     0,     0,     0,    20,    21,    22,    23,
      24,    25,    26,     0,     0,   206,     0,     0,     0,     0,
       0,     0,    29,     0,     0,    32,    33,    34,    35,    36,
      37,    38,    39,    40,   207,    41,    42,    43,    44,    45,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    51,     0,     0,
       0,     0,     0,     0,   208,     0,     0,   209,    54,     0,
      55,    56,     0,   210,   211,   212,    58,    59,   213,    61,
      62,    63,    64,    65,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     8,     9,
       0,     0,     0,    10,    11,    67,   214,    69,    12,     0,
      13,    14,    15,    16,    17,    18,    19,     0,     0,     0,
       0,     0,    20,    21,    22,    23,    24,    25,    26,     0,
       0,    27,     0,     0,     0,     0,     0,    28,    29,     0,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,    41,    42,    43,    44,    45,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    51,     0,     0,     0,     0,     0,     0,
      52,     0,     0,    53,    54,     0,    55,    56,     0,    57,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     9,     0,     0,     0,    10,
      11,    67,    68,    69,    12,     0,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,     0,     0,    20,    21,
      22,    23,    24,    25,    26,     0,     0,   206,     0,     0,
       0,     0,     0,     0,    29,     0,     0,    32,    33,    34,
      35,    36,    37,    38,    39,    40,   207,    41,    42,    43,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,   439,
       0,     0,     0,     0,     0,     0,   208,     0,     0,   209,
      54,     0,    55,    56,     0,   210,   211,   212,    58,    59,
     213,    61,    62,    63,    64,    65,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     9,     0,     0,     0,    10,    11,    67,   214,    69,
      12,     0,    13,    14,    15,   245,   246,    18,    19,     0,
       0,     0,     0,     0,    20,   247,   248,    23,    24,    25,
      26,     0,     0,   206,     0,     0,     0,     0,     0,     0,
      29,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,   207,    41,    42,    43,    44,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,     0,     0,     0,     0,
       0,     0,   208,     0,     0,   209,    54,     0,    55,    56,
       0,   620,   211,   212,    58,    59,   213,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     9,     0,     0,
       0,    10,    11,    67,   214,    69,    12,     0,    13,    14,
      15,   245,   246,    18,    19,     0,     0,     0,     0,     0,
      20,   247,   248,    23,    24,    25,    26,     0,     0,   206,
       0,     0,     0,     0,     0,     0,    29,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,   207,    41,
      42,    43,    44,    45,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    51,     0,     0,     0,     0,     0,     0,   208,     0,
       0,   209,    54,     0,    55,    56,     0,   210,   211,     0,
      58,    59,   213,    61,    62,    63,    64,    65,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     9,     0,     0,     0,    10,    11,    67,
     214,    69,    12,     0,    13,    14,    15,   245,   246,    18,
      19,     0,     0,     0,     0,     0,    20,   247,   248,    23,
      24,    25,    26,     0,     0,   206,     0,     0,     0,     0,
       0,     0,    29,     0,     0,    32,    33,    34,    35,    36,
      37,    38,    39,    40,   207,    41,    42,    43,    44,    45,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    51,     0,     0,
       0,     0,     0,     0,   208,     0,     0,   209,    54,     0,
      55,    56,     0,     0,   211,   212,    58,    59,   213,    61,
      62,    63,    64,    65,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     9,
       0,     0,     0,    10,    11,    67,   214,    69,    12,     0,
      13,    14,    15,   245,   246,    18,    19,     0,     0,     0,
       0,     0,    20,   247,   248,    23,    24,    25,    26,     0,
       0,   206,     0,     0,     0,     0,     0,     0,    29,     0,
       0,    32,    33,    34,    35,    36,    37,    38,    39,    40,
     207,    41,    42,    43,    44,    45,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    51,     0,     0,     0,     0,     0,     0,
     208,     0,     0,   209,    54,     0,    55,    56,     0,   620,
     211,     0,    58,    59,   213,    61,    62,    63,    64,    65,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     9,     0,     0,     0,    10,
      11,    67,   214,    69,    12,     0,    13,    14,    15,   245,
     246,    18,    19,     0,     0,     0,     0,     0,    20,   247,
     248,    23,    24,    25,    26,     0,     0,   206,     0,     0,
       0,     0,     0,     0,    29,     0,     0,    32,    33,    34,
      35,    36,    37,    38,    39,    40,   207,    41,    42,    43,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,    51,
       0,     0,     0,     0,     0,     0,   208,     0,     0,   209,
      54,     0,    55,    56,     0,     0,   211,     0,    58,    59,
     213,    61,    62,    63,    64,    65,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     9,     0,     0,     0,    10,    11,    67,   214,    69,
      12,     0,    13,    14,    15,    16,    17,    18,    19,     0,
       0,     0,     0,     0,    20,    21,    22,    23,    24,    25,
      26,     0,     0,   206,     0,     0,     0,     0,     0,     0,
      29,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,    43,    44,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,     0,     0,     0,     0,
       0,     0,   208,     0,     0,   209,    54,     0,    55,    56,
       0,   519,     0,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     9,     0,     0,
       0,    10,    11,    67,   214,    69,    12,     0,    13,    14,
      15,   245,   246,    18,    19,     0,     0,     0,     0,     0,
      20,   247,   248,    23,    24,    25,    26,     0,     0,   206,
       0,     0,     0,     0,     0,     0,    29,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,    41,
      42,    43,    44,    45,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    51,     0,     0,     0,     0,     0,     0,   208,     0,
       0,   209,    54,     0,    55,    56,     0,   770,     0,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     9,     0,     0,     0,    10,    11,    67,
     214,    69,    12,     0,    13,    14,    15,   245,   246,    18,
      19,     0,     0,     0,     0,     0,    20,   247,   248,    23,
      24,    25,    26,     0,     0,   206,     0,     0,     0,     0,
       0,     0,    29,     0,     0,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,    41,    42,    43,    44,    45,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    51,     0,     0,
       0,     0,     0,     0,   208,     0,     0,   209,    54,     0,
      55,    56,     0,   519,     0,     0,    58,    59,    60,    61,
      62,    63,    64,    65,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     9,
       0,     0,     0,    10,    11,    67,   214,    69,    12,     0,
      13,    14,    15,   245,   246,    18,    19,     0,     0,     0,
       0,     0,    20,   247,   248,    23,    24,    25,    26,     0,
       0,   206,     0,     0,     0,     0,     0,     0,    29,     0,
       0,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,    41,    42,    43,    44,    45,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    51,     0,     0,     0,     0,     0,     0,
     208,     0,     0,   209,    54,     0,    55,    56,     0,   843,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     9,     0,     0,     0,    10,
      11,    67,   214,    69,    12,     0,    13,    14,    15,   245,
     246,    18,    19,     0,     0,     0,     0,     0,    20,   247,
     248,    23,    24,    25,    26,     0,     0,   206,     0,     0,
       0,     0,     0,     0,    29,     0,     0,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,    41,    42,    43,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,    51,
       0,     0,     0,     0,     0,     0,   208,     0,     0,   209,
      54,     0,    55,    56,     0,  1024,     0,     0,    58,    59,
      60,    61,    62,    63,    64,    65,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     9,     0,     0,     0,    10,    11,    67,   214,    69,
      12,     0,    13,    14,    15,   245,   246,    18,    19,     0,
       0,     0,     0,     0,    20,   247,   248,    23,    24,    25,
      26,     0,     0,   206,     0,     0,     0,     0,     0,     0,
      29,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,    43,    44,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,     0,     0,     0,     0,
       0,     0,   208,     0,     0,   209,    54,     0,    55,    56,
       0,     0,     0,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     9,     0,     0,
       0,    10,    11,    67,   214,    69,    12,     0,    13,    14,
      15,    16,    17,    18,    19,     0,     0,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,     0,     0,   206,
       0,     0,     0,     0,     0,     0,    29,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,    41,
      42,    43,    44,    45,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    51,     0,     0,     0,     0,     0,     0,   208,     0,
       0,   209,    54,     0,    55,    56,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     9,     0,     0,     0,    10,    11,    67,
     214,    69,    12,     0,    13,    14,    15,    16,    17,    18,
      19,     0,     0,     0,     0,     0,    20,    21,    22,    23,
      24,    25,    26,     0,     0,    27,     0,     0,     0,     0,
       0,     0,    29,     0,     0,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,    41,    42,    43,    44,    45,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    51,     0,     0,
       0,     0,     0,     0,   208,     0,     0,   209,    54,     0,
      55,    56,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,    64,    65,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     9,
       0,     0,     0,    10,    11,    67,    68,    69,    12,     0,
      13,    14,    15,   245,   246,    18,    19,     0,     0,     0,
       0,     0,    20,   247,   248,    23,    24,    25,    26,     0,
       0,   206,     0,     0,     0,     0,     0,     0,   277,     0,
       0,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,    41,    42,    43,    44,    45,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     278,     0,     0,   328,    54,     0,    55,    56,     0,   329,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     9,     0,     0,     0,    10,    11,     0,     0,     0,
      12,   279,    13,    14,    15,   245,   246,    18,    19,     0,
       0,     0,     0,     0,    20,   247,   248,    23,    24,    25,
      26,     0,     0,   206,     0,     0,     0,     0,     0,     0,
     277,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,    43,    44,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   376,     0,     0,    53,    54,     0,    55,    56,
       0,    57,     0,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     9,     0,     0,     0,    10,    11,     0,
       0,     0,    12,   279,    13,    14,    15,   245,   246,    18,
      19,     0,     0,     0,     0,     0,    20,   247,   248,    23,
      24,    25,    26,     0,     0,   206,     0,     0,     0,     0,
       0,     0,   277,     0,     0,    32,    33,    34,   384,    36,
      37,    38,   385,    40,     0,    41,    42,    43,    44,    45,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     386,     0,     0,     0,   387,     0,     0,   209,    54,     0,
      55,    56,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,    64,    65,    66,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     9,     0,     0,     0,    10,
      11,     0,     0,     0,    12,   279,    13,    14,    15,   245,
     246,    18,    19,     0,     0,     0,     0,     0,    20,   247,
     248,    23,    24,    25,    26,     0,     0,   206,     0,     0,
       0,     0,     0,     0,   277,     0,     0,    32,    33,    34,
     384,    36,    37,    38,   385,    40,     0,    41,    42,    43,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   387,     0,     0,   209,
      54,     0,    55,    56,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,    64,    65,    66,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     9,     0,     0,
       0,    10,    11,     0,     0,     0,    12,   279,    13,    14,
      15,   245,   246,    18,    19,     0,     0,     0,     0,     0,
      20,   247,   248,    23,    24,    25,    26,     0,     0,   206,
       0,     0,     0,     0,     0,     0,   277,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,    41,
      42,    43,    44,    45,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   278,     0,
       0,   328,    54,     0,    55,    56,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     9,
       0,     0,     0,    10,    11,     0,     0,     0,    12,   279,
      13,    14,    15,   245,   246,    18,    19,     0,     0,     0,
       0,     0,    20,   247,   248,    23,    24,    25,    26,     0,
       0,   206,     0,     0,     0,     0,     0,     0,   277,     0,
       0,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,    41,    42,    43,    44,    45,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1010,     0,     0,   209,    54,     0,    55,    56,     0,     0,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     9,     0,     0,     0,    10,    11,     0,     0,     0,
      12,   279,    13,    14,    15,   245,   246,    18,    19,     0,
       0,     0,     0,     0,    20,   247,   248,    23,    24,    25,
      26,     0,     0,   206,     0,     0,     0,     0,     0,     0,
     277,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,    43,    44,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1066,     0,     0,   209,    54,     0,    55,    56,
      23,    24,    25,    26,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,    32,    33,    34,   781,
       0,     0,     0,   782,     0,   885,    41,    42,    43,    44,
      45,     0,     0,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   886,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   783,   784,     0,
       0,     0,     0,     0,     0,   785,     0,     0,   786,     0,
       0,   787,   788,     0,   878,   887,     0,   789,    59,  1003,
      61,    62,    63,    64,    65,    66,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   790,
       0,     0,    32,    33,    34,   781,   279,     0,     0,   782,
       0,     0,    41,    42,    43,    44,    45,     0,     0,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    33,    34,   781,     0,
       0,     0,   782,   783,   784,    41,    42,    43,    44,    45,
       0,   785,     0,     0,   786,     0,     0,   787,   788,     0,
     987,     0,     0,   789,    59,    60,    61,    62,    63,    64,
      65,    66,     0,     0,     0,     0,   783,   784,     0,     0,
       0,     0,     0,     0,   785,   790,     0,   786,     0,     0,
     787,   788,   279,   878,     0,     0,   789,    59,    60,    61,
      62,    63,    64,    65,    66,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   790,     0,
       0,    32,    33,    34,   781,   279,     0,     0,   782,     0,
       0,    41,    42,    43,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   783,   784,     0,     0,     0,     0,     0,     0,
     785,     0,     0,   786,     0,     0,   787,   788,     0,     0,
       0,     0,   789,    59,    60,    61,    62,    63,    64,    65,
      66,   564,   565,     0,     0,   566,     0,     0,     0,     0,
       0,     0,     0,     0,   790,     0,     0,     0,     0,     0,
       0,   279,     0,     0,   170,   171,   172,   173,   174,   175,
     176,   177,   178,     0,     0,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,   572,   573,     0,     0,   574,   199,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,   171,   172,   173,   174,   175,
     176,   177,   178,     0,     0,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,   624,   565,     0,     0,   625,   199,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,   171,   172,   173,   174,   175,
     176,   177,   178,     0,     0,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,   627,   573,     0,     0,   628,   199,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,   171,   172,   173,   174,   175,
     176,   177,   178,     0,     0,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,   652,   565,     0,     0,   653,   199,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,   171,   172,   173,   174,   175,
     176,   177,   178,     0,     0,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,   655,   573,     0,     0,   656,   199,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,   171,   172,   173,   174,   175,
     176,   177,   178,     0,     0,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,   722,   565,     0,     0,   723,   199,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,   171,   172,   173,   174,   175,
     176,   177,   178,     0,     0,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,   725,   573,     0,     0,   726,   199,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,   171,   172,   173,   174,   175,
     176,   177,   178,     0,     0,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,   731,   565,     0,     0,   732,   199,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,   171,   172,   173,   174,   175,
     176,   177,   178,     0,     0,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,   609,   573,     0,     0,   610,   199,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,   171,   172,   173,   174,   175,
     176,   177,   178,     0,     0,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,   776,   565,     0,     0,   777,   199,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,   171,   172,   173,   174,   175,
     176,   177,   178,     0,     0,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,   779,   573,     0,     0,   780,   199,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,   171,   172,   173,   174,   175,
     176,   177,   178,     0,     0,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,  1154,   565,     0,     0,  1155,   199,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,   171,   172,   173,   174,   175,
     176,   177,   178,     0,     0,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,  1157,   573,     0,     0,  1158,   199,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,   171,   172,   173,   174,   175,
     176,   177,   178,     0,     0,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,  1188,   565,     0,     0,  1189,   199,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,   171,   172,   173,   174,   175,
     176,   177,   178,     0,     0,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,   609,   573,     0,     0,   610,   199,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,   171,   172,   173,   174,   175,
     176,   177,   178,     0,     0,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,     0,     0,     0,     0,     0,   199
};

static const yytype_int16 yycheck[] =
{
       2,    60,    92,   102,   710,    95,    71,    59,    22,    28,
      89,   369,   364,   227,    94,   626,    83,     8,    16,    17,
     717,    53,   101,   271,   363,   425,   365,   275,    16,    17,
      95,   331,     4,   433,   387,    91,    92,    28,    71,    95,
      95,   881,    57,   654,     2,    57,     4,    99,    27,     8,
      29,    26,    53,    55,    56,  1076,   603,    55,    16,    17,
     433,    67,  1038,    25,    78,   482,   904,   905,    59,    28,
      13,    83,   411,    27,    25,   934,     2,   429,     4,    25,
      22,    16,    17,   857,    96,    97,    98,  1049,  1064,   428,
     864,   430,    26,   951,   952,    53,    54,    25,    13,    57,
     473,  1111,   100,    25,  1072,    16,    17,   866,    99,   526,
      68,    97,   100,   724,    52,   973,   974,   975,    56,   458,
      55,    56,    25,   734,   259,    83,   967,    25,    54,   295,
     296,    68,   484,    91,    92,    52,    78,    95,    96,    97,
      98,    66,   100,   222,   100,   985,   485,    13,    34,    25,
      37,    38,   414,   415,   213,    25,    68,     9,    68,   145,
      97,    66,   148,    15,   126,   100,    52,   778,   143,  1028,
    1029,    25,   251,   148,   148,  1196,   787,   209,     0,   153,
     236,   866,   238,   730,   146,    97,    13,   149,   962,   100,
     146,   153,  1202,   328,   119,   146,   261,   151,  1174,   153,
     146,    13,   148,   146,   283,   331,   261,  1169,   151,   143,
     153,   143,   244,   280,   119,  1191,  1184,  1058,   146,   221,
     310,   311,   312,   313,   146,   227,    13,   259,   261,   146,
     444,   233,   230,   633,   232,   635,   151,  1077,   153,   591,
     242,  1081,   230,   146,   232,   233,    13,   600,   146,   601,
    1109,   209,  1111,   592,   310,   311,   312,   313,   259,   315,
     316,  1119,   635,   602,  1102,   682,   153,   109,   280,   880,
     146,    25,   230,   279,   232,   233,   146,    56,   236,  1038,
     238,   371,  1140,   143,   242,   151,   244,   153,   414,   415,
    1049,   133,   146,   904,   148,   230,   328,   232,   277,   257,
     379,   259,   849,    52,    29,  1064,   248,   249,   373,   856,
    1150,  1151,   100,  1072,   329,   371,   242,   329,   373,   230,
    1026,   232,   280,   870,   151,    13,   153,   328,   326,  1026,
     386,   257,   498,   331,   500,   687,   148,   309,   370,   151,
     372,   153,    99,  1202,  1203,    13,   153,   686,    25,   688,
     100,   309,   310,   311,   312,   313,   314,   315,   316,   783,
     784,   148,   364,    52,   151,   153,   153,    56,   326,   126,
     328,   329,   126,   331,   365,    68,   364,    13,   151,  1064,
     153,  1109,    66,   309,   151,    13,   153,  1072,   314,  1074,
      66,    99,   146,  1004,  1005,   149,   146,   146,   123,   153,
      58,   649,   788,    96,    97,   705,   364,  1077,   366,   623,
    1169,  1081,   370,   371,   372,   482,   326,    99,   126,    77,
     411,   331,   855,   365,   857,  1184,    99,   429,   386,   691,
     692,   864,   785,   452,   152,   697,   698,   121,   122,   430,
     442,   429,   444,   119,   126,   121,   122,    66,   124,   126,
     108,   152,   236,   126,   112,   152,   414,   415,   537,   526,
     152,   452,   862,   151,   146,   153,   126,   458,   152,   146,
     482,   429,   149,   146,   518,  1203,   153,   901,   902,    34,
     264,  1151,   484,   151,   268,   153,   144,   845,   430,   862,
     425,    66,    68,   452,   485,   661,   484,    52,   689,  1184,
     666,  1186,   121,   122,   414,   415,  1191,   465,  1193,  1215,
    1057,    58,    99,   593,   526,   151,   458,   153,   904,   905,
     585,    97,    28,   151,   482,   153,   484,    68,   146,   962,
      77,   126,   918,   152,   578,   470,   750,    99,  1223,   126,
     584,    68,   586,   485,   119,  1156,   121,   122,   604,   581,
     903,   583,   910,    99,   816,   569,    97,   915,   684,   146,
      58,   108,   109,   577,   126,   691,   692,   112,   526,    96,
      97,   697,   698,    99,   553,   577,    68,   579,    68,    77,
     126,  1128,   638,   650,   146,    99,   133,    68,    25,   591,
      99,    68,   571,    66,    67,   786,   787,   611,   617,   601,
     146,   592,    68,   591,    96,    97,    77,    97,   994,   611,
     108,   602,   126,   601,   112,   682,    97,   126,   145,    96,
      97,   623,   126,   581,    15,   583,   617,   569,    68,   146,
      96,    97,   146,   591,    25,   577,   153,   146,   650,   729,
     739,   643,   146,   601,   146,   603,   604,   626,   121,   122,
     592,   435,   148,   145,    56,  1041,   440,    97,   617,   443,
     602,  1019,   446,   728,    68,   136,   137,   138,   145,   611,
     682,   148,   126,   729,   718,   654,    68,   721,   462,   145,
     638,    26,  1068,   467,   100,   687,   738,   146,    68,   126,
     816,   735,   650,    97,   885,   727,    99,   688,   633,   687,
     642,   643,   146,   705,   706,    97,   708,   705,   710,   146,
      99,   148,   149,   904,   905,   148,   153,    97,    15,    26,
      17,   679,    99,    68,   682,   683,   684,   918,   146,   687,
     866,    99,    99,   691,   692,   153,    99,   126,   148,   697,
     698,   525,  1094,    99,   834,   724,   688,   738,   750,   126,
      26,    96,    97,   679,    66,   734,  1095,   683,   126,   126,
     148,    68,     2,   126,     4,   767,    99,   769,    99,   727,
     126,   729,   730,    77,   684,   149,    16,    17,   834,    82,
      83,   691,   692,   866,   126,   850,   150,   697,   698,    96,
      97,   835,    68,   126,   838,   126,   828,   841,   143,   778,
     145,   833,    68,   148,   848,    68,    66,   851,   787,   121,
     122,    68,   124,    53,    54,    99,    68,    37,    38,    68,
      96,    97,   824,   144,   689,    68,   129,   130,    68,   888,
      96,    97,    56,    96,    97,   867,   143,    68,   145,    96,
      97,   148,   126,   694,    96,    97,   146,    96,    97,    68,
     701,    91,    92,    96,    97,    95,   146,    68,   816,   119,
     100,   121,   122,   153,   124,    96,    97,   143,    77,   145,
     828,    68,   148,   106,    66,   833,   834,    96,    97,   145,
     924,   913,   145,   151,    66,    96,    97,   866,   145,    56,
     922,   849,  1083,   145,    25,   960,   145,   909,   856,    96,
      97,   880,   145,    14,    15,  1041,   816,    66,   146,   867,
    1046,  1102,   870,   130,   145,   959,   146,    68,   783,   784,
     149,   786,   787,    66,   146,   904,   145,   119,  1064,   121,
     122,    54,  1068,  1012,   145,    44,  1072,   119,  1074,   121,
     122,    64,    65,   144,  1003,    96,    97,   949,   145,   951,
     952,   909,   736,   866,   144,   913,   904,   905,  1041,   971,
     119,   146,   121,   122,   922,    40,    41,   751,   146,   209,
     918,   973,   974,   975,    88,    89,   119,    10,   121,   122,
     144,  1064,   414,   415,  1016,  1068,  1018,    44,   967,  1072,
     230,  1074,   232,   233,   145,     8,   236,   146,   238,   431,
     432,   146,   242,    13,   244,    77,    59,    60,    61,    62,
    1100,  1101,   146,   971,   126,  1017,   881,   257,    25,   259,
     885,    17,    94,    95,  1026,  1004,  1005,   459,  1060,    52,
     152,    54,    55,    56,    57,   900,   901,   902,   146,   904,
     905,   977,   978,   144,  1100,  1101,   152,   128,  1184,    15,
    1186,  1063,   150,   918,   148,  1191,   146,  1193,  1016,   146,
    1018,   133,   134,   135,   136,   137,   138,   131,    52,   309,
     310,   311,   312,   313,   314,   315,   316,   131,   101,  1058,
     100,   100,  1126,   146,   107,   146,   326,  1223,   328,   144,
     146,   331,  1094,   877,  1096,    52,  1098,  1129,     2,  1057,
       4,  1184,  1060,  1186,  1095,  1063,  1094,   146,  1191,   126,
    1193,   146,    16,    17,   146,   146,    52,  1119,   146,    52,
     985,   905,    77,   131,   364,   126,   366,   151,   146,    56,
     370,   371,   372,     9,   146,   146,  1094,  1181,  1140,   131,
    1223,   146,  1100,  1101,   146,    56,   386,   146,   146,    53,
      54,  1064,   146,  1095,    52,  1068,   940,   941,   689,  1072,
     146,  1074,    54,    55,    68,    57,   146,  1146,   146,  1201,
    1128,  1129,    64,    65,   414,   415,   146,  1156,   146,   134,
     135,   136,   137,   138,   855,   146,   857,    91,    92,   429,
     149,    95,   120,   864,   146,   866,   100,   146,   146,  1135,
    1136,   146,   146,   146,   689,  1141,   144,  1143,  1144,   148,
     461,   148,  1077,  1215,   146,   146,  1081,   242,  1083,   954,
     465,   956,    96,  1007,  1008,   465,    98,    87,   611,  1098,
      52,   706,    54,    55,    56,    57,    52,  1102,    54,    55,
      56,    57,  1028,  1201,   484,  1109,   866,   769,  1032,  1196,
     896,   740,   783,   784,   324,   786,   787,   900,   514,   691,
     692,   918,  1215,   994,   994,   697,   698,   994,   898,  1017,
    1096,  1184,   105,  1186,  1210,  1211,  1212,  1213,  1191,   101,
    1193,    99,   500,   961,   855,  1150,  1151,  1068,  1041,  1064,
      -1,   962,  1038,    -1,    -1,  1231,    -1,    -1,   783,   784,
      -1,   786,   787,    -1,    52,   209,    54,    55,    56,    57,
    1223,    -1,    -1,   745,   746,    -1,   748,   749,    40,    41,
      42,    43,    44,  1107,    -1,    -1,   230,    -1,   232,   233,
      -1,   866,   236,    -1,   238,    -1,    -1,    -1,   242,    -1,
     244,   581,    -1,   583,    -1,    -1,    -1,    -1,    -1,    -1,
     881,   591,    -1,   257,   885,   259,    -1,    -1,    -1,    -1,
      -1,   601,    -1,   603,   604,    -1,    -1,  1038,    -1,   900,
     901,   902,    -1,   904,   905,    -1,    -1,    -1,  1049,    -1,
    1115,  1116,    -1,     2,   816,     4,  1121,   918,  1123,    -1,
    1125,    -1,    -1,  1064,    -1,    -1,   881,    -1,   638,    -1,
     885,  1072,    -1,    -1,    -1,   309,   310,   311,   312,   313,
     314,   315,   316,    -1,    -1,   900,   901,   902,    -1,   904,
     905,    -1,   326,    -1,   328,    -1,    -1,   331,    56,   861,
      -1,    -1,    -1,   918,    53,    54,    -1,    -1,    57,   679,
      -1,    -1,    -1,   683,   684,    -1,    -1,   687,    -1,    -1,
      -1,   691,   692,    -1,   985,    -1,    -1,   697,   698,    -1,
     364,    -1,   366,    -1,    83,    -1,   370,   371,   372,  1204,
    1205,  1206,  1207,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,    -1,   386,    -1,    -1,    -1,    -1,   727,    -1,   729,
     730,    -1,    -1,    -1,    -1,  1230,    -1,    -1,  1169,    -1,
     985,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     414,   415,    -1,  1184,  1049,    -1,    -1,  1052,    52,    -1,
      54,    55,    56,    57,    58,   429,    -1,    -1,    -1,    52,
      -1,    54,    55,    56,    57,    58,    -1,  1072,    -1,  1074,
      -1,    -1,    -1,    77,    -1,    -1,  1077,    77,    -1,    -1,
    1081,    -1,  1083,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,   465,    -1,    -1,    94,    95,    -1,   101,    -1,    -1,
      -1,  1102,    -1,   107,   108,   109,   816,    -1,   101,   207,
     484,    -1,   210,   211,   212,   108,   109,    -1,   828,    -1,
     209,    -1,  1077,   833,   834,    -1,  1081,    -1,  1083,   133,
      -1,    -1,   136,    -1,   134,   135,   136,   137,   138,   849,
     133,    -1,    -1,    -1,   148,    -1,   856,  1102,    -1,  1150,
    1151,    -1,   689,   242,    -1,   244,    -1,   867,    -1,    -1,
     870,    -1,    -1,    -1,  1169,    -1,  1171,    -1,   257,    -1,
     259,  1176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1184,
      -1,  1186,    -1,    -1,    -1,    -1,    -1,    -1,  1193,    -1,
       2,   280,     4,    -1,    -1,  1150,  1151,    77,    -1,    -1,
      -1,    -1,    -1,   913,    -1,    -1,    -1,   581,    -1,   583,
      -1,    -1,   922,  1218,    94,    95,    -1,   591,  1223,    -1,
     309,    -1,    -1,    -1,    -1,   314,    -1,   601,   326,   603,
     604,    -1,    -1,   331,    -1,    -1,    -1,    -1,    -1,   328,
     329,    53,    54,    -1,    -1,    57,   783,   784,    -1,   786,
     787,   131,   132,   133,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,    -1,   638,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,   366,    -1,    -1,
      -1,   370,    -1,   372,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   679,  1016,    -1,  1018,   683,
     684,    -1,    -1,   687,    -1,    -1,    -1,   691,   692,    -1,
      -1,    -1,    -1,   697,   698,    -1,   424,   425,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   433,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   881,    -1,    -1,  1057,   885,    -1,
    1060,    -1,    -1,   727,    -1,   729,   730,    -1,    -1,    -1,
      -1,    -1,    -1,   900,   901,   902,    -1,   904,   905,    -1,
      -1,    -1,   470,    -1,    -1,   473,   465,    -1,    -1,    -1,
      -1,   918,    -1,    -1,  1094,    -1,    -1,    -1,    -1,    -1,
    1100,  1101,    -1,   482,    -1,    -1,    -1,   209,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1128,  1129,
      -1,   519,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
     242,    -1,   244,    -1,    -1,    -1,    -1,   526,    -1,    -1,
      -1,    -1,   816,    -1,    -1,   257,    -1,   259,   985,   101,
      -1,    -1,    -1,    -1,   828,   107,   108,   109,    -1,   833,
     834,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   280,    -1,
      -1,    -1,    -1,    -1,    -1,   849,    -1,    -1,    -1,    -1,
      -1,   133,   856,    -1,   136,    -1,    -1,    -1,    -1,    -1,
      -1,  1201,   581,   867,   583,    -1,   870,   309,    -1,    -1,
      -1,   153,   314,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   603,    -1,   328,   329,    -1,   331,
     618,    -1,   620,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       2,    -1,     4,    -1,    -1,   633,    -1,   635,    -1,   913,
    1077,    -1,    -1,    -1,  1081,    -1,  1083,    -1,   922,    -1,
      -1,    -1,    -1,    -1,   366,    -1,    -1,    -1,   370,    -1,
     372,   650,    -1,    -1,    -1,  1102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     678,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
     679,    -1,    -1,   682,   683,    -1,    -1,    -1,    -1,    -1,
     689,    -1,   414,   415,    -1,    -1,    -1,   705,    -1,    -1,
      -1,    83,    -1,  1150,  1151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   720,    -1,    96,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   727,    -1,
      -1,   730,  1016,    -1,  1018,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   465,    -1,     2,    -1,     4,    -1,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    -1,
     482,    -1,   770,    -1,    -1,    52,    -1,    54,    55,    56,
      57,    58,    -1,  1057,    -1,    -1,  1060,    77,    -1,    -1,
      -1,    -1,    -1,    -1,   783,   784,    -1,   786,   787,    -1,
      77,    91,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,
      -1,   101,    -1,    -1,   526,    -1,    -1,   107,   108,   109,
    1094,    -1,    -1,    -1,   101,    -1,  1100,  1101,    -1,    -1,
     107,   108,   109,    -1,    -1,    -1,    -1,   209,    -1,   828,
      -1,    -1,    -1,   133,   833,   843,   136,    -1,    -1,    96,
      -1,    -1,    -1,    -1,  1128,  1129,   133,    -1,    -1,   136,
     849,    -1,    -1,    -1,   862,    -1,    -1,   856,    -1,   581,
     242,   583,   244,    -1,    -1,    -1,    -1,    -1,   867,    -1,
      -1,   870,    -1,    -1,    -1,   257,    -1,   259,    -1,    -1,
      -1,   603,   881,    -1,    -1,    -1,   885,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   280,    -1,
      -1,   900,   901,   902,    -1,   904,   905,    -1,    -1,    -1,
     909,    -1,    -1,   921,   913,    -1,    -1,  1201,    -1,   918,
      -1,    -1,    -1,   922,    -1,    -1,   689,   309,   650,    -1,
      -1,    -1,   314,    -1,    -1,    -1,    -1,   659,    -1,   947,
      -1,    -1,    -1,    -1,    -1,    -1,   328,   329,    -1,    -1,
      -1,    -1,   209,    -1,    -1,    -1,    -1,   679,    -1,    -1,
     682,   683,   684,    -1,    -1,    -1,    -1,    -1,   689,   691,
     692,    -1,   971,    -1,    -1,   697,   698,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   366,   242,   985,   244,   370,    -1,
     372,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     257,    -1,   259,    -1,    -1,   727,    -1,    -1,   730,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1024,  1016,    -1,  1018,
     783,   784,    -1,   786,   787,    -1,    -1,    -1,    -1,  1037,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     2,    -1,     4,
      -1,    -1,   309,    -1,    -1,    -1,    -1,   314,  1057,    -1,
      -1,  1060,   783,   784,  1063,   786,   787,    -1,    -1,    -1,
      -1,   328,    -1,    -1,   331,    -1,    -1,    -1,  1077,    -1,
      -1,    -1,  1081,   465,  1083,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   816,    -1,    -1,    -1,    53,    54,
     482,    -1,    -1,  1102,    -1,    -1,   828,    -1,    -1,   366,
      -1,   833,    -1,   370,    -1,   372,    -1,    -1,   881,    -1,
      -1,    -1,   885,    -1,    -1,    -1,    -1,   849,    -1,  1128,
    1129,    -1,    -1,    -1,   856,    -1,    -1,   900,   901,   902,
      -1,   904,   905,    -1,   526,   867,    -1,    -1,   870,    -1,
      -1,  1150,  1151,    -1,    -1,   918,    -1,   414,   415,    -1,
     881,    -1,    -1,    -1,   885,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   900,
     901,   902,    -1,   904,   905,    -1,    -1,   909,    -1,    -1,
      -1,   913,    -1,    -1,    -1,    -1,    -1,   918,    -1,   581,
     922,   583,  1201,    -1,    -1,    -1,    -1,    -1,   465,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   603,   985,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   971,
      -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   985,    -1,    -1,    -1,   650,    -1,
      -1,    -1,    -1,   127,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,    -1,   242,   689,   244,
      -1,    -1,    -1,    -1,  1016,    -1,  1018,   679,    -1,    -1,
     682,   683,   257,    -1,   259,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1077,    -1,    -1,    -1,  1081,    -1,
    1083,    -1,    -1,    -1,   581,    -1,   583,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1057,    -1,    -1,  1060,  1102,
      -1,  1063,    -1,    -1,    -1,   727,   603,    -1,   730,    -1,
      -1,    -1,    -1,    -1,   309,    -1,  1077,    -1,    -1,   314,
    1081,    -1,  1083,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   328,    -1,    -1,   331,    -1,    -1,    -1,
      -1,  1102,   783,   784,    -1,   786,   787,  1150,  1151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1128,  1129,    -1,    -1,
      -1,   366,    -1,    -1,    -1,   370,    -1,   372,    -1,    -1,
      -1,    -1,   679,    -1,    -1,    -1,   683,   684,    -1,  1150,
    1151,    -1,    -1,    -1,   691,   692,    -1,    -1,    -1,    -1,
     697,   698,    -1,    -1,    -1,    -1,   828,    -1,    -1,    -1,
      -1,   833,    -1,    -1,    -1,    -1,    -1,   689,    -1,   414,
     415,    -1,    -1,    -1,    -1,    -1,    -1,   849,    -1,    -1,
     727,    -1,    -1,   730,   856,    -1,    -1,    -1,    -1,  1201,
     881,    -1,    -1,    -1,   885,   867,    -1,    -1,   870,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   900,
     901,   902,    -1,   904,   905,    -1,    -1,    -1,    -1,    -1,
     465,    -1,    -1,    -1,    -1,    -1,    -1,   918,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   909,    -1,    -1,
      -1,   913,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     922,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   783,   784,    -1,   786,   787,    -1,    -1,    -1,   816,
      -1,    -1,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,   828,    86,    87,    -1,    -1,   833,    -1,    -1,    -1,
      94,    95,    -1,    -1,   985,    -1,    -1,    -1,    -1,   971,
      -1,    -1,   849,    -1,    -1,    -1,    -1,    -1,    -1,   856,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     867,    16,    17,   870,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   581,    -1,   583,    -1,
      -1,    -1,    -1,    -1,  1016,    -1,  1018,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    -1,   603,   881,
      55,    56,   909,   885,    -1,    -1,   913,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,   922,    -1,    -1,   900,   901,
     902,    -1,   904,   905,    -1,  1057,  1077,    -1,  1060,    -1,
    1081,  1063,  1083,    -1,    -1,    -1,   918,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,  1102,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    -1,   679,    -1,    -1,    -1,   683,   684,
      59,    60,    61,    62,    63,    -1,   691,   692,    -1,    -1,
      -1,    -1,   697,   698,    -1,    -1,  1128,  1129,    -1,  1150,
    1151,    -1,    -1,   985,    -1,    -1,    -1,    -1,    -1,  1016,
      -1,  1018,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   727,    -1,    -1,   730,    -1,    -1,    -1,    -1,
      -1,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
    1057,    -1,   207,  1060,    -1,   210,   211,   212,    -1,   214,
     139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1201,
      -1,    -1,    -1,    -1,    -1,   230,    -1,   232,   233,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    -1,    -1,  1077,    94,    95,    -1,  1081,
      -1,  1083,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   816,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1102,  1128,  1129,   828,    -1,    -1,    -1,    -1,   833,   127,
      -1,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,    -1,    -1,   849,    -1,    -1,    -1,   146,    -1,
      -1,   856,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   867,    -1,    -1,   870,    -1,    -1,  1150,  1151,
      -1,   326,    -1,    -1,    -1,    -1,   331,    -1,   333,   334,
     335,   336,   337,    -1,    -1,   340,   341,   342,   343,   344,
     345,   346,   347,   348,  1201,    -1,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,    -1,    -1,   913,   364,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   922,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,   414,
     415,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,   424,
     425,    -1,    -1,    -1,   429,    -1,   431,   432,   433,    -1,
      -1,    -1,    -1,    -1,   439,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,   454,
      -1,    -1,    94,    95,   459,    -1,    -1,    -1,    -1,    -1,
      -1,  1016,    -1,  1018,    -1,   470,    -1,    -1,   473,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   484,
      -1,    -1,    -1,    -1,    -1,   127,    -1,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   502,    -1,    -1,
      -1,    -1,  1057,    -1,    -1,  1060,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   519,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     0,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,     9,    10,    -1,    -1,    -1,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,  1128,  1129,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   591,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,   601,    -1,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,   618,    -1,   620,    -1,    94,    95,    96,
      97,    -1,    99,    -1,    -1,    -1,    -1,    -1,   633,    -1,
     635,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    -1,    -1,  1201,    -1,    -1,   126,
     127,    -1,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    -1,   143,   144,   145,   146,
      -1,    -1,   149,   678,   151,    -1,   153,    -1,    -1,   684,
     685,    -1,   687,    -1,    -1,    -1,   691,   692,    -1,    -1,
      -1,    -1,   697,   698,    -1,    33,    34,    35,    36,    -1,
     705,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,   720,    -1,    -1,    56,    -1,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
     745,   746,    -1,   748,   749,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,   101,    -1,   770,   104,   105,    -1,   107,
     108,    -1,   110,   111,   112,   113,   114,   115,   116,   117,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,   139,    -1,    -1,   809,    -1,    -1,    -1,    -1,    -1,
      -1,   816,    -1,     0,     1,   153,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,   843,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,   861,   862,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,   101,   102,   921,   104,   105,    -1,
     107,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   947,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   151,     0,   153,    -1,    -1,    -1,
      -1,    -1,    -1,     8,     9,    10,    -1,    -1,    13,    14,
      15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1024,
      77,    78,    79,    80,    81,    82,    83,    -1,    -1,    86,
      87,    -1,  1037,    68,    -1,    -1,    -1,    94,    95,    -1,
      -1,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,    94,
      95,    96,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    -1,    -1,    -1,   120,    -1,    -1,   123,  1094,
      -1,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,   144,
     145,   146,     0,    -1,   149,   150,   151,    -1,   153,    -1,
       8,     9,    10,    -1,    -1,    13,    14,    15,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      68,    -1,    -1,    -1,    94,    95,    -1,    -1,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
      -1,    99,   100,    -1,    -1,    -1,    -1,   127,   106,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    -1,
      -1,    -1,   120,    -1,    -1,   123,    -1,    -1,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,     0,
      -1,   149,   150,   151,    -1,   153,    -1,     8,     9,    10,
      -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    68,    -1,    -1,
      -1,    94,    95,    -1,    -1,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    -1,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,    -1,    -1,   120,
      -1,    -1,   123,    -1,    -1,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,     0,    -1,   149,   150,
     151,    -1,   153,    -1,     8,     9,    10,    -1,    -1,    13,
      14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      86,    87,    -1,    -1,    68,    -1,    -1,    -1,    94,    95,
      -1,    -1,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      94,    95,    96,    97,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,   106,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,    -1,    -1,    -1,   120,    -1,    -1,   123,
      -1,    -1,    -1,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,
     144,   145,   146,     0,    -1,   149,   150,   151,    -1,   153,
      -1,     8,     9,    10,    -1,    -1,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    -1,    -1,    -1,    -1,    94,    95,    96,
      97,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    -1,   143,   144,   145,   146,
       0,    -1,   149,   150,   151,    -1,   153,    -1,     8,     9,
      10,    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    94,    95,    96,    97,    -1,    99,
     100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120,    -1,    -1,   123,    -1,    -1,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,     0,    -1,   149,
     150,   151,    -1,   153,    -1,     8,     9,    10,    -1,    -1,
      13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
      -1,    -1,    -1,    -1,   127,    -1,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,
     143,   144,   145,   146,     0,   148,   149,   150,   151,    -1,
     153,    -1,     8,     9,    10,    -1,    -1,    13,    14,    15,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    -1,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,
      -1,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,     0,    -1,   149,   150,   151,    -1,   153,    -1,     8,
       9,    10,    -1,    -1,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    -1,    -1,    -1,    -1,    94,    95,    96,    97,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,   127,    -1,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,    -1,    -1,    -1,   143,   144,   145,   146,     0,   148,
     149,   150,   151,    -1,   153,    -1,     8,     9,    10,    -1,
      -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,
      -1,    -1,    -1,    -1,    -1,   127,    -1,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,    -1,   144,   145,   146,     0,   148,   149,   150,   151,
      -1,   153,    -1,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      94,    95,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,    94,
      95,    96,    97,   127,    99,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,   153,
      -1,   126,   127,    -1,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,   144,
     145,   146,     0,    -1,   149,    -1,   151,    -1,   153,    -1,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,   126,   127,
      -1,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,     0,
      -1,   149,    -1,   151,    -1,   153,    -1,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
      -1,    -1,    -1,    -1,    -1,   126,   127,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,     0,    -1,   149,    -1,
     151,    -1,   153,    -1,     8,     9,    10,    -1,    -1,    13,
      14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,    43,
      44,    -1,    49,    50,    51,    52,    -1,    -1,    -1,    56,
      -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    96,    97,   101,    -1,    -1,   104,   105,    -1,
     107,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,    -1,    -1,    -1,   148,   149,   153,   151,     1,   153,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,
      -1,   104,   105,    -1,   107,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,     1,
     153,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    -1,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,
     102,    -1,   104,   105,    -1,   107,    -1,    -1,   110,   111,
     112,   113,   114,   115,   116,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,
       1,   153,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
     101,   102,    -1,   104,   105,    -1,   107,    -1,    -1,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     151,     1,   153,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    -1,    -1,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,   101,   102,    -1,   104,   105,    -1,   107,    -1,    -1,
     110,   111,   112,   113,   114,   115,   116,   117,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   151,     1,   153,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    -1,    -1,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,   101,   102,    -1,   104,   105,    -1,   107,    -1,
      -1,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
     139,   140,   141,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,   151,    -1,   153,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,
      -1,   104,   105,    -1,   107,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    11,    12,   139,   140,   141,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,   151,    -1,
     153,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,   101,   102,    -1,   104,   105,    -1,
     107,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   149,    -1,   151,     1,   153,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,   101,   102,    -1,   104,   105,
      -1,   107,    -1,    -1,   110,   111,   112,   113,   114,   115,
     116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   149,    -1,   151,     1,   153,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,   101,   102,    -1,   104,
     105,    -1,   107,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,    -1,    -1,   144,
      -1,    -1,    -1,    -1,    -1,    -1,   151,     1,   153,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    11,    12,    -1,
      -1,    -1,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,    -1,
     104,   105,    -1,   107,    -1,    -1,   110,   111,   112,   113,
     114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,    -1,    -1,
     144,    -1,    -1,    -1,    -1,    -1,    -1,   151,     1,   153,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      -1,    -1,    -1,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,
      -1,   104,   105,    -1,   107,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    11,    12,   139,   140,   141,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,   151,    -1,
     153,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,   101,   102,    -1,   104,   105,    -1,
     107,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,   139,   140,   141,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,   151,    -1,   153,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
     101,   102,    -1,   104,   105,    -1,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   139,   140,
     141,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,   153,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,   101,   102,    -1,   104,
     105,    -1,    -1,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,   139,   140,   141,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,   151,    -1,   153,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,   101,   102,    -1,   104,   105,    -1,    -1,    -1,
      -1,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    11,    12,
     139,   140,   141,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,   153,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,
      -1,   104,   105,    -1,   107,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    11,    12,   139,   140,   141,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,   151,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,   101,   102,    -1,   104,   105,    -1,
     107,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   151,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    -1,    86,    87,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,   140,   141,    -1,    -1,    -1,    -1,    -1,   147,
     148,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,    -1,   140,   141,
      -1,    -1,    -1,    -1,    -1,   147,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    -1,    86,
      87,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,   108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    -1,   140,   141,    -1,    -1,    -1,    -1,    -1,
     147,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,    -1,   140,   141,
      -1,    -1,    -1,    -1,    -1,   147,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    -1,    86,
      87,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    -1,   140,   141,     3,     4,     5,    -1,     7,
     147,    -1,    -1,    11,    12,    -1,    -1,    -1,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,   101,   102,    -1,   104,   105,    -1,    -1,
      -1,    -1,   110,   111,   112,   113,   114,   115,   116,   117,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,   139,    11,    12,    -1,    -1,    -1,    16,   146,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,   101,   102,    -1,   104,   105,    -1,    -1,    -1,
      -1,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
     139,    11,    12,    -1,    -1,    -1,    16,   146,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,   101,   102,    -1,   104,   105,    -1,   107,    -1,    -1,
     110,   111,   112,   113,   114,   115,   116,   117,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,   139,
     140,   141,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,    -1,
     104,   105,    -1,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    11,    12,   139,   140,   141,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,   101,   102,    -1,   104,   105,    -1,   107,
      -1,    -1,   110,   111,   112,   113,   114,   115,   116,   117,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,   139,   140,   141,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,
     102,    -1,   104,   105,    -1,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,   139,   140,   141,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,   101,   102,    -1,   104,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,   139,   140,   141,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,   101,   102,    -1,   104,   105,    -1,   107,   108,    -1,
     110,   111,   112,   113,   114,   115,   116,   117,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,   139,
     140,   141,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,    -1,
     104,   105,    -1,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    11,    12,   139,   140,   141,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,   101,   102,    -1,   104,   105,    -1,   107,
     108,    -1,   110,   111,   112,   113,   114,   115,   116,   117,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,   139,   140,   141,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,
     102,    -1,   104,   105,    -1,    -1,   108,    -1,   110,   111,
     112,   113,   114,   115,   116,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,   139,   140,   141,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,   101,   102,    -1,   104,   105,
      -1,   107,    -1,    -1,   110,   111,   112,   113,   114,   115,
     116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,   139,   140,   141,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,   101,   102,    -1,   104,   105,    -1,   107,    -1,    -1,
     110,   111,   112,   113,   114,   115,   116,   117,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,   139,
     140,   141,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,    -1,
     104,   105,    -1,   107,    -1,    -1,   110,   111,   112,   113,
     114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    11,    12,   139,   140,   141,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,   101,   102,    -1,   104,   105,    -1,   107,
      -1,    -1,   110,   111,   112,   113,   114,   115,   116,   117,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,   139,   140,   141,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,
     102,    -1,   104,   105,    -1,   107,    -1,    -1,   110,   111,
     112,   113,   114,   115,   116,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,   139,   140,   141,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,   101,   102,    -1,   104,   105,
      -1,    -1,    -1,    -1,   110,   111,   112,   113,   114,   115,
     116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,   139,   140,   141,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,   101,   102,    -1,   104,   105,    -1,    -1,    -1,    -1,
     110,   111,   112,   113,   114,   115,   116,   117,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,   139,
     140,   141,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,    -1,
     104,   105,    -1,    -1,    -1,    -1,   110,   111,   112,   113,
     114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    11,    12,   139,   140,   141,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,   101,   102,    -1,   104,   105,    -1,   107,
      -1,    -1,   110,   111,   112,   113,   114,   115,   116,   117,
     118,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      16,   139,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,   101,   102,    -1,   104,   105,
      -1,   107,    -1,    -1,   110,   111,   112,   113,   114,   115,
     116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,    -1,
      -1,    -1,    16,   139,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,    -1,
     104,   105,    -1,    -1,    -1,    -1,   110,   111,   112,   113,
     114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,    -1,    -1,    -1,    16,   139,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,
     102,    -1,   104,   105,    -1,    -1,    -1,    -1,   110,   111,
     112,   113,   114,   115,   116,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    16,   139,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,   101,   102,    -1,   104,   105,    -1,    -1,    -1,    -1,
     110,   111,   112,   113,   114,   115,   116,   117,   118,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    16,   139,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,   101,   102,    -1,   104,   105,    -1,    -1,
      -1,    -1,   110,   111,   112,   113,   114,   115,   116,   117,
     118,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      16,   139,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,   101,   102,    -1,   104,   105,
      33,    34,    35,    36,   110,   111,   112,   113,   114,   115,
     116,   117,   118,    -1,    -1,    -1,    49,    50,    51,    52,
      -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,    62,
      63,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,    -1,
      -1,   104,   105,    -1,   107,   108,    -1,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
      -1,    -1,    49,    50,    51,    52,   139,    -1,    -1,    56,
      -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    -1,
      -1,    -1,    56,    90,    91,    59,    60,    61,    62,    63,
      -1,    98,    -1,    -1,   101,    -1,    -1,   104,   105,    -1,
     107,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    98,   132,    -1,   101,    -1,    -1,
     104,   105,   139,   107,    -1,    -1,   110,   111,   112,   113,
     114,   115,   116,   117,   118,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,
      -1,    49,    50,    51,    52,   139,    -1,    -1,    56,    -1,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,   101,    -1,    -1,   104,   105,    -1,    -1,
      -1,    -1,   110,   111,   112,   113,   114,   115,   116,   117,
     118,    52,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,   139,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,    52,    53,    -1,    -1,    56,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,    52,    53,    -1,    -1,    56,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,    52,    53,    -1,    -1,    56,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,    52,    53,    -1,    -1,    56,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,    52,    53,    -1,    -1,    56,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,    52,    53,    -1,    -1,    56,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,    52,    53,    -1,    -1,    56,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,    52,    53,    -1,    -1,    56,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,    52,    53,    -1,    -1,    56,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,    52,    53,    -1,    -1,    56,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,    52,    53,    -1,    -1,    56,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,    52,    53,    -1,    -1,    56,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,    52,    53,    -1,    -1,    56,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,    52,    53,    -1,    -1,    56,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,    52,    53,    -1,    -1,    56,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,    -1,    -1,    -1,    -1,    -1,   147
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   155,   156,     0,     1,     3,     4,     5,     6,     7,
      11,    12,    16,    18,    19,    20,    21,    22,    23,    24,
      30,    31,    32,    33,    34,    35,    36,    39,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    59,    60,    61,    62,    63,    64,    65,    75,    76,
      90,    91,    98,   101,   102,   104,   105,   107,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   139,   140,   141,
     157,   158,   159,   167,   169,   171,   179,   180,   182,   183,
     184,   186,   187,   188,   190,   191,   200,   203,   218,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     252,   279,   280,   325,   326,   327,   328,   329,   330,   331,
     334,   336,   337,   351,   352,   354,   355,   356,   357,   358,
     359,   360,   361,   397,   410,   159,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    56,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    86,
      87,    92,    93,    94,    95,   107,   108,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   140,   141,   147,
     194,   195,   196,   198,   199,   351,    39,    58,    98,   101,
     107,   108,   109,   112,   140,   183,   191,   200,   204,   210,
     213,   215,   233,   357,   358,   360,   361,   395,   396,   210,
     148,   211,   212,   148,   207,   211,   148,   153,   404,    54,
     195,   404,   143,   160,   143,    21,    22,    31,    32,   182,
     200,   233,   252,   200,   200,   200,    56,     1,    47,   101,
     163,   164,   165,   167,   185,   186,   410,   167,   220,   205,
     215,   395,   410,   204,   394,   395,   410,    46,    98,   139,
     146,   190,   218,   233,   357,   358,   361,   223,    54,    55,
      57,   194,   340,   353,   340,   341,   342,   152,   152,   152,
     152,   356,   179,   200,   200,   151,   153,   403,   408,   409,
      40,    41,    42,    43,    44,    37,    38,    26,   143,   207,
     211,   244,   281,    28,   245,   278,   126,   146,   101,   107,
     187,   126,    25,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    94,    95,   127,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   202,
     202,    68,    96,    97,   145,   401,   219,   171,   175,   175,
     176,   177,   176,   175,   403,   409,    98,   184,   191,   233,
     257,   357,   358,   361,    52,    56,    94,    98,   192,   193,
     233,   357,   358,   361,   193,    33,    34,    35,    36,    49,
      50,    51,    52,    56,   148,   194,   359,   392,   210,    97,
     401,   402,   281,   328,    99,    99,   146,   204,    56,   204,
     204,   204,   340,   126,   100,   146,   214,   410,    97,   145,
     401,    99,    99,   146,   214,   210,   404,   405,   210,    91,
     209,   210,   215,   369,   395,   410,   171,   405,   171,    54,
      64,    65,   168,   148,   201,   157,   163,    97,   401,    99,
     167,   166,   185,   149,   403,   409,   405,   221,   405,   150,
     146,   153,   407,   146,   407,   144,   407,   404,    56,   356,
     187,   189,   146,    97,   145,   401,   270,   271,    66,   119,
     121,   122,   343,   119,   119,   343,    67,   343,   332,   338,
     335,   339,    77,   151,   159,   175,   175,   175,   175,   167,
     171,   171,   282,   283,   106,   181,   286,   287,   286,   107,
     179,   204,   215,   216,   217,   185,   146,   190,   146,   169,
     170,   179,   191,   200,   204,   206,   217,   233,   361,   172,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,    52,    53,    56,   198,   207,   398,
     399,   209,    52,    53,    56,   198,   207,   398,   161,   163,
      13,   253,   408,   253,   163,   175,   163,   403,   225,    56,
      97,   145,   401,    25,   171,    52,    56,   192,   130,   362,
      97,   145,   401,   228,   393,   229,    68,    97,   400,    52,
      56,   398,   170,   200,   206,   170,   206,   197,   124,   204,
     107,   204,   213,   395,    52,    56,   209,    52,    56,   396,
     405,   149,   405,   146,   405,   146,   405,   195,   222,   200,
     144,   144,   398,   398,   206,   160,   405,   165,   405,   395,
     146,   189,    52,    56,   209,    52,    56,   272,   345,   344,
     119,   333,   343,    66,   119,   119,   333,    66,   119,   200,
     144,   284,   282,    10,   251,   288,   251,   204,   146,    44,
     405,   189,   146,    44,   126,    44,    97,   145,   401,   173,
     404,    99,    99,   207,   211,   404,   406,    99,    99,   207,
     208,   211,   410,   251,     8,   246,   321,   410,   163,    13,
     163,   251,    27,   254,   408,   251,    25,   224,   293,    17,
     248,   291,    52,    56,   209,    52,    56,   176,   227,   363,
     226,    52,    56,   192,   209,   161,   171,   230,   231,   208,
     211,   195,   204,   204,   214,    99,    99,   406,    99,    99,
     395,   171,   407,   187,   406,   273,   346,    54,    55,    57,
     350,   361,   152,   343,   152,   152,   152,   285,   144,   289,
     107,   204,   167,   189,   167,   200,    52,    56,   209,    52,
      56,    52,    56,    90,    91,    98,   101,   104,   105,   110,
     132,   301,   302,   303,   304,   315,   316,   318,   319,   320,
     325,   326,   329,   330,   331,   334,   336,   337,   358,   128,
     170,   206,   170,   206,   181,   150,    99,   170,   206,   170,
     206,   181,   204,   217,   322,   410,     9,    15,   247,   249,
     324,   410,    14,   249,   250,   255,   256,   410,   256,   178,
     294,   291,   251,   107,   204,   290,   251,   406,   163,   408,
     175,   161,   406,   251,   405,   148,   364,   365,   194,   281,
     278,    99,   146,   405,   274,   347,   131,   265,   266,   410,
     265,   204,   406,   316,   316,    56,   192,   301,   107,   301,
     305,   306,   307,   309,   406,    58,    77,   108,   112,   144,
     310,   311,   312,   313,   314,   380,   317,    52,   100,   174,
     131,    88,    89,    97,   145,   148,   200,   170,   206,   100,
     323,   410,   163,   162,   163,   175,   251,   251,   295,   251,
     204,   146,   253,   251,   161,   408,   251,    52,    54,    55,
      56,    57,    58,    91,   101,   107,   109,   133,   136,   366,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   379,
     380,   381,   382,   383,   386,   387,   388,   389,   390,   161,
     368,   232,   148,   276,   368,   348,   262,   264,   267,   372,
     374,   375,   377,   378,   381,   382,   384,   385,   388,   390,
     404,   163,   161,   405,    52,   146,   406,   107,   301,   309,
     146,   301,   340,   144,   146,    34,    52,   270,   318,   304,
     316,   316,   192,   112,   305,   310,   406,   305,   310,   405,
      98,   191,   233,   357,   358,   361,   253,   163,   253,   299,
     300,   301,   307,   310,   107,   204,   163,   251,   101,   107,
     258,   259,   260,   261,   371,   405,   405,   126,   146,   367,
     204,   146,   391,   410,    34,    52,   146,   391,   391,   146,
     367,    52,   146,   367,    52,   251,   408,   364,   368,   275,
     349,   267,   131,   126,   146,   263,    98,   233,   146,   391,
     391,   391,   146,   263,   146,   263,   151,   146,   308,   309,
      52,   146,   146,   124,   312,   313,   314,   340,   406,   406,
     405,   405,    56,    97,   145,   401,   163,   324,   163,   253,
      40,    41,   146,   204,   256,   291,   292,   260,   371,   146,
     405,   146,   204,   366,   373,   386,   388,   376,   380,   382,
     390,   374,   383,   388,   372,   374,   161,   267,    29,   123,
     277,   163,   131,   233,   262,   385,   388,    56,    97,   377,
     382,   374,   384,   388,   374,    52,   268,   269,   370,   308,
     146,   146,   308,   301,    52,    56,   209,    52,    56,   321,
     255,   296,   175,   175,   305,   405,   258,   261,   259,   146,
     367,   146,   367,   391,   146,   367,   146,   367,   367,   251,
     149,   161,   163,   120,   146,   263,   146,   263,    52,    56,
     391,   146,   263,   146,   263,   263,   146,   404,   309,   308,
     406,   297,   146,   146,   374,   388,   374,   374,   251,   144,
     374,   388,   374,   374,   269,   163,   259,   367,   146,   367,
     367,   367,   263,   146,   263,   263,   263,   256,   293,   298,
     374,   374,   367,   263
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (&yylloc, p, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc, p)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (p, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location, p); \
      YYFPRINTF (p, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct parser_params *p)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, p)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    struct parser_params *p;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (p);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct parser_params *p)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, p)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    struct parser_params *p;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (p, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (p, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (p, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, p);
  YYFPRINTF (p, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
ruby_parser_yy_stack_print (yytype_int16 *bottom, yytype_int16 *top, struct parser_params *p)
#else
static void
ruby_parser_yy_stack_print (bottom, top, p)
    yytype_int16 *bottom;
    yytype_int16 *top;
    struct parser_params *p;
#endif
#define yy_stack_print(b, t) ruby_parser_yy_stack_print(b, t, p)
{
  YYFPRINTF (p, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (p, " %d", *bottom);
  YYFPRINTF (p, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, struct parser_params *p)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, p)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    struct parser_params *p;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (p, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (p, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , p);
      YYFPRINTF (p, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, p); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
#ifndef yydebug
int yydebug;
#endif
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (struct parser_params *p, char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, struct parser_params *p)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, p)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    struct parser_params *p;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (p);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (struct parser_params *p);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (struct parser_params *p)
#else
int
yyparse (p)
    struct parser_params *p;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((p, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif


  /* User initialization code.  */
#line 971 "ripper.y"
{
    RUBY_SET_YYLLOC_OF_NONE(yylloc);
}
/* Line 1078 of yacc.c.  */
#line 6215 "ripper.c"
  yylsp[0] = yylloc;
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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((p, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((p, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((p, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((p, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 1173 "ripper.y"
    {
			SET_LEX_STATE(EXPR_BEG);
			local_push(p, ifndef_ripper(1)+0);
		    ;}
    break;

  case 3:
#line 1178 "ripper.y"
    {
#if 0
			if ((yyvsp[(2) - (2)].val) && !compile_for_eval) {
			    NODE *node = (yyvsp[(2) - (2)].val);
			    /* last expression should not be void */
			    if (nd_type(node) == NODE_BLOCK) {
				while (node->nd_next) {
				    node = node->nd_next;
				}
				node = node->nd_head;
			    }
			    node = remove_begin(node);
			    void_expr(p, node);
			}
			p->eval_tree = NEW_SCOPE(0, block_append(p, p->eval_tree, (yyvsp[(2) - (2)].val)), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(program,v1);p->result=v2;}
			local_pop(p);
		    ;}
    break;

  case 4:
#line 1200 "ripper.y"
    {
			(yyval.val) = void_stmts(p, (yyvsp[(1) - (2)].val));
		    ;}
    break;

  case 5:
#line 1206 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=dispatch0(stmts_new);v2=dispatch0(void_stmt);v3=v1;v4=v2;v5=dispatch2(stmts_add,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 6:
#line 1213 "ripper.y"
    {
#if 0
			(yyval.val) = newline_node((yyvsp[(1) - (1)].val));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(stmts_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(stmts_add,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 7:
#line 1220 "ripper.y"
    {
#if 0
			(yyval.val) = block_append(p, (yyvsp[(1) - (3)].val), newline_node((yyvsp[(3) - (3)].val)));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(stmts_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 8:
#line 1227 "ripper.y"
    {
			(yyval.val) = remove_begin((yyvsp[(2) - (2)].val));
		    ;}
    break;

  case 10:
#line 1234 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 11:
#line 1240 "ripper.y"
    {
#if 0
			p->eval_tree_begin = block_append(p, p->eval_tree_begin,
							  NEW_BEGIN((yyvsp[(2) - (3)].val), &(yyloc)));
			(yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(BEGIN,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 12:
#line 1252 "ripper.y"
    {if (!(yyvsp[(2) - (3)].val)) {yyerror1(&(yylsp[(3) - (3)]), "else without rescue is useless");};}
    break;

  case 13:
#line 1255 "ripper.y"
    {
#if 0
			(yyval.val) = new_bodystmt(p, (yyvsp[(1) - (6)].val), (yyvsp[(2) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=escape_Qundef((yyvsp[(1) - (6)].val));v2=escape_Qundef((yyvsp[(2) - (6)].val));v3=escape_Qundef((yyvsp[(5) - (6)].val));v4=escape_Qundef((yyvsp[(6) - (6)].val));v5=dispatch4(bodystmt,v1,v2,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 14:
#line 1264 "ripper.y"
    {
#if 0
			(yyval.val) = new_bodystmt(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), 0, (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=escape_Qundef((yyvsp[(1) - (3)].val));v2=escape_Qundef((yyvsp[(2) - (3)].val));v3=Qnil;v4=escape_Qundef((yyvsp[(3) - (3)].val));v5=dispatch4(bodystmt,v1,v2,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 15:
#line 1273 "ripper.y"
    {
			(yyval.val) = void_stmts(p, (yyvsp[(1) - (2)].val));
		    ;}
    break;

  case 16:
#line 1279 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=dispatch0(stmts_new);v2=dispatch0(void_stmt);v3=v1;v4=v2;v5=dispatch2(stmts_add,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 17:
#line 1286 "ripper.y"
    {
#if 0
			(yyval.val) = newline_node((yyvsp[(1) - (1)].val));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(stmts_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(stmts_add,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 18:
#line 1293 "ripper.y"
    {
#if 0
			(yyval.val) = block_append(p, (yyvsp[(1) - (3)].val), newline_node((yyvsp[(3) - (3)].val)));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(stmts_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 19:
#line 1300 "ripper.y"
    {
			(yyval.val) = remove_begin((yyvsp[(2) - (2)].val));
		    ;}
    break;

  case 20:
#line 1306 "ripper.y"
    {
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 21:
#line 1310 "ripper.y"
    {
			yyerror1(&(yylsp[(1) - (1)]), "BEGIN is permitted only at toplevel");
		    ;}
    break;

  case 22:
#line 1314 "ripper.y"
    {
			(yyval.val) = (yyvsp[(3) - (3)].val);
		    ;}
    break;

  case 23:
#line 1319 "ripper.y"
    {SET_LEX_STATE(EXPR_FNAME|EXPR_FITEM);;}
    break;

  case 24:
#line 1320 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_ALIAS((yyvsp[(2) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(2) - (4)].val);v2=(yyvsp[(4) - (4)].val);v3=dispatch2(alias,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 25:
#line 1327 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_VALIAS((yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(2) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(var_alias,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 26:
#line 1334 "ripper.y"
    {
#if 0
			char buf[2];
			buf[0] = '$';
			buf[1] = (char)(yyvsp[(3) - (3)].val)->nd_nth;
			(yyval.val) = NEW_VALIAS((yyvsp[(2) - (3)].val), rb_intern2(buf, 2), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(2) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(var_alias,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 27:
#line 1344 "ripper.y"
    {
#if 0
			yyerror1(&(yylsp[(3) - (3)]), "can't make alias for the number variables");
			(yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=(yyvsp[(2) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(var_alias,v1,v2);v4=v3;v5=dispatch1(alias_error,v4);(yyval.val)=v5;}ripper_error(p);
		    ;}
    break;

  case 28:
#line 1352 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (2)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(undef,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 29:
#line 1359 "ripper.y"
    {
#if 0
			(yyval.val) = new_if(p, (yyvsp[(3) - (3)].val), remove_begin((yyvsp[(1) - (3)].val)), 0, &(yyloc));
			fixpos((yyval.val), (yyvsp[(3) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(3) - (3)].val);v2=(yyvsp[(1) - (3)].val);v3=dispatch2(if_mod,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 30:
#line 1367 "ripper.y"
    {
#if 0
			(yyval.val) = new_unless(p, (yyvsp[(3) - (3)].val), remove_begin((yyvsp[(1) - (3)].val)), 0, &(yyloc));
			fixpos((yyval.val), (yyvsp[(3) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(3) - (3)].val);v2=(yyvsp[(1) - (3)].val);v3=dispatch2(unless_mod,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 31:
#line 1375 "ripper.y"
    {
#if 0
			if ((yyvsp[(1) - (3)].val) && nd_type((yyvsp[(1) - (3)].val)) == NODE_BEGIN) {
			    (yyval.val) = NEW_WHILE(cond(p, (yyvsp[(3) - (3)].val), &(yylsp[(3) - (3)])), (yyvsp[(1) - (3)].val)->nd_body, 0, &(yyloc));
			}
			else {
			    (yyval.val) = NEW_WHILE(cond(p, (yyvsp[(3) - (3)].val), &(yylsp[(3) - (3)])), (yyvsp[(1) - (3)].val), 1, &(yyloc));
			}
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(3) - (3)].val);v2=(yyvsp[(1) - (3)].val);v3=dispatch2(while_mod,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 32:
#line 1387 "ripper.y"
    {
#if 0
			if ((yyvsp[(1) - (3)].val) && nd_type((yyvsp[(1) - (3)].val)) == NODE_BEGIN) {
			    (yyval.val) = NEW_UNTIL(cond(p, (yyvsp[(3) - (3)].val), &(yylsp[(3) - (3)])), (yyvsp[(1) - (3)].val)->nd_body, 0, &(yyloc));
			}
			else {
			    (yyval.val) = NEW_UNTIL(cond(p, (yyvsp[(3) - (3)].val), &(yylsp[(3) - (3)])), (yyvsp[(1) - (3)].val), 1, &(yyloc));
			}
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(3) - (3)].val);v2=(yyvsp[(1) - (3)].val);v3=dispatch2(until_mod,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 33:
#line 1399 "ripper.y"
    {
#if 0
			NODE *resq;
			YYLTYPE loc = code_loc_gen(&(yylsp[(2) - (3)]), &(yylsp[(3) - (3)]));
			resq = NEW_RESBODY(0, remove_begin((yyvsp[(3) - (3)].val)), 0, &loc);
			(yyval.val) = NEW_RESCUE(remove_begin((yyvsp[(1) - (3)].val)), resq, 0, &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(rescue_mod,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 34:
#line 1409 "ripper.y"
    {
			if (p->in_def) {
			    rb_warn0("END in method; use at_exit");
			}
#if 0
			{
			    NODE *scope = NEW_NODE(
				NODE_SCOPE, 0 /* tbl */, (yyvsp[(3) - (4)].val) /* body */, 0 /* args */, &(yyloc));
			    (yyval.val) = NEW_POSTEXE(scope, &(yyloc));
			}
#endif
			{VALUE v1,v2;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(END,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 36:
#line 1424 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(3) - (3)].val));
			(yyval.val) = node_assign(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(massign,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 37:
#line 1432 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(3) - (3)].val));
			(yyval.val) = node_assign(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(assign,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 38:
#line 1440 "ripper.y"
    {
#if 0
                        YYLTYPE loc = code_loc_gen(&(yylsp[(4) - (5)]), &(yylsp[(5) - (5)]));
                        value_expr((yyvsp[(3) - (5)].val));
			(yyval.val) = node_assign(p, (yyvsp[(1) - (5)].val), NEW_RESCUE((yyvsp[(3) - (5)].val), NEW_RESBODY(0, remove_begin((yyvsp[(5) - (5)].val)), 0, &loc), 0, &(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=(yyvsp[(3) - (5)].val);v2=(yyvsp[(5) - (5)].val);v3=dispatch2(rescue_mod,v1,v2);v4=(yyvsp[(1) - (5)].val);v5=v3;v6=dispatch2(massign,v4,v5);(yyval.val)=v6;}
                    ;}
    break;

  case 39:
#line 1449 "ripper.y"
    {
#if 0
			(yyval.val) = node_assign(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(massign,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 41:
#line 1459 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(3) - (3)].val));
			(yyval.val) = node_assign(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(assign,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 42:
#line 1467 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(3) - (3)].val));
			(yyval.val) = new_op_assign(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(opassign,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 43:
#line 1475 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(6) - (6)].val));
			(yyval.val) = new_ary_op_assign(p, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val), &(yylsp[(3) - (6)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (6)].val);v2=escape_Qundef((yyvsp[(3) - (6)].val));v3=dispatch2(aref_field,v1,v2);v4=v3;v5=(yyvsp[(5) - (6)].val);v6=(yyvsp[(6) - (6)].val);v7=dispatch3(opassign,v4,v5,v6);(yyval.val)=v7;}

		    ;}
    break;

  case 44:
#line 1484 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(5) - (5)].val));
			(yyval.val) = new_attr_op_assign(p, (yyvsp[(1) - (5)].val), (yyvsp[(2) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(2) - (5)].val);v3=(yyvsp[(3) - (5)].val);v4=dispatch3(field,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (5)].val);v7=(yyvsp[(5) - (5)].val);v8=dispatch3(opassign,v5,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 45:
#line 1492 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(5) - (5)].val));
			(yyval.val) = new_attr_op_assign(p, (yyvsp[(1) - (5)].val), (yyvsp[(2) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(2) - (5)].val);v3=(yyvsp[(3) - (5)].val);v4=dispatch3(field,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (5)].val);v7=(yyvsp[(5) - (5)].val);v8=dispatch3(opassign,v5,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 46:
#line 1500 "ripper.y"
    {
#if 0
			YYLTYPE loc = code_loc_gen(&(yylsp[(1) - (5)]), &(yylsp[(3) - (5)]));
			(yyval.val) = new_const_op_assign(p, NEW_COLON2((yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), &loc), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(3) - (5)].val);v3=dispatch2(const_path_field,v1,v2);v4=v3;v5=(yyvsp[(4) - (5)].val);v6=(yyvsp[(5) - (5)].val);v7=dispatch3(opassign,v4,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 47:
#line 1508 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(5) - (5)].val));
			(yyval.val) = new_attr_op_assign(p, (yyvsp[(1) - (5)].val), ID2VAL(idCOLON2), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=ID2VAL(idCOLON2);v3=(yyvsp[(3) - (5)].val);v4=dispatch3(field,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (5)].val);v7=(yyvsp[(5) - (5)].val);v8=dispatch3(opassign,v5,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 48:
#line 1516 "ripper.y"
    {
#if 0
			rb_backref_error(p, (yyvsp[(1) - (3)].val));
			(yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=var_field(p, (yyvsp[(1) - (3)].val));v2=(yyvsp[(3) - (3)].val);v3=dispatch2(assign,v1,v2);v4=v3;v5=dispatch1(assign_error,v4);(yyval.val)=v5;}ripper_error(p);
		    ;}
    break;

  case 49:
#line 1526 "ripper.y"
    {
			value_expr((yyvsp[(1) - (1)].val));
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 50:
#line 1531 "ripper.y"
    {
#if 0
			YYLTYPE loc = code_loc_gen(&(yylsp[(2) - (3)]), &(yylsp[(3) - (3)]));
			value_expr((yyvsp[(1) - (3)].val));
			(yyval.val) = NEW_RESCUE((yyvsp[(1) - (3)].val), NEW_RESBODY(0, remove_begin((yyvsp[(3) - (3)].val)), 0, &loc), 0, &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(rescue_mod,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 53:
#line 1544 "ripper.y"
    {
			(yyval.val) = logop(p, idAND, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 54:
#line 1548 "ripper.y"
    {
			(yyval.val) = logop(p, idOR, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 55:
#line 1552 "ripper.y"
    {
			(yyval.val) = call_uni_op(p, method_cond(p, (yyvsp[(3) - (3)].val), &(yylsp[(3) - (3)])), METHOD_NOT, &(yylsp[(1) - (3)]), &(yyloc));
		    ;}
    break;

  case 56:
#line 1556 "ripper.y"
    {
			(yyval.val) = call_uni_op(p, method_cond(p, (yyvsp[(2) - (2)].val), &(yylsp[(2) - (2)])), '!', &(yylsp[(1) - (2)]), &(yyloc));
		    ;}
    break;

  case 57:
#line 1560 "ripper.y"
    {
			value_expr((yyvsp[(1) - (2)].val));
			SET_LEX_STATE(EXPR_BEG|EXPR_LABEL);
			p->command_start = FALSE;
			(yyval.num) = p->in_kwarg;
			p->in_kwarg = 1;
		    ;}
    break;

  case 58:
#line 1567 "ripper.y"
    {
			(yyval.tbl) = p->pvtbl;
			p->pvtbl = st_init_numtable();
		    ;}
    break;

  case 59:
#line 1572 "ripper.y"
    {
			st_free_table(p->pvtbl);
			p->pvtbl = (yyvsp[(4) - (5)].tbl);
		    ;}
    break;

  case 60:
#line 1576 "ripper.y"
    {
			p->in_kwarg = !!(yyvsp[(3) - (6)].num);
#if 0
			(yyval.val) = NEW_CASE3((yyvsp[(1) - (6)].val), NEW_IN((yyvsp[(5) - (6)].val), NEW_TRUE(&(yylsp[(5) - (6)])), NEW_FALSE(&(yylsp[(5) - (6)])), &(yylsp[(5) - (6)])), &(yyloc));
			rb_warn0L(nd_line((yyval.val)), "Pattern matching is experimental, and the behavior may change in future versions of Ruby!");
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(5) - (6)].val);v2=Qnil;v3=Qnil;v4=dispatch3(in,v1,v2,v3);v5=(yyvsp[(1) - (6)].val);v6=v4;v7=dispatch2(case,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 62:
#line 1588 "ripper.y"
    {
			value_expr((yyvsp[(1) - (1)].val));
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 63:
#line 1594 "ripper.y"
    {COND_PUSH(1);;}
    break;

  case 64:
#line 1594 "ripper.y"
    {COND_POP();;}
    break;

  case 65:
#line 1595 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (4)].val);
		    ;}
    break;

  case 69:
#line 1606 "ripper.y"
    {
#if 0
			(yyval.val) = new_qcall(p, (yyvsp[(2) - (4)].val), (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yylsp[(3) - (4)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (4)].val);v2=(yyvsp[(2) - (4)].val);v3=(yyvsp[(3) - (4)].val);v4=dispatch3(call,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (4)].val);v7=dispatch2(method_add_arg,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 70:
#line 1615 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (3)].val);
#if 0
			(yyval.val)->nd_body->nd_loc = code_loc_gen(&(yylsp[(1) - (3)]), &(yylsp[(3) - (3)]));
			nd_set_line((yyval.val), (yylsp[(1) - (3)]).end_pos.lineno);
#endif
		    ;}
    break;

  case 71:
#line 1625 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_FCALL((yyvsp[(1) - (1)].val), 0, &(yyloc));
			nd_set_line((yyval.val), p->tokline);
#endif
			(yyval.val)=(yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 72:
#line 1635 "ripper.y"
    {
#if 0
			(yyvsp[(1) - (2)].val)->nd_args = (yyvsp[(2) - (2)].val);
			nd_set_last_loc((yyvsp[(1) - (2)].val), (yylsp[(2) - (2)]).end_pos);
			(yyval.val) = (yyvsp[(1) - (2)].val);
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(command,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 73:
#line 1644 "ripper.y"
    {
#if 0
			block_dup_check(p, (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val));
			(yyvsp[(1) - (3)].val)->nd_args = (yyvsp[(2) - (3)].val);
			(yyval.val) = method_add_block(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(1) - (3)].val));
			nd_set_last_loc((yyvsp[(1) - (3)].val), (yylsp[(2) - (3)]).end_pos);
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=dispatch2(command,v1,v2);v4=v3;v5=(yyvsp[(3) - (3)].val);v6=dispatch2(method_add_block,v4,v5);(yyval.val)=v6;}
		    ;}
    break;

  case 74:
#line 1655 "ripper.y"
    {
#if 0
			(yyval.val) = new_command_qcall(p, (yyvsp[(2) - (4)].val), (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), Qnull, &(yylsp[(3) - (4)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=(yyvsp[(1) - (4)].val);v2=(yyvsp[(2) - (4)].val);v3=(yyvsp[(3) - (4)].val);v4=(yyvsp[(4) - (4)].val);v5=dispatch4(command_call,v1,v2,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 75:
#line 1662 "ripper.y"
    {
#if 0
			(yyval.val) = new_command_qcall(p, (yyvsp[(2) - (5)].val), (yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yylsp[(3) - (5)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(2) - (5)].val);v3=(yyvsp[(3) - (5)].val);v4=(yyvsp[(4) - (5)].val);v5=dispatch4(command_call,v1,v2,v3,v4);v6=v5;v7=(yyvsp[(5) - (5)].val);v8=dispatch2(method_add_block,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 76:
#line 1669 "ripper.y"
    {
#if 0
			(yyval.val) = new_command_qcall(p, ID2VAL(idCOLON2), (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), Qnull, &(yylsp[(3) - (4)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=(yyvsp[(1) - (4)].val);v2=ID2VAL(idCOLON2);v3=(yyvsp[(3) - (4)].val);v4=(yyvsp[(4) - (4)].val);v5=dispatch4(command_call,v1,v2,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 77:
#line 1676 "ripper.y"
    {
#if 0
			(yyval.val) = new_command_qcall(p, ID2VAL(idCOLON2), (yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yylsp[(3) - (5)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=ID2VAL(idCOLON2);v3=(yyvsp[(3) - (5)].val);v4=(yyvsp[(4) - (5)].val);v5=dispatch4(command_call,v1,v2,v3,v4);v6=v5;v7=(yyvsp[(5) - (5)].val);v8=dispatch2(method_add_block,v6,v7);(yyval.val)=v8;}
		   ;}
    break;

  case 78:
#line 1683 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_SUPER((yyvsp[(2) - (2)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (2)].val));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(super,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 79:
#line 1691 "ripper.y"
    {
#if 0
			(yyval.val) = new_yield(p, (yyvsp[(2) - (2)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (2)].val));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(yield,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 80:
#line 1699 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_RETURN(ret_args(p, (yyvsp[(2) - (2)].val)), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(return,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 81:
#line 1706 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_BREAK(ret_args(p, (yyvsp[(2) - (2)].val)), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(break,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 82:
#line 1713 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_NEXT(ret_args(p, (yyvsp[(2) - (2)].val)), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(next,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 84:
#line 1723 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (3)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(mlhs_paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 86:
#line 1733 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(NEW_LIST((yyvsp[(2) - (3)].val), &(yyloc)), 0, &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(mlhs_paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 87:
#line 1742 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			(yyval.val)=(yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 88:
#line 1749 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(list_append(p, (yyvsp[(1) - (2)].val),(yyvsp[(2) - (2)].val)), 0, &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(mlhs_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 89:
#line 1756 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(mlhs_add_star,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 90:
#line 1763 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (5)].val), NEW_POSTARG((yyvsp[(3) - (5)].val),(yyvsp[(5) - (5)].val),&(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(3) - (5)].val);v3=dispatch2(mlhs_add_star,v1,v2);v4=v3;v5=(yyvsp[(5) - (5)].val);v6=dispatch2(mlhs_add_post,v4,v5);(yyval.val)=v6;}
		    ;}
    break;

  case 91:
#line 1770 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (2)].val), NODE_SPECIAL_NO_NAME_REST, &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=Qnil;v3=dispatch2(mlhs_add_star,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 92:
#line 1777 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (4)].val), NEW_POSTARG(NODE_SPECIAL_NO_NAME_REST, (yyvsp[(4) - (4)].val), &(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=(yyvsp[(1) - (4)].val);v2=Qnil;v3=dispatch2(mlhs_add_star,v1,v2);v4=v3;v5=(yyvsp[(4) - (4)].val);v6=dispatch2(mlhs_add_post,v4,v5);(yyval.val)=v6;}
		    ;}
    break;

  case 93:
#line 1784 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(mlhs_new);v2=v1;v3=(yyvsp[(2) - (2)].val);v4=dispatch2(mlhs_add_star,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 94:
#line 1791 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, NEW_POSTARG((yyvsp[(2) - (4)].val),(yyvsp[(4) - (4)].val),&(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=dispatch0(mlhs_new);v2=v1;v3=(yyvsp[(2) - (4)].val);v4=dispatch2(mlhs_add_star,v2,v3);v5=v4;v6=(yyvsp[(4) - (4)].val);v7=dispatch2(mlhs_add_post,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 95:
#line 1798 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, NODE_SPECIAL_NO_NAME_REST, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(mlhs_new);v2=v1;v3=Qnil;v4=dispatch2(mlhs_add_star,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 96:
#line 1805 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, NEW_POSTARG(NODE_SPECIAL_NO_NAME_REST, (yyvsp[(3) - (3)].val), &(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=dispatch0(mlhs_new);v2=v1;v3=Qnil;v4=dispatch2(mlhs_add_star,v2,v3);v5=v4;v6=(yyvsp[(3) - (3)].val);v7=dispatch2(mlhs_add_post,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 98:
#line 1815 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (3)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(mlhs_paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 99:
#line 1824 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST((yyvsp[(1) - (2)].val), &(yylsp[(1) - (2)]));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(mlhs_new);v2=v1;v3=(yyvsp[(1) - (2)].val);v4=dispatch2(mlhs_add,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 100:
#line 1831 "ripper.y"
    {
#if 0
			(yyval.val) = list_append(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=dispatch2(mlhs_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 101:
#line 1840 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(mlhs_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(mlhs_add,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 102:
#line 1847 "ripper.y"
    {
#if 0
			(yyval.val) = list_append(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(mlhs_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 103:
#line 1856 "ripper.y"
    {
#if 0
			(yyval.val) = assignable(p, (yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			(yyval.val)=assignable(p, var_field(p, (yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 104:
#line 1863 "ripper.y"
    {
#if 0
			(yyval.val) = assignable(p, (yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			(yyval.val)=assignable(p, var_field(p, (yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 105:
#line 1870 "ripper.y"
    {
#if 0
			(yyval.val) = aryset(p, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (4)].val);v2=escape_Qundef((yyvsp[(3) - (4)].val));v3=dispatch2(aref_field,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 106:
#line 1877 "ripper.y"
    {
			if ((yyvsp[(2) - (3)].val) == tANDDOT) {
			    yyerror1(&(yylsp[(2) - (3)]), "&. inside multiple assignment destination");
			}
#if 0
			(yyval.val) = attrset(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(field,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 107:
#line 1887 "ripper.y"
    {
#if 0
			(yyval.val) = attrset(p, (yyvsp[(1) - (3)].val), idCOLON2, (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(const_path_field,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 108:
#line 1894 "ripper.y"
    {
			if ((yyvsp[(2) - (3)].val) == tANDDOT) {
			    yyerror1(&(yylsp[(2) - (3)]), "&. inside multiple assignment destination");
			}
#if 0
			(yyval.val) = attrset(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(field,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 109:
#line 1904 "ripper.y"
    {
#if 0
			(yyval.val) = const_decl(p, NEW_COLON2((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(const_path_field,v1,v2);(yyval.val)=const_decl(p, v3);}
		    ;}
    break;

  case 110:
#line 1911 "ripper.y"
    {
#if 0
			(yyval.val) = const_decl(p, NEW_COLON3((yyvsp[(2) - (2)].val), &(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(top_const_field,v1);(yyval.val)=const_decl(p, v2);}
		    ;}
    break;

  case 111:
#line 1918 "ripper.y"
    {
#if 0
			rb_backref_error(p, (yyvsp[(1) - (1)].val));
			(yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2;v1=var_field(p, (yyvsp[(1) - (1)].val));v2=dispatch1(assign_error,v1);(yyval.val)=v2;}ripper_error(p);
		    ;}
    break;

  case 112:
#line 1928 "ripper.y"
    {
#if 0
			(yyval.val) = assignable(p, (yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			(yyval.val)=assignable(p, var_field(p, (yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 113:
#line 1935 "ripper.y"
    {
#if 0
			(yyval.val) = assignable(p, (yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			(yyval.val)=assignable(p, var_field(p, (yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 114:
#line 1942 "ripper.y"
    {
#if 0
			(yyval.val) = aryset(p, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (4)].val);v2=escape_Qundef((yyvsp[(3) - (4)].val));v3=dispatch2(aref_field,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 115:
#line 1949 "ripper.y"
    {
#if 0
			(yyval.val) = attrset(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(field,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 116:
#line 1956 "ripper.y"
    {
#if 0
			(yyval.val) = attrset(p, (yyvsp[(1) - (3)].val), idCOLON2, (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=ID2VAL(idCOLON2);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(field,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 117:
#line 1963 "ripper.y"
    {
#if 0
			(yyval.val) = attrset(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(field,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 118:
#line 1970 "ripper.y"
    {
#if 0
			(yyval.val) = const_decl(p, NEW_COLON2((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(const_path_field,v1,v2);(yyval.val)=const_decl(p, v3);}
		    ;}
    break;

  case 119:
#line 1977 "ripper.y"
    {
#if 0
			(yyval.val) = const_decl(p, NEW_COLON3((yyvsp[(2) - (2)].val), &(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(top_const_field,v1);(yyval.val)=const_decl(p, v2);}
		    ;}
    break;

  case 120:
#line 1984 "ripper.y"
    {
#if 0
			rb_backref_error(p, (yyvsp[(1) - (1)].val));
			(yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2;v1=var_field(p, (yyvsp[(1) - (1)].val));v2=dispatch1(assign_error,v1);(yyval.val)=v2;}ripper_error(p);
		    ;}
    break;

  case 121:
#line 1994 "ripper.y"
    {
#if 0
			yyerror1(&(yylsp[(1) - (1)]), "class/module name must be CONSTANT");
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(class_name_error,v1);(yyval.val)=v2;}ripper_error(p);
		    ;}
    break;

  case 123:
#line 2004 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_COLON3((yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(top_const_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 124:
#line 2011 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_COLON2(0, (yyval.val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(const_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 125:
#line 2018 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_COLON2((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(const_path_ref,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 129:
#line 2030 "ripper.y"
    {
			SET_LEX_STATE(EXPR_ENDFN);
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 130:
#line 2035 "ripper.y"
    {
			SET_LEX_STATE(EXPR_ENDFN);
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 131:
#line 2042 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIT(ID2SYM((yyvsp[(1) - (1)].val)), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(symbol_literal,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 133:
#line 2052 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_UNDEF((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			(yyval.val)=rb_ary_new3(1, get_value((yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 134:
#line 2058 "ripper.y"
    {SET_LEX_STATE(EXPR_FNAME|EXPR_FITEM);;}
    break;

  case 135:
#line 2059 "ripper.y"
    {
#if 0
			NODE *undef = NEW_UNDEF((yyvsp[(4) - (4)].val), &(yylsp[(4) - (4)]));
			(yyval.val) = block_append(p, (yyvsp[(1) - (4)].val), undef);
#endif
			(yyval.val)=rb_ary_push((yyvsp[(1) - (4)].val), get_value((yyvsp[(4) - (4)].val)));
		    ;}
    break;

  case 136:
#line 2068 "ripper.y"
    { ifndef_ripper((yyval.val) = '|'); ;}
    break;

  case 137:
#line 2069 "ripper.y"
    { ifndef_ripper((yyval.val) = '^'); ;}
    break;

  case 138:
#line 2070 "ripper.y"
    { ifndef_ripper((yyval.val) = '&'); ;}
    break;

  case 139:
#line 2071 "ripper.y"
    { ifndef_ripper((yyval.val) = tCMP); ;}
    break;

  case 140:
#line 2072 "ripper.y"
    { ifndef_ripper((yyval.val) = tEQ); ;}
    break;

  case 141:
#line 2073 "ripper.y"
    { ifndef_ripper((yyval.val) = tEQQ); ;}
    break;

  case 142:
#line 2074 "ripper.y"
    { ifndef_ripper((yyval.val) = tMATCH); ;}
    break;

  case 143:
#line 2075 "ripper.y"
    { ifndef_ripper((yyval.val) = tNMATCH); ;}
    break;

  case 144:
#line 2076 "ripper.y"
    { ifndef_ripper((yyval.val) = '>'); ;}
    break;

  case 145:
#line 2077 "ripper.y"
    { ifndef_ripper((yyval.val) = tGEQ); ;}
    break;

  case 146:
#line 2078 "ripper.y"
    { ifndef_ripper((yyval.val) = '<'); ;}
    break;

  case 147:
#line 2079 "ripper.y"
    { ifndef_ripper((yyval.val) = tLEQ); ;}
    break;

  case 148:
#line 2080 "ripper.y"
    { ifndef_ripper((yyval.val) = tNEQ); ;}
    break;

  case 149:
#line 2081 "ripper.y"
    { ifndef_ripper((yyval.val) = tLSHFT); ;}
    break;

  case 150:
#line 2082 "ripper.y"
    { ifndef_ripper((yyval.val) = tRSHFT); ;}
    break;

  case 151:
#line 2083 "ripper.y"
    { ifndef_ripper((yyval.val) = '+'); ;}
    break;

  case 152:
#line 2084 "ripper.y"
    { ifndef_ripper((yyval.val) = '-'); ;}
    break;

  case 153:
#line 2085 "ripper.y"
    { ifndef_ripper((yyval.val) = '*'); ;}
    break;

  case 154:
#line 2086 "ripper.y"
    { ifndef_ripper((yyval.val) = '*'); ;}
    break;

  case 155:
#line 2087 "ripper.y"
    { ifndef_ripper((yyval.val) = '/'); ;}
    break;

  case 156:
#line 2088 "ripper.y"
    { ifndef_ripper((yyval.val) = '%'); ;}
    break;

  case 157:
#line 2089 "ripper.y"
    { ifndef_ripper((yyval.val) = tPOW); ;}
    break;

  case 158:
#line 2090 "ripper.y"
    { ifndef_ripper((yyval.val) = tDSTAR); ;}
    break;

  case 159:
#line 2091 "ripper.y"
    { ifndef_ripper((yyval.val) = '!'); ;}
    break;

  case 160:
#line 2092 "ripper.y"
    { ifndef_ripper((yyval.val) = '~'); ;}
    break;

  case 161:
#line 2093 "ripper.y"
    { ifndef_ripper((yyval.val) = tUPLUS); ;}
    break;

  case 162:
#line 2094 "ripper.y"
    { ifndef_ripper((yyval.val) = tUMINUS); ;}
    break;

  case 163:
#line 2095 "ripper.y"
    { ifndef_ripper((yyval.val) = tAREF); ;}
    break;

  case 164:
#line 2096 "ripper.y"
    { ifndef_ripper((yyval.val) = tASET); ;}
    break;

  case 165:
#line 2097 "ripper.y"
    { ifndef_ripper((yyval.val) = '`'); ;}
    break;

  case 207:
#line 2115 "ripper.y"
    {
#if 0
			(yyval.val) = node_assign(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(assign,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 208:
#line 2122 "ripper.y"
    {
#if 0
			(yyval.val) = new_op_assign(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(opassign,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 209:
#line 2129 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(6) - (6)].val));
			(yyval.val) = new_ary_op_assign(p, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val), &(yylsp[(3) - (6)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (6)].val);v2=escape_Qundef((yyvsp[(3) - (6)].val));v3=dispatch2(aref_field,v1,v2);v4=v3;v5=(yyvsp[(5) - (6)].val);v6=(yyvsp[(6) - (6)].val);v7=dispatch3(opassign,v4,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 210:
#line 2137 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(5) - (5)].val));
			(yyval.val) = new_attr_op_assign(p, (yyvsp[(1) - (5)].val), (yyvsp[(2) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(2) - (5)].val);v3=(yyvsp[(3) - (5)].val);v4=dispatch3(field,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (5)].val);v7=(yyvsp[(5) - (5)].val);v8=dispatch3(opassign,v5,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 211:
#line 2145 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(5) - (5)].val));
			(yyval.val) = new_attr_op_assign(p, (yyvsp[(1) - (5)].val), (yyvsp[(2) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(2) - (5)].val);v3=(yyvsp[(3) - (5)].val);v4=dispatch3(field,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (5)].val);v7=(yyvsp[(5) - (5)].val);v8=dispatch3(opassign,v5,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 212:
#line 2153 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(5) - (5)].val));
			(yyval.val) = new_attr_op_assign(p, (yyvsp[(1) - (5)].val), ID2VAL(idCOLON2), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=ID2VAL(idCOLON2);v3=(yyvsp[(3) - (5)].val);v4=dispatch3(field,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (5)].val);v7=(yyvsp[(5) - (5)].val);v8=dispatch3(opassign,v5,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 213:
#line 2161 "ripper.y"
    {
#if 0
			YYLTYPE loc = code_loc_gen(&(yylsp[(1) - (5)]), &(yylsp[(3) - (5)]));
			(yyval.val) = new_const_op_assign(p, NEW_COLON2((yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), &loc), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(3) - (5)].val);v3=dispatch2(const_path_field,v1,v2);v4=v3;v5=(yyvsp[(4) - (5)].val);v6=(yyvsp[(5) - (5)].val);v7=dispatch3(opassign,v4,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 214:
#line 2169 "ripper.y"
    {
#if 0
			(yyval.val) = new_const_op_assign(p, NEW_COLON3((yyvsp[(2) - (4)].val), &(yyloc)), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=(yyvsp[(2) - (4)].val);v2=dispatch1(top_const_field,v1);v3=v2;v4=(yyvsp[(3) - (4)].val);v5=(yyvsp[(4) - (4)].val);v6=dispatch3(opassign,v3,v4,v5);(yyval.val)=v6;}
		    ;}
    break;

  case 215:
#line 2176 "ripper.y"
    {
#if 0
			rb_backref_error(p, (yyvsp[(1) - (3)].val));
			(yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=var_field(p, (yyvsp[(1) - (3)].val));v2=(yyvsp[(2) - (3)].val);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(opassign,v1,v2,v3);v5=v4;v6=dispatch1(assign_error,v5);(yyval.val)=v6;}ripper_error(p);
		    ;}
    break;

  case 216:
#line 2184 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(1) - (3)].val));
			value_expr((yyvsp[(3) - (3)].val));
			(yyval.val) = NEW_DOT2((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(dot2,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 217:
#line 2193 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(1) - (3)].val));
			value_expr((yyvsp[(3) - (3)].val));
			(yyval.val) = NEW_DOT3((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(dot3,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 218:
#line 2202 "ripper.y"
    {
#if 0
                        YYLTYPE loc;
                        loc.beg_pos = (yylsp[(2) - (2)]).end_pos;
                        loc.end_pos = (yylsp[(2) - (2)]).end_pos;

			value_expr((yyvsp[(1) - (2)].val));
			(yyval.val) = NEW_DOT2((yyvsp[(1) - (2)].val), new_nil(&loc), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=Qnil;v3=dispatch2(dot2,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 219:
#line 2214 "ripper.y"
    {
#if 0
                        YYLTYPE loc;
                        loc.beg_pos = (yylsp[(2) - (2)]).end_pos;
                        loc.end_pos = (yylsp[(2) - (2)]).end_pos;

			value_expr((yyvsp[(1) - (2)].val));
			(yyval.val) = NEW_DOT3((yyvsp[(1) - (2)].val), new_nil(&loc), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=Qnil;v3=dispatch2(dot3,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 220:
#line 2226 "ripper.y"
    {
#if 0
                        YYLTYPE loc;
                        loc.beg_pos = (yylsp[(1) - (2)]).beg_pos;
                        loc.end_pos = (yylsp[(1) - (2)]).beg_pos;

			value_expr((yyvsp[(2) - (2)].val));
			(yyval.val) = NEW_DOT2(new_nil(&loc), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=Qnil;v2=(yyvsp[(2) - (2)].val);v3=dispatch2(dot2,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 221:
#line 2238 "ripper.y"
    {
#if 0
                        YYLTYPE loc;
                        loc.beg_pos = (yylsp[(1) - (2)]).beg_pos;
                        loc.end_pos = (yylsp[(1) - (2)]).beg_pos;

			value_expr((yyvsp[(2) - (2)].val));
			(yyval.val) = NEW_DOT3(new_nil(&loc), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=Qnil;v2=(yyvsp[(2) - (2)].val);v3=dispatch2(dot3,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 222:
#line 2250 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), '+', (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 223:
#line 2254 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), '-', (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 224:
#line 2258 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), '*', (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 225:
#line 2262 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), '/', (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 226:
#line 2266 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), '%', (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 227:
#line 2270 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), idPow, (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 228:
#line 2274 "ripper.y"
    {
			(yyval.val) = call_uni_op(p, call_bin_op(p, (yyvsp[(2) - (4)].val), idPow, (yyvsp[(4) - (4)].val), &(yylsp[(2) - (4)]), &(yyloc)), idUMinus, &(yylsp[(1) - (4)]), &(yyloc));
		    ;}
    break;

  case 229:
#line 2278 "ripper.y"
    {
			(yyval.val) = call_uni_op(p, (yyvsp[(2) - (2)].val), idUPlus, &(yylsp[(1) - (2)]), &(yyloc));
		    ;}
    break;

  case 230:
#line 2282 "ripper.y"
    {
			(yyval.val) = call_uni_op(p, (yyvsp[(2) - (2)].val), idUMinus, &(yylsp[(1) - (2)]), &(yyloc));
		    ;}
    break;

  case 231:
#line 2286 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), '|', (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 232:
#line 2290 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), '^', (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 233:
#line 2294 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), '&', (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 234:
#line 2298 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), idCmp, (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 236:
#line 2303 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), idEq, (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 237:
#line 2307 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), idEqq, (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 238:
#line 2311 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), idNeq, (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 239:
#line 2315 "ripper.y"
    {
			(yyval.val) = match_op(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 240:
#line 2319 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), idNeqTilde, (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 241:
#line 2323 "ripper.y"
    {
			(yyval.val) = call_uni_op(p, method_cond(p, (yyvsp[(2) - (2)].val), &(yylsp[(2) - (2)])), '!', &(yylsp[(1) - (2)]), &(yyloc));
		    ;}
    break;

  case 242:
#line 2327 "ripper.y"
    {
			(yyval.val) = call_uni_op(p, (yyvsp[(2) - (2)].val), '~', &(yylsp[(1) - (2)]), &(yyloc));
		    ;}
    break;

  case 243:
#line 2331 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), idLTLT, (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 244:
#line 2335 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), idGTGT, (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 245:
#line 2339 "ripper.y"
    {
			(yyval.val) = logop(p, idANDOP, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 246:
#line 2343 "ripper.y"
    {
			(yyval.val) = logop(p, idOROP, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 247:
#line 2346 "ripper.y"
    {p->in_defined = 1;;}
    break;

  case 248:
#line 2347 "ripper.y"
    {
			p->in_defined = 0;
			(yyval.val) = new_defined(p, (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 249:
#line 2352 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(1) - (6)].val));
			(yyval.val) = new_if(p, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(6) - (6)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(1) - (6)].val));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (6)].val);v2=(yyvsp[(3) - (6)].val);v3=(yyvsp[(6) - (6)].val);v4=dispatch3(ifop,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 250:
#line 2361 "ripper.y"
    {
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 251:
#line 2366 "ripper.y"
    {(yyval.val) = '>';;}
    break;

  case 252:
#line 2367 "ripper.y"
    {(yyval.val) = '<';;}
    break;

  case 253:
#line 2368 "ripper.y"
    {(yyval.val) = idGE;;}
    break;

  case 254:
#line 2369 "ripper.y"
    {(yyval.val) = idLE;;}
    break;

  case 255:
#line 2373 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 256:
#line 2377 "ripper.y"
    {
			rb_warning1("comparison '%s' after comparison", WARN_ID((yyvsp[(2) - (3)].val)));
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 257:
#line 2384 "ripper.y"
    {
			value_expr((yyvsp[(1) - (1)].val));
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 259:
#line 2392 "ripper.y"
    {
			(yyval.val) = (yyvsp[(1) - (2)].val);
		    ;}
    break;

  case 260:
#line 2396 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(3) - (4)].val) ? arg_append(p, (yyvsp[(1) - (4)].val), new_hash(p, (yyvsp[(3) - (4)].val), &(yylsp[(3) - (4)])), &(yyloc)) : (yyvsp[(1) - (4)].val);
#endif
			{VALUE v1,v2,v3,v4,v5;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(bare_assoc_hash,v1);v3=(yyvsp[(1) - (4)].val);v4=v2;v5=dispatch2(args_add,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 261:
#line 2403 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (2)].val) ? NEW_LIST(new_hash(p, (yyvsp[(1) - (2)].val), &(yylsp[(1) - (2)])), &(yyloc)) : 0;
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=dispatch0(args_new);v2=(yyvsp[(1) - (2)].val);v3=dispatch1(bare_assoc_hash,v2);v4=v1;v5=v3;v6=dispatch2(args_add,v4,v5);(yyval.val)=v6;}
		    ;}
    break;

  case 262:
#line 2412 "ripper.y"
    {
			value_expr((yyvsp[(1) - (1)].val));
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 263:
#line 2417 "ripper.y"
    {
#if 0
			YYLTYPE loc = code_loc_gen(&(yylsp[(2) - (3)]), &(yylsp[(3) - (3)]));
			value_expr((yyvsp[(1) - (3)].val));
			(yyval.val) = NEW_RESCUE((yyvsp[(1) - (3)].val), NEW_RESBODY(0, remove_begin((yyvsp[(3) - (3)].val)), 0, &loc), 0, &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(rescue_mod,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 264:
#line 2428 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (3)].val);
#endif
			{VALUE v1,v2;v1=escape_Qundef((yyvsp[(2) - (3)].val));v2=dispatch1(arg_paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 265:
#line 2435 "ripper.y"
    {
			if (!local_id(p, idFWD_REST) ||
#if idFWD_KWREST
			    !local_id(p, idFWD_KWREST) ||
#endif
			    !local_id(p, idFWD_BLOCK)) {
			    compile_error(p, "unexpected ...");
			    (yyval.val) = Qnone;
			}
			else {
#if 0
			    NODE *splat = NEW_SPLAT(NEW_LVAR(idFWD_REST, &(yylsp[(2) - (3)])), &(yylsp[(2) - (3)]));
#if idFWD_KWREST
			    NODE *kwrest = list_append(p, NEW_LIST(0, &(yylsp[(2) - (3)])), NEW_LVAR(idFWD_KWREST, &(yylsp[(2) - (3)])));
#endif
			    NODE *block = NEW_BLOCK_PASS(NEW_LVAR(idFWD_BLOCK, &(yylsp[(2) - (3)])), &(yylsp[(2) - (3)]));
#if idFWD_KWREST
			    (yyval.val) = arg_append(p, splat, new_hash(p, kwrest, &(yylsp[(2) - (3)])), &(yylsp[(2) - (3)]));
#else
			    (yyval.val) = splat;
#endif
			    (yyval.val) = arg_blk_pass((yyval.val), block);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(arg_paren,v1);(yyval.val)=v2;}
			}
		    ;}
    break;

  case 270:
#line 2470 "ripper.y"
    {
		      (yyval.val) = (yyvsp[(1) - (2)].val);
		    ;}
    break;

  case 271:
#line 2474 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(3) - (4)].val) ? arg_append(p, (yyvsp[(1) - (4)].val), new_hash(p, (yyvsp[(3) - (4)].val), &(yylsp[(3) - (4)])), &(yyloc)) : (yyvsp[(1) - (4)].val);
#endif
			{VALUE v1,v2,v3,v4,v5;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(bare_assoc_hash,v1);v3=(yyvsp[(1) - (4)].val);v4=v2;v5=dispatch2(args_add,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 272:
#line 2481 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (2)].val) ? NEW_LIST(new_hash(p, (yyvsp[(1) - (2)].val), &(yylsp[(1) - (2)])), &(yylsp[(1) - (2)])) : 0;
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=dispatch0(args_new);v2=(yyvsp[(1) - (2)].val);v3=dispatch1(bare_assoc_hash,v2);v4=v1;v5=v3;v6=dispatch2(args_add,v4,v5);(yyval.val)=v6;}
		    ;}
    break;

  case 273:
#line 2490 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(1) - (1)].val));
			(yyval.val) = NEW_LIST((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(args_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(args_add,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 274:
#line 2498 "ripper.y"
    {
#if 0
			(yyval.val) = arg_blk_pass((yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(args_add_block,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 275:
#line 2505 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (2)].val) ? NEW_LIST(new_hash(p, (yyvsp[(1) - (2)].val), &(yylsp[(1) - (2)])), &(yylsp[(1) - (2)])) : 0;
			(yyval.val) = arg_blk_pass((yyval.val), (yyvsp[(2) - (2)].val));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8,v9;v1=dispatch0(args_new);v2=(yyvsp[(1) - (2)].val);v3=dispatch1(bare_assoc_hash,v2);v4=v1;v5=v3;v6=dispatch2(args_add,v4,v5);v7=v6;v8=(yyvsp[(2) - (2)].val);v9=dispatch2(args_add_block,v7,v8);(yyval.val)=v9;}
		    ;}
    break;

  case 276:
#line 2513 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(3) - (4)].val) ? arg_append(p, (yyvsp[(1) - (4)].val), new_hash(p, (yyvsp[(3) - (4)].val), &(yylsp[(3) - (4)])), &(yyloc)) : (yyvsp[(1) - (4)].val);
			(yyval.val) = arg_blk_pass((yyval.val), (yyvsp[(4) - (4)].val));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(bare_assoc_hash,v1);v3=(yyvsp[(1) - (4)].val);v4=v2;v5=dispatch2(args_add,v3,v4);v6=v5;v7=(yyvsp[(4) - (4)].val);v8=dispatch2(args_add_block,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 277:
#line 2521 "ripper.y"
    {{VALUE v1,v2,v3,v4;v1=dispatch0(args_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(args_add_block,v2,v3);(yyval.val)=v4;};}
    break;

  case 278:
#line 2524 "ripper.y"
    {
			/* If call_args starts with a open paren '(' or '[',
			 * look-ahead reading of the letters calls CMDARG_PUSH(0),
			 * but the push must be done after CMDARG_PUSH(1).
			 * So this code makes them consistent by first cancelling
			 * the premature CMDARG_PUSH(0), doing CMDARG_PUSH(1),
			 * and finally redoing CMDARG_PUSH(0).
			 */
			int lookahead = 0;
			switch (yychar) {
			  case '(': case tLPAREN: case tLPAREN_ARG: case '[': case tLBRACK:
			    lookahead = 1;
			}
			if (lookahead) CMDARG_POP();
			CMDARG_PUSH(1);
			if (lookahead) CMDARG_PUSH(0);
		    ;}
    break;

  case 279:
#line 2542 "ripper.y"
    {
			/* call_args can be followed by tLBRACE_ARG (that does CMDARG_PUSH(0) in the lexer)
			 * but the push must be done after CMDARG_POP() in the parser.
			 * So this code does CMDARG_POP() to pop 0 pushed by tLBRACE_ARG,
			 * CMDARG_POP() to pop 1 pushed by command_args,
			 * and CMDARG_PUSH(0) to restore back the flag set by tLBRACE_ARG.
			 */
			int lookahead = 0;
			switch (yychar) {
			  case tLBRACE_ARG:
			    lookahead = 1;
			}
			if (lookahead) CMDARG_POP();
			CMDARG_POP();
			if (lookahead) CMDARG_PUSH(0);
			(yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 280:
#line 2562 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_BLOCK_PASS((yyvsp[(2) - (2)].val), &(yyloc));
#endif
			(yyval.val)=(yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 281:
#line 2571 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 282:
#line 2575 "ripper.y"
    {
			(yyval.val) = 0;
		    ;}
    break;

  case 283:
#line 2581 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(args_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(args_add,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 284:
#line 2588 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_SPLAT((yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(args_new);v2=v1;v3=(yyvsp[(2) - (2)].val);v4=dispatch2(args_add_star,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 285:
#line 2595 "ripper.y"
    {
#if 0
			(yyval.val) = last_arg_append(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(args_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 286:
#line 2602 "ripper.y"
    {
#if 0
			(yyval.val) = rest_arg_append(p, (yyvsp[(1) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (4)].val);v2=(yyvsp[(4) - (4)].val);v3=dispatch2(args_add_star,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 289:
#line 2615 "ripper.y"
    {
#if 0
			(yyval.val) = last_arg_append(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=(yyvsp[(1) - (3)].val);v2=dispatch1(mrhs_new_from_args,v1);v3=v2;v4=(yyvsp[(3) - (3)].val);v5=dispatch2(mrhs_add,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 290:
#line 2622 "ripper.y"
    {
#if 0
			(yyval.val) = rest_arg_append(p, (yyvsp[(1) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=(yyvsp[(1) - (4)].val);v2=dispatch1(mrhs_new_from_args,v1);v3=v2;v4=(yyvsp[(4) - (4)].val);v5=dispatch2(mrhs_add_star,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 291:
#line 2629 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_SPLAT((yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(mrhs_new);v2=v1;v3=(yyvsp[(2) - (2)].val);v4=dispatch2(mrhs_add_star,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 302:
#line 2648 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_FCALL((yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(fcall,v1);v3=dispatch0(args_new);v4=v2;v5=v3;v6=dispatch2(method_add_arg,v4,v5);(yyval.val)=v6;}
		    ;}
    break;

  case 303:
#line 2655 "ripper.y"
    {
			CMDARG_PUSH(0);
		    ;}
    break;

  case 304:
#line 2660 "ripper.y"
    {
			CMDARG_POP();
#if 0
			set_line_body((yyvsp[(3) - (4)].val), (yylsp[(1) - (4)]).end_pos.lineno);
			(yyval.val) = NEW_BEGIN((yyvsp[(3) - (4)].val), &(yyloc));
			nd_set_line((yyval.val), (yylsp[(1) - (4)]).end_pos.lineno);
#endif
			{VALUE v1,v2;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(begin,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 305:
#line 2669 "ripper.y"
    {SET_LEX_STATE(EXPR_ENDARG);;}
    break;

  case 306:
#line 2670 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2;v1=0;v2=dispatch1(paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 307:
#line 2676 "ripper.y"
    {SET_LEX_STATE(EXPR_ENDARG);;}
    break;

  case 308:
#line 2677 "ripper.y"
    {
#if 0
			if (nd_type((yyvsp[(2) - (4)].val)) == NODE_SELF) (yyvsp[(2) - (4)].val)->nd_state = 0;
			(yyval.val) = (yyvsp[(2) - (4)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (4)].val);v2=dispatch1(paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 309:
#line 2685 "ripper.y"
    {
#if 0
			if (nd_type((yyvsp[(2) - (3)].val)) == NODE_SELF) (yyvsp[(2) - (3)].val)->nd_state = 0;
			(yyval.val) = (yyvsp[(2) - (3)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 310:
#line 2693 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_COLON2((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(const_path_ref,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 311:
#line 2700 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_COLON3((yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(top_const_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 312:
#line 2707 "ripper.y"
    {
#if 0
			(yyval.val) = make_list((yyvsp[(2) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=escape_Qundef((yyvsp[(2) - (3)].val));v2=dispatch1(array,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 313:
#line 2714 "ripper.y"
    {
#if 0
			(yyval.val) = new_hash(p, (yyvsp[(2) - (3)].val), &(yyloc));
			(yyval.val)->nd_brace = TRUE;
#endif
			{VALUE v1,v2;v1=escape_Qundef((yyvsp[(2) - (3)].val));v2=dispatch1(hash,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 314:
#line 2722 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_RETURN(0, &(yyloc));
#endif
			{VALUE v1;v1=dispatch0(return0);(yyval.val)=v1;}
		    ;}
    break;

  case 315:
#line 2729 "ripper.y"
    {
#if 0
			(yyval.val) = new_yield(p, (yyvsp[(3) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(paren,v1);v3=v2;v4=dispatch1(yield,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 316:
#line 2736 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_YIELD(0, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=dispatch0(args_new);v2=v1;v3=dispatch1(paren,v2);v4=v3;v5=dispatch1(yield,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 317:
#line 2743 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_YIELD(0, &(yyloc));
#endif
			{VALUE v1;v1=dispatch0(yield0);(yyval.val)=v1;}
		    ;}
    break;

  case 318:
#line 2749 "ripper.y"
    {p->in_defined = 1;;}
    break;

  case 319:
#line 2750 "ripper.y"
    {
			p->in_defined = 0;
			(yyval.val) = new_defined(p, (yyvsp[(5) - (6)].val), &(yyloc));
		    ;}
    break;

  case 320:
#line 2755 "ripper.y"
    {
			(yyval.val) = call_uni_op(p, method_cond(p, (yyvsp[(3) - (4)].val), &(yylsp[(3) - (4)])), METHOD_NOT, &(yylsp[(1) - (4)]), &(yyloc));
		    ;}
    break;

  case 321:
#line 2759 "ripper.y"
    {
			(yyval.val) = call_uni_op(p, method_cond(p, new_nil(&(yylsp[(2) - (3)])), &(yylsp[(2) - (3)])), METHOD_NOT, &(yylsp[(1) - (3)]), &(yyloc));
		    ;}
    break;

  case 322:
#line 2763 "ripper.y"
    {
#if 0
			(yyval.val) = method_add_block(p, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8,v9;v1=(yyvsp[(1) - (2)].val);v2=dispatch1(fcall,v1);v3=dispatch0(args_new);v4=v2;v5=v3;v6=dispatch2(method_add_arg,v4,v5);v7=v6;v8=(yyvsp[(2) - (2)].val);v9=dispatch2(method_add_block,v7,v8);(yyval.val)=v9;}
		    ;}
    break;

  case 324:
#line 2771 "ripper.y"
    {
#if 0
			block_dup_check(p, (yyvsp[(1) - (2)].val)->nd_args, (yyvsp[(2) - (2)].val));
			(yyval.val) = method_add_block(p, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(method_add_block,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 325:
#line 2779 "ripper.y"
    {
			token_info_push(p, "->", &(yylsp[(1) - (1)]));
		    ;}
    break;

  case 326:
#line 2783 "ripper.y"
    {
			(yyval.val) = (yyvsp[(3) - (3)].val);
#if 0
                        nd_set_first_loc((yyval.val), (yylsp[(1) - (3)]).beg_pos);
#endif
		    ;}
    break;

  case 327:
#line 2793 "ripper.y"
    {
#if 0
			(yyval.val) = new_if(p, (yyvsp[(2) - (6)].val), (yyvsp[(4) - (6)].val), (yyvsp[(5) - (6)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (6)].val));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(2) - (6)].val);v2=(yyvsp[(4) - (6)].val);v3=escape_Qundef((yyvsp[(5) - (6)].val));v4=dispatch3(if,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 328:
#line 2804 "ripper.y"
    {
#if 0
			(yyval.val) = new_unless(p, (yyvsp[(2) - (6)].val), (yyvsp[(4) - (6)].val), (yyvsp[(5) - (6)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (6)].val));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(2) - (6)].val);v2=(yyvsp[(4) - (6)].val);v3=escape_Qundef((yyvsp[(5) - (6)].val));v4=dispatch3(unless,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 329:
#line 2814 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_WHILE(cond(p, (yyvsp[(2) - (4)].val), &(yylsp[(2) - (4)])), (yyvsp[(3) - (4)].val), 1, &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (4)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(2) - (4)].val);v2=(yyvsp[(3) - (4)].val);v3=dispatch2(while,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 330:
#line 2824 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_UNTIL(cond(p, (yyvsp[(2) - (4)].val), &(yylsp[(2) - (4)])), (yyvsp[(3) - (4)].val), 1, &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (4)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(2) - (4)].val);v2=(yyvsp[(3) - (4)].val);v3=dispatch2(until,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 331:
#line 2832 "ripper.y"
    {
			(yyval.val) = p->case_labels;
			p->case_labels = Qnil;
		    ;}
    break;

  case 332:
#line 2838 "ripper.y"
    {
			if (RTEST(p->case_labels)) rb_hash_clear(p->case_labels);
			p->case_labels = (yyvsp[(4) - (6)].val);
#if 0
			(yyval.val) = NEW_CASE((yyvsp[(2) - (6)].val), (yyvsp[(5) - (6)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (6)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(2) - (6)].val);v2=(yyvsp[(5) - (6)].val);v3=dispatch2(case,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 333:
#line 2848 "ripper.y"
    {
			(yyval.val) = p->case_labels;
			p->case_labels = 0;
		    ;}
    break;

  case 334:
#line 2854 "ripper.y"
    {
			if (RTEST(p->case_labels)) rb_hash_clear(p->case_labels);
			p->case_labels = (yyvsp[(3) - (5)].val);
#if 0
			(yyval.val) = NEW_CASE2((yyvsp[(4) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=Qnil;v2=(yyvsp[(4) - (5)].val);v3=dispatch2(case,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 335:
#line 2865 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CASE3((yyvsp[(2) - (5)].val), (yyvsp[(4) - (5)].val), &(yyloc));
			rb_warn0L(nd_line((yyval.val)), "Pattern matching is experimental, and the behavior may change in future versions of Ruby!");
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(2) - (5)].val);v2=(yyvsp[(4) - (5)].val);v3=dispatch2(case,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 336:
#line 2875 "ripper.y"
    {
#if 0
			/*
			 *  for a, b, c in e
			 *  #=>
			 *  e.each{|*x| a, b, c = x}
			 *
			 *  for a in e
			 *  #=>
			 *  e.each{|x| a, = x}
			 */
			ID id = internal_id(p);
			NODE *m = NEW_ARGS_AUX(0, 0, &NULL_LOC);
			NODE *args, *scope, *internal_var = NEW_DVAR(id, &(yylsp[(2) - (6)]));
			VALUE tmpbuf = rb_imemo_tmpbuf_auto_free_pointer();
			ID *tbl = ALLOC_N(ID, 3);
			rb_imemo_tmpbuf_set_ptr(tmpbuf, tbl);
			tbl[0] = 1 /* length of local var table */; tbl[1] = id /* internal id */;
                        tbl[2] = tmpbuf;

			switch (nd_type((yyvsp[(2) - (6)].val))) {
			  case NODE_LASGN:
			  case NODE_DASGN:
			  case NODE_DASGN_CURR: /* e.each {|internal_var| a = internal_var; ... } */
			    (yyvsp[(2) - (6)].val)->nd_value = internal_var;
			    id = 0;
			    m->nd_plen = 1;
			    m->nd_next = (yyvsp[(2) - (6)].val);
			    break;
			  case NODE_MASGN: /* e.each {|*internal_var| a, b, c = (internal_var.length == 1 && Array === (tmp = internal_var[0]) ? tmp : internal_var); ... } */
			    m->nd_next = node_assign(p, (yyvsp[(2) - (6)].val), NEW_FOR_MASGN(internal_var, &(yylsp[(2) - (6)])), &(yylsp[(2) - (6)]));
			    break;
			  default: /* e.each {|*internal_var| @a, B, c[1], d.attr = internal_val; ... } */
			    m->nd_next = node_assign(p, NEW_MASGN(NEW_LIST((yyvsp[(2) - (6)].val), &(yylsp[(2) - (6)])), 0, &(yylsp[(2) - (6)])), internal_var, &(yylsp[(2) - (6)]));
			}
			/* {|*internal_id| <m> = internal_id; ... } */
			args = new_args(p, m, 0, id, 0, new_args_tail(p, 0, 0, 0, &(yylsp[(2) - (6)])), &(yylsp[(2) - (6)]));
			scope = NEW_NODE(NODE_SCOPE, tbl, (yyvsp[(5) - (6)].val), args, &(yyloc));
                        RB_OBJ_WRITTEN(p->ast, Qnil, tmpbuf);
			(yyval.val) = NEW_FOR((yyvsp[(4) - (6)].val), scope, &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (6)].val));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(2) - (6)].val);v2=(yyvsp[(4) - (6)].val);v3=(yyvsp[(5) - (6)].val);v4=dispatch3(for,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 337:
#line 2920 "ripper.y"
    {
			if (p->in_def) {
			    YYLTYPE loc = code_loc_gen(&(yylsp[(1) - (3)]), &(yylsp[(2) - (3)]));
			    yyerror1(&loc, "class definition in method body");
			}
			(yyvsp[(1) - (3)].num) = p->in_class;
			p->in_class = 1;
			local_push(p, 0);
		    ;}
    break;

  case 338:
#line 2931 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CLASS((yyvsp[(2) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(3) - (6)].val), &(yyloc));
			nd_set_line((yyval.val)->nd_body, (yylsp[(6) - (6)]).end_pos.lineno);
			set_line_body((yyvsp[(5) - (6)].val), (yylsp[(3) - (6)]).end_pos.lineno);
			nd_set_line((yyval.val), (yylsp[(3) - (6)]).end_pos.lineno);
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(2) - (6)].val);v2=(yyvsp[(3) - (6)].val);v3=(yyvsp[(5) - (6)].val);v4=dispatch3(class,v1,v2,v3);(yyval.val)=v4;}
			local_pop(p);
			p->in_class = (yyvsp[(1) - (6)].num) & 1;
		    ;}
    break;

  case 339:
#line 2943 "ripper.y"
    {
			(yyval.num) = (p->in_class << 1) | p->in_def;
			p->in_def = 0;
			p->in_class = 0;
			local_push(p, 0);
		    ;}
    break;

  case 340:
#line 2952 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_SCLASS((yyvsp[(3) - (7)].val), (yyvsp[(6) - (7)].val), &(yyloc));
			nd_set_line((yyval.val)->nd_body, (yylsp[(7) - (7)]).end_pos.lineno);
			set_line_body((yyvsp[(6) - (7)].val), nd_line((yyvsp[(3) - (7)].val)));
			fixpos((yyval.val), (yyvsp[(3) - (7)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(3) - (7)].val);v2=(yyvsp[(6) - (7)].val);v3=dispatch2(sclass,v1,v2);(yyval.val)=v3;}
			local_pop(p);
			p->in_def = (yyvsp[(4) - (7)].num) & 1;
			p->in_class = ((yyvsp[(4) - (7)].num) >> 1) & 1;
		    ;}
    break;

  case 341:
#line 2965 "ripper.y"
    {
			if (p->in_def) {
			    YYLTYPE loc = code_loc_gen(&(yylsp[(1) - (2)]), &(yylsp[(2) - (2)]));
			    yyerror1(&loc, "module definition in method body");
			}
			(yyvsp[(1) - (2)].num) = p->in_class;
			p->in_class = 1;
			local_push(p, 0);
		    ;}
    break;

  case 342:
#line 2976 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MODULE((yyvsp[(2) - (5)].val), (yyvsp[(4) - (5)].val), &(yyloc));
			nd_set_line((yyval.val)->nd_body, (yylsp[(5) - (5)]).end_pos.lineno);
			set_line_body((yyvsp[(4) - (5)].val), (yylsp[(2) - (5)]).end_pos.lineno);
			nd_set_line((yyval.val), (yylsp[(2) - (5)]).end_pos.lineno);
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(2) - (5)].val);v2=(yyvsp[(4) - (5)].val);v3=dispatch2(module,v1,v2);(yyval.val)=v3;}
			local_pop(p);
			p->in_class = (yyvsp[(1) - (5)].num) & 1;
		    ;}
    break;

  case 343:
#line 2988 "ripper.y"
    {
			local_push(p, 0);
			(yyval.id) = p->cur_arg;
			p->cur_arg = 0;
		    ;}
    break;

  case 344:
#line 2993 "ripper.y"
    {
			(yyval.num) = p->in_def;
			p->in_def = 1;
		    ;}
    break;

  case 345:
#line 3000 "ripper.y"
    {
#if 0
			NODE *body = remove_begin((yyvsp[(6) - (7)].val));
			reduce_nodes(p, &body);
			(yyval.val) = NEW_DEFN((yyvsp[(2) - (7)].val), (yyvsp[(5) - (7)].val), body, &(yyloc));
			nd_set_line((yyval.val)->nd_defn, (yylsp[(7) - (7)]).end_pos.lineno);
			set_line_body(body, (yylsp[(1) - (7)]).beg_pos.lineno);
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(2) - (7)].val);v2=(yyvsp[(5) - (7)].val);v3=(yyvsp[(6) - (7)].val);v4=dispatch3(def,v1,v2,v3);(yyval.val)=v4;}
			local_pop(p);
			p->in_def = (yyvsp[(4) - (7)].num) & 1;
			p->cur_arg = (yyvsp[(3) - (7)].id);
		    ;}
    break;

  case 346:
#line 3013 "ripper.y"
    {SET_LEX_STATE(EXPR_FNAME);;}
    break;

  case 347:
#line 3014 "ripper.y"
    {
			(yyvsp[(4) - (5)].num) = p->in_def;
			p->in_def = 1;
			SET_LEX_STATE(EXPR_ENDFN|EXPR_LABEL); /* force for args */
			local_push(p, 0);
			(yyval.id) = p->cur_arg;
			p->cur_arg = 0;
		    ;}
    break;

  case 348:
#line 3025 "ripper.y"
    {
#if 0
			NODE *body = remove_begin((yyvsp[(8) - (9)].val));
			reduce_nodes(p, &body);
			(yyval.val) = NEW_DEFS((yyvsp[(2) - (9)].val), (yyvsp[(5) - (9)].val), (yyvsp[(7) - (9)].val), body, &(yyloc));
			nd_set_line((yyval.val)->nd_defn, (yylsp[(9) - (9)]).end_pos.lineno);
			set_line_body(body, (yylsp[(1) - (9)]).beg_pos.lineno);
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=(yyvsp[(2) - (9)].val);v2=(yyvsp[(3) - (9)].val);v3=(yyvsp[(5) - (9)].val);v4=(yyvsp[(7) - (9)].val);v5=(yyvsp[(8) - (9)].val);v6=dispatch5(defs,v1,v2,v3,v4,v5);(yyval.val)=v6;}
			local_pop(p);
			p->in_def = (yyvsp[(4) - (9)].num) & 1;
			p->cur_arg = (yyvsp[(6) - (9)].id);
		    ;}
    break;

  case 349:
#line 3039 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_BREAK(0, &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=dispatch0(args_new);v2=v1;v3=dispatch1(break,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 350:
#line 3046 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_NEXT(0, &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=dispatch0(args_new);v2=v1;v3=dispatch1(next,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 351:
#line 3053 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_REDO(&(yyloc));
#endif
			{VALUE v1;v1=dispatch0(redo);(yyval.val)=v1;}
		    ;}
    break;

  case 352:
#line 3060 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_RETRY(&(yyloc));
#endif
			{VALUE v1;v1=dispatch0(retry);(yyval.val)=v1;}
		    ;}
    break;

  case 353:
#line 3069 "ripper.y"
    {
			value_expr((yyvsp[(1) - (1)].val));
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 354:
#line 3076 "ripper.y"
    {
			token_info_push(p, "begin", &(yyloc));
		    ;}
    break;

  case 355:
#line 3082 "ripper.y"
    {
			WARN_EOL("if");
			token_info_push(p, "if", &(yyloc));
			if (p->token_info && p->token_info->nonspc &&
			    p->token_info->next && !strcmp(p->token_info->next->token, "else")) {
			    const char *tok = p->lex.ptok;
			    const char *beg = p->lex.pbeg + p->token_info->next->beg.column;
			    beg += rb_strlen_lit("else");
			    while (beg < tok && ISSPACE(*beg)) beg++;
			    if (beg == tok) {
				p->token_info->nonspc = 0;
			    }
			}
		    ;}
    break;

  case 356:
#line 3099 "ripper.y"
    {
			token_info_push(p, "unless", &(yyloc));
		    ;}
    break;

  case 357:
#line 3105 "ripper.y"
    {
			token_info_push(p, "while", &(yyloc));
		    ;}
    break;

  case 358:
#line 3111 "ripper.y"
    {
			token_info_push(p, "until", &(yyloc));
		    ;}
    break;

  case 359:
#line 3117 "ripper.y"
    {
			token_info_push(p, "case", &(yyloc));
		    ;}
    break;

  case 360:
#line 3123 "ripper.y"
    {
			token_info_push(p, "for", &(yyloc));
		    ;}
    break;

  case 361:
#line 3129 "ripper.y"
    {
			token_info_push(p, "class", &(yyloc));
		    ;}
    break;

  case 362:
#line 3135 "ripper.y"
    {
			token_info_push(p, "module", &(yyloc));
		    ;}
    break;

  case 363:
#line 3141 "ripper.y"
    {
			token_info_push(p, "def", &(yyloc));
		    ;}
    break;

  case 364:
#line 3147 "ripper.y"
    {
			token_info_push(p, "do", &(yyloc));
		    ;}
    break;

  case 365:
#line 3153 "ripper.y"
    {
			token_info_push(p, "do", &(yyloc));
		    ;}
    break;

  case 366:
#line 3159 "ripper.y"
    {
			token_info_warn(p, "rescue", p->token_info, 1, &(yyloc));
		    ;}
    break;

  case 367:
#line 3165 "ripper.y"
    {
			token_info_warn(p, "ensure", p->token_info, 1, &(yyloc));
		    ;}
    break;

  case 368:
#line 3171 "ripper.y"
    {
			token_info_warn(p, "when", p->token_info, 0, &(yyloc));
		    ;}
    break;

  case 369:
#line 3177 "ripper.y"
    {
			token_info *ptinfo_beg = p->token_info;
			int same = ptinfo_beg && strcmp(ptinfo_beg->token, "case") != 0;
			token_info_warn(p, "else", p->token_info, same, &(yyloc));
			if (same) {
			    token_info e;
			    e.next = ptinfo_beg->next;
			    e.token = "else";
			    token_info_setup(&e, p->lex.pbeg, &(yyloc));
			    if (!e.nonspc) *ptinfo_beg = e;
			}
		    ;}
    break;

  case 370:
#line 3192 "ripper.y"
    {
			WARN_EOL("elsif");
			token_info_warn(p, "elsif", p->token_info, 1, &(yyloc));
		    ;}
    break;

  case 371:
#line 3199 "ripper.y"
    {
			token_info_pop(p, "end", &(yyloc));
		    ;}
    break;

  case 372:
#line 3205 "ripper.y"
    {
			if (p->in_class && !p->in_def && !dyna_in_block(p))
			    yyerror1(&(yylsp[(1) - (1)]), "Invalid return in class/module body");
		    ;}
    break;

  case 379:
#line 3224 "ripper.y"
    {
#if 0
			(yyval.val) = new_if(p, (yyvsp[(2) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (5)].val));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(2) - (5)].val);v2=(yyvsp[(4) - (5)].val);v3=escape_Qundef((yyvsp[(5) - (5)].val));v4=dispatch3(elsif,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 381:
#line 3235 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (2)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(else,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 384:
#line 3248 "ripper.y"
    {
#if 0
			(yyval.val) = assignable(p, (yyvsp[(1) - (1)].val), 0, &(yyloc));
			mark_lvar_used(p, (yyval.val));
#endif
			(yyval.val)=assignable(p, (yyvsp[(1) - (1)].val));
		    ;}
    break;

  case 385:
#line 3256 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (3)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(mlhs_paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 386:
#line 3265 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(mlhs_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(mlhs_add,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 387:
#line 3272 "ripper.y"
    {
#if 0
			(yyval.val) = list_append(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(mlhs_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 388:
#line 3281 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			(yyval.val)=(yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 389:
#line 3288 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(mlhs_add_star,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 390:
#line 3295 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (5)].val), NEW_POSTARG((yyvsp[(3) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(3) - (5)].val);v3=dispatch2(mlhs_add_star,v1,v2);v4=v3;v5=(yyvsp[(5) - (5)].val);v6=dispatch2(mlhs_add_post,v4,v5);(yyval.val)=v6;}
		    ;}
    break;

  case 391:
#line 3302 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, (yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(mlhs_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(mlhs_add_star,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 392:
#line 3309 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, NEW_POSTARG((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=dispatch0(mlhs_new);v2=v1;v3=(yyvsp[(1) - (3)].val);v4=dispatch2(mlhs_add_star,v2,v3);v5=v4;v6=(yyvsp[(3) - (3)].val);v7=dispatch2(mlhs_add_post,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 393:
#line 3318 "ripper.y"
    {
#if 0
			(yyval.val) = assignable(p, (yyvsp[(2) - (2)].val), 0, &(yyloc));
			mark_lvar_used(p, (yyval.val));
#endif
			(yyval.val)=assignable(p, (yyvsp[(2) - (2)].val));
		    ;}
    break;

  case 394:
#line 3326 "ripper.y"
    {
#if 0
			(yyval.val) = NODE_SPECIAL_NO_NAME_REST;
#endif
			(yyval.val)=Qnil;
		    ;}
    break;

  case 395:
#line 3335 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yylsp[(3) - (4)]));
		    ;}
    break;

  case 396:
#line 3339 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, (yyvsp[(1) - (2)].val), Qnone, (yyvsp[(2) - (2)].val), &(yylsp[(1) - (2)]));
		    ;}
    break;

  case 397:
#line 3343 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, Qnone, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yylsp[(1) - (2)]));
		    ;}
    break;

  case 398:
#line 3347 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, Qnone, ID2VAL(idNil), (yyvsp[(2) - (2)].val), &(yylsp[(1) - (2)]));
		    ;}
    break;

  case 399:
#line 3351 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, Qnone, Qnone, (yyvsp[(1) - (1)].val), &(yylsp[(1) - (1)]));
		    ;}
    break;

  case 400:
#line 3357 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 401:
#line 3361 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, Qnone, Qnone, Qnone, &(yylsp[(0) - (0)]));
		    ;}
    break;

  case 402:
#line 3367 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), Qnone, (yyvsp[(6) - (6)].val), &(yyloc));
		    ;}
    break;

  case 403:
#line 3371 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (8)].val), (yyvsp[(3) - (8)].val), (yyvsp[(5) - (8)].val), (yyvsp[(7) - (8)].val), (yyvsp[(8) - (8)].val), &(yyloc));
		    ;}
    break;

  case 404:
#line 3375 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), Qnone, Qnone, (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 405:
#line 3379 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), Qnone, (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val), &(yyloc));
		    ;}
    break;

  case 406:
#line 3383 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (4)].val), Qnone, (yyvsp[(3) - (4)].val), Qnone, (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 407:
#line 3387 "ripper.y"
    {
#if 0
			/* magic number for rest_id in iseq_set_arguments() */
			(yyval.val) = new_args(p, (yyvsp[(1) - (2)].val), Qnone, NODE_SPECIAL_EXCESSIVE_COMMA, Qnone, new_args_tail(p, Qnone, Qnone, Qnone, &(yylsp[(1) - (2)])), &(yyloc));
#endif
			{VALUE v1;v1=dispatch0(excessed_comma);(yyval.val)=new_args(p, (yyvsp[(1) - (2)].val), Qnone, v1, Qnone, new_args_tail(p, Qnone, Qnone, Qnone, NULL), NULL);}
		    ;}
    break;

  case 408:
#line 3395 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (6)].val), Qnone, (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val), &(yyloc));
		    ;}
    break;

  case 409:
#line 3399 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (2)].val), Qnone, Qnone, Qnone, (yyvsp[(2) - (2)].val), &(yyloc));
		    ;}
    break;

  case 410:
#line 3403 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), Qnone, (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 411:
#line 3407 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val), &(yyloc));
		    ;}
    break;

  case 412:
#line 3411 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, (yyvsp[(1) - (2)].val), Qnone, Qnone, (yyvsp[(2) - (2)].val), &(yyloc));
		    ;}
    break;

  case 413:
#line 3415 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, (yyvsp[(1) - (4)].val), Qnone, (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 414:
#line 3419 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, Qnone, (yyvsp[(1) - (2)].val), Qnone, (yyvsp[(2) - (2)].val), &(yyloc));
		    ;}
    break;

  case 415:
#line 3423 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, Qnone, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 416:
#line 3427 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, Qnone, Qnone, Qnone, (yyvsp[(1) - (1)].val), &(yyloc));
		    ;}
    break;

  case 418:
#line 3434 "ripper.y"
    {
			p->command_start = TRUE;
		    ;}
    break;

  case 419:
#line 3440 "ripper.y"
    {
			p->cur_arg = 0;
			p->max_numparam = ORDINAL_PARAM;
#if 0
			(yyval.val) = 0;
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11;v1=Qnil;v2=Qnil;v3=Qnil;v4=Qnil;v5=Qnil;v6=Qnil;v7=Qnil;v8=dispatch7(params,v1,v2,v3,v4,v5,v6,v7);v9=v8;v10=escape_Qundef((yyvsp[(2) - (3)].val));v11=dispatch2(block_var,v9,v10);(yyval.val)=v11;}
		    ;}
    break;

  case 420:
#line 3449 "ripper.y"
    {
			p->cur_arg = 0;
			p->max_numparam = ORDINAL_PARAM;
#if 0
			(yyval.val) = (yyvsp[(2) - (4)].val);
#endif
			{VALUE v1,v2,v3;v1=escape_Qundef((yyvsp[(2) - (4)].val));v2=escape_Qundef((yyvsp[(3) - (4)].val));v3=dispatch2(block_var,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 421:
#line 3461 "ripper.y"
    {
		      (yyval.val) = 0;
		    ;}
    break;

  case 422:
#line 3465 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			(yyval.val)=(yyvsp[(3) - (4)].val);
		    ;}
    break;

  case 423:
#line 3474 "ripper.y"
    {(yyval.val)=rb_ary_new3(1, get_value((yyvsp[(1) - (1)].val)));;}
    break;

  case 424:
#line 3476 "ripper.y"
    {(yyval.val)=rb_ary_push((yyvsp[(1) - (3)].val), get_value((yyvsp[(3) - (3)].val)));;}
    break;

  case 425:
#line 3480 "ripper.y"
    {
			new_bv(p, get_id((yyvsp[(1) - (1)].val)));
			(yyval.val)=get_value((yyvsp[(1) - (1)].val));
		    ;}
    break;

  case 426:
#line 3485 "ripper.y"
    {
			(yyval.val) = 0;
		    ;}
    break;

  case 427:
#line 3490 "ripper.y"
    {
			(yyval.vars) = dyna_push(p);
		    ;}
    break;

  case 428:
#line 3493 "ripper.y"
    {
			(yyval.num) = p->lex.lpar_beg;
			p->lex.lpar_beg = p->lex.paren_nest;
		    ;}
    break;

  case 429:
#line 3497 "ripper.y"
    {
			(yyval.num) = p->max_numparam;
			p->max_numparam = 0;
		    ;}
    break;

  case 430:
#line 3501 "ripper.y"
    {
			(yyval.node) = numparam_push(p);
		    ;}
    break;

  case 431:
#line 3505 "ripper.y"
    {
			CMDARG_PUSH(0);
		    ;}
    break;

  case 432:
#line 3509 "ripper.y"
    {
			int max_numparam = p->max_numparam;
			p->lex.lpar_beg = (yyvsp[(2) - (7)].num);
			p->max_numparam = (yyvsp[(3) - (7)].num);
			CMDARG_POP();
			(yyvsp[(5) - (7)].val) = args_with_numbered(p, (yyvsp[(5) - (7)].val), max_numparam);
#if 0
                        {
                            YYLTYPE loc = code_loc_gen(&(yylsp[(5) - (7)]), &(yylsp[(7) - (7)]));
                            (yyval.val) = NEW_LAMBDA((yyvsp[(5) - (7)].val), (yyvsp[(7) - (7)].val), &loc);
                            nd_set_line((yyval.val)->nd_body, (yylsp[(7) - (7)]).end_pos.lineno);
                            nd_set_line((yyval.val), (yylsp[(5) - (7)]).end_pos.lineno);
                        }
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(5) - (7)].val);v2=(yyvsp[(7) - (7)].val);v3=dispatch2(lambda,v1,v2);(yyval.val)=v3;}
			numparam_pop(p, (yyvsp[(4) - (7)].node));
			dyna_pop(p, (yyvsp[(1) - (7)].vars));
		    ;}
    break;

  case 433:
#line 3530 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (4)].val);
			p->max_numparam = ORDINAL_PARAM;
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (4)].val);v2=dispatch1(paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 434:
#line 3538 "ripper.y"
    {
#if 0
			if (!args_info_empty_p((yyvsp[(1) - (1)].val)->nd_ainfo))
			    p->max_numparam = ORDINAL_PARAM;
#endif
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 435:
#line 3548 "ripper.y"
    {
			token_info_pop(p, "}", &(yylsp[(3) - (3)]));
			(yyval.val) = (yyvsp[(2) - (3)].val);
		    ;}
    break;

  case 436:
#line 3553 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (3)].val);
		    ;}
    break;

  case 437:
#line 3559 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (3)].val);
#if 0
			(yyval.val)->nd_body->nd_loc = code_loc_gen(&(yylsp[(1) - (3)]), &(yylsp[(3) - (3)]));
			nd_set_line((yyval.val), (yylsp[(1) - (3)]).end_pos.lineno);
#endif
		    ;}
    break;

  case 438:
#line 3569 "ripper.y"
    {
#if 0
			if (nd_type((yyvsp[(1) - (2)].val)) == NODE_YIELD) {
			    compile_error(p, "block given to yield");
			}
			else {
			    block_dup_check(p, (yyvsp[(1) - (2)].val)->nd_args, (yyvsp[(2) - (2)].val));
			}
			(yyval.val) = method_add_block(p, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(1) - (2)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(method_add_block,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 439:
#line 3583 "ripper.y"
    {
#if 0
			(yyval.val) = new_qcall(p, (yyvsp[(2) - (4)].val), (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yylsp[(3) - (4)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (4)].val);v2=(yyvsp[(2) - (4)].val);v3=(yyvsp[(3) - (4)].val);v4=dispatch3(call,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (4)].val);v7=v6==Qundef ? v5 : dispatch2(method_add_arg,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 440:
#line 3590 "ripper.y"
    {
#if 0
			(yyval.val) = new_command_qcall(p, (yyvsp[(2) - (5)].val), (yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yylsp[(3) - (5)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(2) - (5)].val);v3=(yyvsp[(3) - (5)].val);v4=(yyvsp[(4) - (5)].val);v5=dispatch4(command_call,v1,v2,v3,v4);v6=v5;v7=(yyvsp[(5) - (5)].val);v8=v7==Qundef ? v6 : dispatch2(method_add_block,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 441:
#line 3597 "ripper.y"
    {
#if 0
			(yyval.val) = new_command_qcall(p, (yyvsp[(2) - (5)].val), (yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yylsp[(3) - (5)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(2) - (5)].val);v3=(yyvsp[(3) - (5)].val);v4=(yyvsp[(4) - (5)].val);v5=dispatch4(command_call,v1,v2,v3,v4);v6=v5;v7=(yyvsp[(5) - (5)].val);v8=dispatch2(method_add_block,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 442:
#line 3606 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (2)].val);
			(yyval.val)->nd_args = (yyvsp[(2) - (2)].val);
			nd_set_last_loc((yyvsp[(1) - (2)].val), (yylsp[(2) - (2)]).end_pos);
#endif
			{VALUE v1,v2,v3,v4,v5;v1=(yyvsp[(1) - (2)].val);v2=dispatch1(fcall,v1);v3=v2;v4=(yyvsp[(2) - (2)].val);v5=dispatch2(method_add_arg,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 443:
#line 3615 "ripper.y"
    {
#if 0
			(yyval.val) = new_qcall(p, (yyvsp[(2) - (4)].val), (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yylsp[(3) - (4)]), &(yyloc));
			nd_set_line((yyval.val), (yylsp[(3) - (4)]).end_pos.lineno);
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (4)].val);v2=(yyvsp[(2) - (4)].val);v3=(yyvsp[(3) - (4)].val);v4=dispatch3(call,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (4)].val);v7=v6==Qundef ? v5 : dispatch2(method_add_arg,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 444:
#line 3623 "ripper.y"
    {
#if 0
			(yyval.val) = new_qcall(p, ID2VAL(idCOLON2), (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yylsp[(3) - (4)]), &(yyloc));
			nd_set_line((yyval.val), (yylsp[(3) - (4)]).end_pos.lineno);
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (4)].val);v2=ID2VAL(idCOLON2);v3=(yyvsp[(3) - (4)].val);v4=dispatch3(call,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (4)].val);v7=dispatch2(method_add_arg,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 445:
#line 3631 "ripper.y"
    {
#if 0
			(yyval.val) = new_qcall(p, ID2VAL(idCOLON2), (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), Qnull, &(yylsp[(3) - (3)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=ID2VAL(idCOLON2);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(call,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 446:
#line 3638 "ripper.y"
    {
#if 0
			(yyval.val) = new_qcall(p, (yyvsp[(2) - (3)].val), (yyvsp[(1) - (3)].val), ID2VAL(idCall), (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
			nd_set_line((yyval.val), (yylsp[(2) - (3)]).end_pos.lineno);
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=ID2VAL(idCall);v4=dispatch3(call,v1,v2,v3);v5=v4;v6=(yyvsp[(3) - (3)].val);v7=dispatch2(method_add_arg,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 447:
#line 3646 "ripper.y"
    {
#if 0
			(yyval.val) = new_qcall(p, ID2VAL(idCOLON2), (yyvsp[(1) - (3)].val), ID2VAL(idCall), (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
			nd_set_line((yyval.val), (yylsp[(2) - (3)]).end_pos.lineno);
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (3)].val);v2=ID2VAL(idCOLON2);v3=ID2VAL(idCall);v4=dispatch3(call,v1,v2,v3);v5=v4;v6=(yyvsp[(3) - (3)].val);v7=dispatch2(method_add_arg,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 448:
#line 3654 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_SUPER((yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(super,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 449:
#line 3661 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_ZSUPER(&(yyloc));
#endif
			{VALUE v1;v1=dispatch0(zsuper);(yyval.val)=v1;}
		    ;}
    break;

  case 450:
#line 3668 "ripper.y"
    {
#if 0
			if ((yyvsp[(1) - (4)].val) && nd_type((yyvsp[(1) - (4)].val)) == NODE_SELF)
			    (yyval.val) = NEW_FCALL(tAREF, (yyvsp[(3) - (4)].val), &(yyloc));
			else
			    (yyval.val) = NEW_CALL((yyvsp[(1) - (4)].val), tAREF, (yyvsp[(3) - (4)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(1) - (4)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (4)].val);v2=escape_Qundef((yyvsp[(3) - (4)].val));v3=dispatch2(aref,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 451:
#line 3681 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (3)].val);
#if 0
			(yyval.val)->nd_body->nd_loc = code_loc_gen(&(yylsp[(1) - (3)]), &(yylsp[(3) - (3)]));
			nd_set_line((yyval.val), (yylsp[(1) - (3)]).end_pos.lineno);
#endif
		    ;}
    break;

  case 452:
#line 3689 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (3)].val);
#if 0
			(yyval.val)->nd_body->nd_loc = code_loc_gen(&(yylsp[(1) - (3)]), &(yylsp[(3) - (3)]));
			nd_set_line((yyval.val), (yylsp[(1) - (3)]).end_pos.lineno);
#endif
		    ;}
    break;

  case 453:
#line 3698 "ripper.y"
    {(yyval.vars) = dyna_push(p);;}
    break;

  case 454:
#line 3699 "ripper.y"
    {
			(yyval.num) = p->max_numparam;
			p->max_numparam = 0;
		    ;}
    break;

  case 455:
#line 3703 "ripper.y"
    {
			(yyval.node) = numparam_push(p);
		    ;}
    break;

  case 456:
#line 3707 "ripper.y"
    {
			int max_numparam = p->max_numparam;
			p->max_numparam = (yyvsp[(2) - (5)].num);
			(yyvsp[(4) - (5)].val) = args_with_numbered(p, (yyvsp[(4) - (5)].val), max_numparam);
#if 0
			(yyval.val) = NEW_ITER((yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=escape_Qundef((yyvsp[(4) - (5)].val));v2=(yyvsp[(5) - (5)].val);v3=dispatch2(brace_block,v1,v2);(yyval.val)=v3;}
			numparam_pop(p, (yyvsp[(3) - (5)].node));
			dyna_pop(p, (yyvsp[(1) - (5)].vars));
		    ;}
    break;

  case 457:
#line 3720 "ripper.y"
    {(yyval.vars) = dyna_push(p);;}
    break;

  case 458:
#line 3721 "ripper.y"
    {
			(yyval.num) = p->max_numparam;
			p->max_numparam = 0;
		    ;}
    break;

  case 459:
#line 3725 "ripper.y"
    {
			(yyval.node) = numparam_push(p);
			CMDARG_PUSH(0);
		    ;}
    break;

  case 460:
#line 3730 "ripper.y"
    {
			int max_numparam = p->max_numparam;
			p->max_numparam = (yyvsp[(2) - (5)].num);
			(yyvsp[(4) - (5)].val) = args_with_numbered(p, (yyvsp[(4) - (5)].val), max_numparam);
#if 0
			(yyval.val) = NEW_ITER((yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=escape_Qundef((yyvsp[(4) - (5)].val));v2=(yyvsp[(5) - (5)].val);v3=dispatch2(do_block,v1,v2);(yyval.val)=v3;}
			CMDARG_POP();
			numparam_pop(p, (yyvsp[(3) - (5)].node));
			dyna_pop(p, (yyvsp[(1) - (5)].vars));
		    ;}
    break;

  case 461:
#line 3745 "ripper.y"
    {
#if 0
			check_literal_when(p, (yyvsp[(1) - (1)].val), &(yylsp[(1) - (1)]));
			(yyval.val) = NEW_LIST((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(args_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(args_add,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 462:
#line 3753 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_SPLAT((yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(args_new);v2=v1;v3=(yyvsp[(2) - (2)].val);v4=dispatch2(args_add_star,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 463:
#line 3760 "ripper.y"
    {
#if 0
			check_literal_when(p, (yyvsp[(3) - (3)].val), &(yylsp[(3) - (3)]));
			(yyval.val) = last_arg_append(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(args_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 464:
#line 3768 "ripper.y"
    {
#if 0
			(yyval.val) = rest_arg_append(p, (yyvsp[(1) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (4)].val);v2=(yyvsp[(4) - (4)].val);v3=dispatch2(args_add_star,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 465:
#line 3779 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_WHEN((yyvsp[(2) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (5)].val));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(2) - (5)].val);v2=(yyvsp[(4) - (5)].val);v3=escape_Qundef((yyvsp[(5) - (5)].val));v4=dispatch3(when,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 468:
#line 3793 "ripper.y"
    {
			SET_LEX_STATE(EXPR_BEG|EXPR_LABEL);
			p->command_start = FALSE;
			(yyval.num) = p->in_kwarg;
			p->in_kwarg = 1;
		    ;}
    break;

  case 469:
#line 3799 "ripper.y"
    {
			(yyval.tbl) = p->pvtbl;
			p->pvtbl = st_init_numtable();
		    ;}
    break;

  case 470:
#line 3804 "ripper.y"
    {
			st_free_table(p->pvtbl);
			p->pvtbl = (yyvsp[(3) - (5)].tbl);
		    ;}
    break;

  case 471:
#line 3808 "ripper.y"
    {
			p->in_kwarg = !!(yyvsp[(2) - (6)].num);
		    ;}
    break;

  case 472:
#line 3813 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_IN((yyvsp[(4) - (9)].val), (yyvsp[(8) - (9)].val), (yyvsp[(9) - (9)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(4) - (9)].val);v2=(yyvsp[(8) - (9)].val);v3=escape_Qundef((yyvsp[(9) - (9)].val));v4=dispatch3(in,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 476:
#line 3827 "ripper.y"
    {
#if 0
			(yyval.val) = new_if(p, (yyvsp[(3) - (3)].val), remove_begin((yyvsp[(1) - (3)].val)), 0, &(yyloc));
			fixpos((yyval.val), (yyvsp[(3) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(3) - (3)].val);v2=(yyvsp[(1) - (3)].val);v3=dispatch2(if_mod,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 477:
#line 3835 "ripper.y"
    {
#if 0
			(yyval.val) = new_unless(p, (yyvsp[(3) - (3)].val), remove_begin((yyvsp[(1) - (3)].val)), 0, &(yyloc));
			fixpos((yyval.val), (yyvsp[(3) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(3) - (3)].val);v2=(yyvsp[(1) - (3)].val);v3=dispatch2(unless_mod,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 479:
#line 3846 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, Qnone, 1, 0, Qnone, &(yyloc));
			(yyval.val) = new_array_pattern(p, Qnone, get_value((yyvsp[(1) - (2)].val)), (yyval.val), &(yyloc));
		    ;}
    break;

  case 480:
#line 3851 "ripper.y"
    {
			(yyval.val) = new_array_pattern(p, Qnone, get_value((yyvsp[(1) - (3)].val)), (yyvsp[(3) - (3)].val), &(yyloc));
#if 0
			nd_set_first_loc((yyval.val), (yylsp[(1) - (3)]).beg_pos);
#endif

		    ;}
    break;

  case 481:
#line 3859 "ripper.y"
    {
			(yyval.val) = new_array_pattern(p, Qnone, Qnone, (yyvsp[(1) - (1)].val), &(yyloc));
		    ;}
    break;

  case 482:
#line 3863 "ripper.y"
    {
			(yyval.val) = new_hash_pattern(p, Qnone, (yyvsp[(1) - (1)].val), &(yyloc));
		    ;}
    break;

  case 484:
#line 3872 "ripper.y"
    {
#if 0
			NODE *n = NEW_LIST((yyvsp[(1) - (3)].val), &(yyloc));
			n = list_append(p, n, (yyvsp[(3) - (3)].val));
			(yyval.val) = new_hash(p, n, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=STATIC_ID2SYM(id_assoc);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(binary,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 486:
#line 3884 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_NODE(NODE_OR, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), 0, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=STATIC_ID2SYM(idOr);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(binary,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 489:
#line 3895 "ripper.y"
    {
			(yyval.val) = new_array_pattern(p, (yyvsp[(1) - (4)].val), Qnone, (yyvsp[(3) - (4)].val), &(yyloc));
#if 0
			nd_set_first_loc((yyval.val), (yylsp[(1) - (4)]).beg_pos);
#endif

		    ;}
    break;

  case 490:
#line 3903 "ripper.y"
    {
			(yyval.val) = new_hash_pattern(p, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), &(yyloc));
#if 0
			nd_set_first_loc((yyval.val), (yylsp[(1) - (4)]).beg_pos);
#endif

		    ;}
    break;

  case 491:
#line 3911 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, Qnone, 0, 0, Qnone, &(yyloc));
			(yyval.val) = new_array_pattern(p, (yyvsp[(1) - (3)].val), Qnone, (yyval.val), &(yyloc));
		    ;}
    break;

  case 492:
#line 3916 "ripper.y"
    {
			(yyval.val) = new_array_pattern(p, (yyvsp[(1) - (4)].val), Qnone, (yyvsp[(3) - (4)].val), &(yyloc));
#if 0
			nd_set_first_loc((yyval.val), (yylsp[(1) - (4)]).beg_pos);
#endif

		    ;}
    break;

  case 493:
#line 3924 "ripper.y"
    {
			(yyval.val) = new_hash_pattern(p, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), &(yyloc));
#if 0
			nd_set_first_loc((yyval.val), (yylsp[(1) - (4)]).beg_pos);
#endif

		    ;}
    break;

  case 494:
#line 3932 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, Qnone, 0, 0, Qnone, &(yyloc));
			(yyval.val) = new_array_pattern(p, (yyvsp[(1) - (3)].val), Qnone, (yyval.val), &(yyloc));
		    ;}
    break;

  case 495:
#line 3937 "ripper.y"
    {
			(yyval.val) = new_array_pattern(p, Qnone, Qnone, (yyvsp[(2) - (3)].val), &(yyloc));
		    ;}
    break;

  case 496:
#line 3941 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, Qnone, 0, 0, Qnone, &(yyloc));
			(yyval.val) = new_array_pattern(p, Qnone, Qnone, (yyval.val), &(yyloc));
		    ;}
    break;

  case 497:
#line 3946 "ripper.y"
    {
			(yyval.val) = new_hash_pattern(p, Qnone, (yyvsp[(2) - (3)].val), &(yyloc));
		    ;}
    break;

  case 498:
#line 3950 "ripper.y"
    {
			(yyval.val) = new_hash_pattern_tail(p, Qnone, 0, &(yyloc));
			(yyval.val) = new_hash_pattern(p, Qnone, (yyval.val), &(yyloc));
		    ;}
    break;

  case 499:
#line 3955 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (3)].val);
		    ;}
    break;

  case 500:
#line 3961 "ripper.y"
    {
#if 0
			NODE *pre_args = NEW_LIST((yyvsp[(1) - (1)].val), &(yyloc));
			(yyval.val) = new_array_pattern_tail(p, pre_args, 0, 0, Qnone, &(yyloc));
#endif
			(yyval.val) = new_array_pattern_tail(p, rb_ary_new_from_args(1, get_value((yyvsp[(1) - (1)].val))), 0, 0, Qnone, &(yyloc));

		    ;}
    break;

  case 501:
#line 3970 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, (yyvsp[(1) - (1)].val), 1, 0, Qnone, &(yyloc));
		    ;}
    break;

  case 502:
#line 3974 "ripper.y"
    {
#if 0
			(yyval.val) = new_array_pattern_tail(p, list_concat((yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val)), 0, 0, Qnone, &(yyloc));
#endif
			VALUE pre_args = rb_ary_concat((yyvsp[(1) - (2)].val), get_value((yyvsp[(2) - (2)].val)));
			(yyval.val) = new_array_pattern_tail(p, pre_args, 0, 0, Qnone, &(yyloc));

		    ;}
    break;

  case 503:
#line 3983 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, (yyvsp[(1) - (3)].val), 1, (yyvsp[(3) - (3)].val), Qnone, &(yyloc));
		    ;}
    break;

  case 504:
#line 3987 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, (yyvsp[(1) - (5)].val), 1, (yyvsp[(3) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
		    ;}
    break;

  case 505:
#line 3991 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, (yyvsp[(1) - (2)].val), 1, 0, Qnone, &(yyloc));
		    ;}
    break;

  case 506:
#line 3995 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, (yyvsp[(1) - (4)].val), 1, 0, (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 508:
#line 4002 "ripper.y"
    {
			(yyval.val) = (yyvsp[(1) - (2)].val);
		    ;}
    break;

  case 509:
#line 4006 "ripper.y"
    {
#if 0
			(yyval.val) = list_concat((yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val));
#endif
			(yyval.val)=rb_ary_concat((yyvsp[(1) - (3)].val), get_value((yyvsp[(2) - (3)].val)));
		    ;}
    break;

  case 510:
#line 4015 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, Qnone, 1, (yyvsp[(2) - (2)].val), Qnone, &(yyloc));
		    ;}
    break;

  case 511:
#line 4019 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, Qnone, 1, (yyvsp[(2) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 512:
#line 4023 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, Qnone, 1, 0, Qnone, &(yyloc));
		    ;}
    break;

  case 513:
#line 4027 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, Qnone, 1, 0, (yyvsp[(3) - (3)].val), &(yyloc));
		    ;}
    break;

  case 515:
#line 4034 "ripper.y"
    {
#if 0
			(yyval.val) = list_concat((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val)=rb_ary_concat((yyvsp[(1) - (3)].val), get_value((yyvsp[(3) - (3)].val)));
		    ;}
    break;

  case 516:
#line 4043 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			(yyval.val)=rb_ary_new_from_args(1, get_value((yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 517:
#line 4052 "ripper.y"
    {
			(yyval.val) =  new_hash_pattern_tail(p, new_unique_key_hash(p, (yyvsp[(1) - (3)].val), &(yyloc)), (yyvsp[(3) - (3)].val), &(yyloc));
		    ;}
    break;

  case 518:
#line 4056 "ripper.y"
    {
			(yyval.val) =  new_hash_pattern_tail(p, new_unique_key_hash(p, (yyvsp[(1) - (1)].val), &(yyloc)), 0, &(yyloc));
		    ;}
    break;

  case 519:
#line 4060 "ripper.y"
    {
			(yyval.val) =  new_hash_pattern_tail(p, new_hash(p, Qnone, &(yyloc)), (yyvsp[(1) - (1)].val), &(yyloc));
		    ;}
    break;

  case 520:
#line 4064 "ripper.y"
    {
			(yyval.val) =  new_hash_pattern_tail(p, new_unique_key_hash(p, (yyvsp[(1) - (3)].val), &(yyloc)), ID2VAL(idNil), &(yyloc));
		    ;}
    break;

  case 521:
#line 4068 "ripper.y"
    {
			(yyval.val) =  new_hash_pattern_tail(p, new_hash(p, Qnone, &(yyloc)), ID2VAL(idNil), &(yyloc));
		    ;}
    break;

  case 523:
#line 4075 "ripper.y"
    {
#if 0
			(yyval.val) = list_concat((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val)=rb_ary_concat((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
		    ;}
    break;

  case 524:
#line 4084 "ripper.y"
    {
#if 0
			(yyval.val) = list_append(p, NEW_LIST(NEW_LIT(ID2SYM((yyvsp[(1) - (2)].val)), &(yyloc)), &(yyloc)), (yyvsp[(2) - (2)].val));
#endif
			(yyval.val)=rb_ary_new_from_args(1, rb_ary_new_from_args(2, get_value((yyvsp[(1) - (2)].val)), get_value((yyvsp[(2) - (2)].val))));
		    ;}
    break;

  case 525:
#line 4091 "ripper.y"
    {
			if (!is_local_id(get_id((yyvsp[(1) - (1)].val)))) {
			    yyerror1(&(yylsp[(1) - (1)]), "key must be valid as local variables");
			}
#if 0
			error_duplicate_pattern_variable(p, (yyvsp[(1) - (1)].val), &(yylsp[(1) - (1)]));
			(yyval.val) = list_append(p, NEW_LIST(NEW_LIT(ID2SYM((yyvsp[(1) - (1)].val)), &(yyloc)), &(yyloc)), assignable(p, (yyvsp[(1) - (1)].val), 0, &(yyloc)));
#endif
			(yyval.val)=rb_ary_new_from_args(1, rb_ary_new_from_args(2, get_value((yyvsp[(1) - (1)].val)), Qnil));
		    ;}
    break;

  case 526:
#line 4102 "ripper.y"
    {
#if 0
			YYLTYPE loc = code_loc_gen(&(yylsp[(1) - (4)]), &(yylsp[(3) - (4)]));
			NODE *node = dsym_node(p, (yyvsp[(2) - (4)].val), &loc);
			if (nd_type(node) == NODE_LIT) {
			    (yyval.val) = list_append(p, NEW_LIST(node, &loc), (yyvsp[(4) - (4)].val));
			}
			else {
			    yyerror1(&loc, "symbol literal with interpolation is not allowed");
			    (yyval.val) = 0;
			}
#endif
			(yyval.val)=rb_ary_new_from_args(1, rb_ary_new_from_args(2, (yyvsp[(2) - (4)].val), get_value((yyvsp[(4) - (4)].val))));
		    ;}
    break;

  case 527:
#line 4117 "ripper.y"
    {
#if 0
			YYLTYPE loc = code_loc_gen(&(yylsp[(1) - (3)]), &(yylsp[(3) - (3)]));
			NODE *node = dsym_node(p, (yyvsp[(2) - (3)].val), &loc);
			ID id;
			if (nd_type(node) == NODE_LIT) {
			    id = SYM2ID(node->nd_lit);
			    if (!is_local_id(id)) {
				yyerror1(&loc, "key must be valid as local variables");
			    }
			    error_duplicate_pattern_variable(p, id, &loc);
			    (yyval.val) = list_append(p, NEW_LIST(node, &loc), assignable(p, id, 0, &(yyloc)));
			}
			else {
			    yyerror1(&loc, "symbol literal with interpolation is not allowed");
			    (yyval.val) = 0;
			}
#endif
			(yyval.val)=rb_ary_new_from_args(1, rb_ary_new_from_args(2, (yyvsp[(2) - (3)].val), Qnil));
		    ;}
    break;

  case 528:
#line 4140 "ripper.y"
    {
		        (yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 529:
#line 4144 "ripper.y"
    {
		        (yyval.val) = 0;
		    ;}
    break;

  case 530:
#line 4150 "ripper.y"
    {
		        (yyval.val) = 0;
		    ;}
    break;

  case 532:
#line 4157 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(1) - (3)].val));
			value_expr((yyvsp[(3) - (3)].val));
			(yyval.val) = NEW_DOT2((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(dot2,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 533:
#line 4166 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(1) - (3)].val));
			value_expr((yyvsp[(3) - (3)].val));
			(yyval.val) = NEW_DOT3((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(dot3,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 534:
#line 4175 "ripper.y"
    {
#if 0
			YYLTYPE loc;
			loc.beg_pos = (yylsp[(2) - (2)]).end_pos;
			loc.end_pos = (yylsp[(2) - (2)]).end_pos;

			value_expr((yyvsp[(1) - (2)].val));
			(yyval.val) = NEW_DOT2((yyvsp[(1) - (2)].val), new_nil(&loc), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=Qnil;v3=dispatch2(dot2,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 535:
#line 4187 "ripper.y"
    {
#if 0
			YYLTYPE loc;
			loc.beg_pos = (yylsp[(2) - (2)]).end_pos;
			loc.end_pos = (yylsp[(2) - (2)]).end_pos;

			value_expr((yyvsp[(1) - (2)].val));
			(yyval.val) = NEW_DOT3((yyvsp[(1) - (2)].val), new_nil(&loc), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=Qnil;v3=dispatch2(dot3,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 539:
#line 4202 "ripper.y"
    {
#if 0
			YYLTYPE loc;
			loc.beg_pos = (yylsp[(1) - (2)]).beg_pos;
			loc.end_pos = (yylsp[(1) - (2)]).beg_pos;

			value_expr((yyvsp[(2) - (2)].val));
			(yyval.val) = NEW_DOT2(new_nil(&loc), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=Qnil;v2=(yyvsp[(2) - (2)].val);v3=dispatch2(dot2,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 540:
#line 4214 "ripper.y"
    {
#if 0
			YYLTYPE loc;
			loc.beg_pos = (yylsp[(1) - (2)]).beg_pos;
			loc.end_pos = (yylsp[(1) - (2)]).beg_pos;

			value_expr((yyvsp[(2) - (2)].val));
			(yyval.val) = NEW_DOT3(new_nil(&loc), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=Qnil;v2=(yyvsp[(2) - (2)].val);v3=dispatch2(dot3,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 549:
#line 4236 "ripper.y"
    {
#if 0
			if (!((yyval.val) = gettable(p, (yyvsp[(1) - (1)].val), &(yyloc)))) (yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(var_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 550:
#line 4243 "ripper.y"
    {
			token_info_push(p, "->", &(yylsp[(1) - (1)]));
		    ;}
    break;

  case 551:
#line 4247 "ripper.y"
    {
			(yyval.val) = (yyvsp[(3) - (3)].val);
#if 0
			nd_set_first_loc((yyval.val), (yylsp[(1) - (3)]).beg_pos);
#endif
		    ;}
    break;

  case 552:
#line 4256 "ripper.y"
    {
#if 0
			error_duplicate_pattern_variable(p, (yyvsp[(1) - (1)].val), &(yylsp[(1) - (1)]));
			(yyval.val) = assignable(p, (yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			(yyval.val)=assignable(p, var_field(p, (yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 553:
#line 4266 "ripper.y"
    {
#if 0
			NODE *n = gettable(p, (yyvsp[(2) - (2)].val), &(yyloc));
			if (!(nd_type(n) == NODE_LVAR || nd_type(n) == NODE_DVAR)) {
			    compile_error(p, "%"PRIsVALUE": no such local variable", rb_id2str((yyvsp[(2) - (2)].val)));
			}
			(yyval.val) = n;
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(var_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 554:
#line 4279 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_COLON3((yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(top_const_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 555:
#line 4286 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_COLON2((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(const_path_ref,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 556:
#line 4293 "ripper.y"
    {
#if 0
			(yyval.val) = gettable(p, (yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(var_ref,v1);(yyval.val)=v2;}
		   ;}
    break;

  case 557:
#line 4304 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_RESBODY((yyvsp[(2) - (6)].val),
					 (yyvsp[(3) - (6)].val) ? block_append(p, node_assign(p, (yyvsp[(3) - (6)].val), NEW_ERRINFO(&(yylsp[(3) - (6)])), &(yylsp[(3) - (6)])), (yyvsp[(5) - (6)].val)) : (yyvsp[(5) - (6)].val),
					 (yyvsp[(6) - (6)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (6)].val)?(yyvsp[(2) - (6)].val):(yyvsp[(5) - (6)].val));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=escape_Qundef((yyvsp[(2) - (6)].val));v2=escape_Qundef((yyvsp[(3) - (6)].val));v3=escape_Qundef((yyvsp[(5) - (6)].val));v4=escape_Qundef((yyvsp[(6) - (6)].val));v5=dispatch4(rescue,v1,v2,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 559:
#line 4317 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			(yyval.val)=rb_ary_new3(1, get_value((yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 560:
#line 4324 "ripper.y"
    {
#if 0
			if (!((yyval.val) = splat_array((yyvsp[(1) - (1)].val)))) (yyval.val) = (yyvsp[(1) - (1)].val);
#endif
			(yyval.val)=(yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 562:
#line 4334 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 564:
#line 4341 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (2)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(ensure,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 568:
#line 4355 "ripper.y"
    {
#if 0
			NODE *node = (yyvsp[(1) - (1)].val);
			if (!node) {
			    node = NEW_STR(STR_NEW0(), &(yyloc));
                            RB_OBJ_WRITTEN(p->ast, Qnil, node->nd_lit);
			}
			else {
			    node = evstr2dstr(p, node);
			}
			(yyval.val) = node;
#endif
			(yyval.val)=(yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 571:
#line 4374 "ripper.y"
    {
#if 0
			(yyval.val) = literal_concat(p, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(string_concat,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 572:
#line 4383 "ripper.y"
    {
#if 0
			(yyval.val) = heredoc_dedent(p, (yyvsp[(2) - (3)].val));
			if ((yyval.val)) nd_set_loc((yyval.val), &(yyloc));
#endif
			{VALUE v1,v2;v1=heredoc_dedent(p, (yyvsp[(2) - (3)].val));v2=dispatch1(string_literal,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 573:
#line 4393 "ripper.y"
    {
#if 0
			(yyval.val) = new_xstring(p, heredoc_dedent(p, (yyvsp[(2) - (3)].val)), &(yyloc));
#endif
			{VALUE v1,v2;v1=heredoc_dedent(p, (yyvsp[(2) - (3)].val));v2=dispatch1(xstring_literal,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 574:
#line 4402 "ripper.y"
    {
			(yyval.val) = new_regexp(p, (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
		    ;}
    break;

  case 575:
#line 4408 "ripper.y"
    {
#if 0
			(yyval.val) = make_list((yyvsp[(3) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(array,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 576:
#line 4417 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			{VALUE v1;v1=dispatch0(words_new);(yyval.val)=v1;}
		    ;}
    break;

  case 577:
#line 4424 "ripper.y"
    {
#if 0
			(yyval.val) = list_append(p, (yyvsp[(1) - (3)].val), evstr2dstr(p, (yyvsp[(2) - (3)].val)));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=dispatch2(words_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 578:
#line 4433 "ripper.y"
    {{VALUE v1,v2,v3,v4;v1=dispatch0(word_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(word_add,v2,v3);(yyval.val)=v4;};}
    break;

  case 579:
#line 4435 "ripper.y"
    {
#if 0
			(yyval.val) = literal_concat(p, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(word_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 580:
#line 4444 "ripper.y"
    {
#if 0
			(yyval.val) = make_list((yyvsp[(3) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(array,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 581:
#line 4453 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			{VALUE v1;v1=dispatch0(symbols_new);(yyval.val)=v1;}
		    ;}
    break;

  case 582:
#line 4460 "ripper.y"
    {
#if 0
			(yyval.val) = symbol_append(p, (yyvsp[(1) - (3)].val), evstr2dstr(p, (yyvsp[(2) - (3)].val)));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=dispatch2(symbols_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 583:
#line 4469 "ripper.y"
    {
#if 0
			(yyval.val) = make_list((yyvsp[(3) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(array,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 584:
#line 4478 "ripper.y"
    {
#if 0
			(yyval.val) = make_list((yyvsp[(3) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(array,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 585:
#line 4487 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			{VALUE v1;v1=dispatch0(qwords_new);(yyval.val)=v1;}
		    ;}
    break;

  case 586:
#line 4494 "ripper.y"
    {
#if 0
			(yyval.val) = list_append(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=dispatch2(qwords_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 587:
#line 4503 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			{VALUE v1;v1=dispatch0(qsymbols_new);(yyval.val)=v1;}
		    ;}
    break;

  case 588:
#line 4510 "ripper.y"
    {
#if 0
			(yyval.val) = symbol_append(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=dispatch2(qsymbols_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 589:
#line 4519 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			{VALUE v1;v1=dispatch0(string_content);(yyval.val)=v1;}
		    ;}
    break;

  case 590:
#line 4526 "ripper.y"
    {
#if 0
			(yyval.val) = literal_concat(p, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(string_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 591:
#line 4535 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			{VALUE v1;v1=dispatch0(xstring_new);(yyval.val)=v1;}
		    ;}
    break;

  case 592:
#line 4542 "ripper.y"
    {
#if 0
			(yyval.val) = literal_concat(p, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(xstring_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 593:
#line 4551 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			{VALUE v1;v1=dispatch0(regexp_new);(yyval.val)=v1;}
#if 0
#endif
			(yyval.val) = ripper_new_yylval(p, 0, (yyval.val), 0);

		    ;}
    break;

  case 594:
#line 4562 "ripper.y"
    {
#if 0
			NODE *head = (yyvsp[(1) - (2)].val), *tail = (yyvsp[(2) - (2)].val);
			if (!head) {
			    (yyval.val) = tail;
			}
			else if (!tail) {
			    (yyval.val) = head;
			}
			else {
			    switch (nd_type(head)) {
			      case NODE_STR:
				nd_set_type(head, NODE_DSTR);
				break;
			      case NODE_DSTR:
				break;
			      default:
				head = list_append(p, NEW_DSTR(Qnil, &(yyloc)), head);
				break;
			    }
			    (yyval.val) = list_append(p, head, tail);
			}
#endif
			VALUE s1 = 1, s2 = 0, n1 = (yyvsp[(1) - (2)].val), n2 = (yyvsp[(2) - (2)].val);
			if (ripper_is_node_yylval(n1)) {
			    s1 = RNODE(n1)->nd_cval;
			    n1 = RNODE(n1)->nd_rval;
			}
			if (ripper_is_node_yylval(n2)) {
			    s2 = RNODE(n2)->nd_cval;
			    n2 = RNODE(n2)->nd_rval;
			}
			(yyval.val) = dispatch2(regexp_add, n1, n2);
			if (!s1 && s2) {
			    (yyval.val) = ripper_new_yylval(p, 0, (yyval.val), s2);
			}

		    ;}
    break;

  case 596:
#line 4604 "ripper.y"
    {
			/* need to backup p->lex.strterm so that a string literal `%&foo,#$&,bar&` can be parsed */
			(yyval.strterm) = p->lex.strterm;
			p->lex.strterm = 0;
			SET_LEX_STATE(EXPR_BEG);
		    ;}
    break;

  case 597:
#line 4611 "ripper.y"
    {
			p->lex.strterm = (yyvsp[(2) - (3)].strterm);
#if 0
			(yyval.val) = NEW_EVSTR((yyvsp[(3) - (3)].val), &(yyloc));
			nd_set_line((yyval.val), (yylsp[(3) - (3)]).end_pos.lineno);
#endif
			{VALUE v1,v2;v1=(yyvsp[(3) - (3)].val);v2=dispatch1(string_dvar,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 598:
#line 4620 "ripper.y"
    {
			CMDARG_PUSH(0);
			COND_PUSH(0);
		    ;}
    break;

  case 599:
#line 4624 "ripper.y"
    {
			/* need to backup p->lex.strterm so that a string literal `%!foo,#{ !0 },bar!` can be parsed */
			(yyval.strterm) = p->lex.strterm;
			p->lex.strterm = 0;
		    ;}
    break;

  case 600:
#line 4629 "ripper.y"
    {
			(yyval.num) = p->lex.state;
			SET_LEX_STATE(EXPR_BEG);
		    ;}
    break;

  case 601:
#line 4633 "ripper.y"
    {
			(yyval.num) = p->lex.brace_nest;
			p->lex.brace_nest = 0;
		    ;}
    break;

  case 602:
#line 4637 "ripper.y"
    {
			(yyval.num) = p->heredoc_indent;
			p->heredoc_indent = 0;
		    ;}
    break;

  case 603:
#line 4642 "ripper.y"
    {
			COND_POP();
			CMDARG_POP();
			p->lex.strterm = (yyvsp[(3) - (8)].strterm);
			SET_LEX_STATE((yyvsp[(4) - (8)].num));
			p->lex.brace_nest = (yyvsp[(5) - (8)].num);
			p->heredoc_indent = (yyvsp[(6) - (8)].num);
			p->heredoc_line_indent = -1;
#if 0
			if ((yyvsp[(7) - (8)].val)) (yyvsp[(7) - (8)].val)->flags &= ~NODE_FL_NEWLINE;
			(yyval.val) = new_evstr(p, (yyvsp[(7) - (8)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(7) - (8)].val);v2=dispatch1(string_embexpr,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 604:
#line 4659 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_GVAR((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(var_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 605:
#line 4666 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_IVAR((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(var_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 606:
#line 4673 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CVAR((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(var_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 610:
#line 4687 "ripper.y"
    {
			SET_LEX_STATE(EXPR_END);
#if 0
			(yyval.val) = NEW_LIT(ID2SYM((yyvsp[(2) - (2)].val)), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(symbol,v1);v3=v2;v4=dispatch1(symbol_literal,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 615:
#line 4703 "ripper.y"
    {
			SET_LEX_STATE(EXPR_END);
#if 0
			(yyval.val) = dsym_node(p, (yyvsp[(2) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(dyna_symbol,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 617:
#line 4714 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (2)].val);
			RB_OBJ_WRITE(p->ast, &(yyval.val)->nd_lit, negate_lit(p, (yyval.val)->nd_lit));
#endif
			{VALUE v1,v2,v3;v1=ID2VAL(idUMinus);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(unary,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 627:
#line 4736 "ripper.y"
    {(yyval.val) = KWD2EID(nil, (yyvsp[(1) - (1)].val));;}
    break;

  case 628:
#line 4737 "ripper.y"
    {(yyval.val) = KWD2EID(self, (yyvsp[(1) - (1)].val));;}
    break;

  case 629:
#line 4738 "ripper.y"
    {(yyval.val) = KWD2EID(true, (yyvsp[(1) - (1)].val));;}
    break;

  case 630:
#line 4739 "ripper.y"
    {(yyval.val) = KWD2EID(false, (yyvsp[(1) - (1)].val));;}
    break;

  case 631:
#line 4740 "ripper.y"
    {(yyval.val) = KWD2EID(_FILE__, (yyvsp[(1) - (1)].val));;}
    break;

  case 632:
#line 4741 "ripper.y"
    {(yyval.val) = KWD2EID(_LINE__, (yyvsp[(1) - (1)].val));;}
    break;

  case 633:
#line 4742 "ripper.y"
    {(yyval.val) = KWD2EID(_ENCODING__, (yyvsp[(1) - (1)].val));;}
    break;

  case 634:
#line 4746 "ripper.y"
    {
#if 0
			if (!((yyval.val) = gettable(p, (yyvsp[(1) - (1)].val), &(yyloc)))) (yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			if (id_is_var(p, get_id((yyvsp[(1) - (1)].val)))) {
			    (yyval.val) = dispatch1(var_ref, (yyvsp[(1) - (1)].val));
			}
			else {
			    (yyval.val) = dispatch1(vcall, (yyvsp[(1) - (1)].val));
			}

		    ;}
    break;

  case 635:
#line 4759 "ripper.y"
    {
#if 0
			if (!((yyval.val) = gettable(p, (yyvsp[(1) - (1)].val), &(yyloc)))) (yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(var_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 636:
#line 4768 "ripper.y"
    {
#if 0
			(yyval.val) = assignable(p, (yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			(yyval.val)=assignable(p, var_field(p, (yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 637:
#line 4775 "ripper.y"
    {
#if 0
			(yyval.val) = assignable(p, (yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			(yyval.val)=assignable(p, var_field(p, (yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 640:
#line 4788 "ripper.y"
    {
			SET_LEX_STATE(EXPR_BEG);
			p->command_start = TRUE;
		    ;}
    break;

  case 641:
#line 4793 "ripper.y"
    {
			(yyval.val) = (yyvsp[(3) - (4)].val);
		    ;}
    break;

  case 642:
#line 4797 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			(yyval.val)=Qnil;
		    ;}
    break;

  case 643:
#line 4806 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (3)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(paren,v1);(yyval.val)=v2;}
			SET_LEX_STATE(EXPR_BEG);
			p->command_start = TRUE;
		    ;}
    break;

  case 644:
#line 4815 "ripper.y"
    {
			arg_var(p, idFWD_REST);
#if idFWD_KWREST
			arg_var(p, idFWD_KWREST);
#endif
			arg_var(p, idFWD_BLOCK);
#if 0
			(yyval.val) = new_args_tail(p, Qnone, idFWD_KWREST, idFWD_BLOCK, &(yylsp[(2) - (3)]));
			(yyval.val) = new_args(p, Qnone, Qnone, idFWD_REST, Qnone, (yyval.val), &(yylsp[(2) - (3)]));
#endif
			{VALUE v1,v2;v1=params_new(Qnone, Qnone, (yyvsp[(2) - (3)].val), Qnone, Qnone, Qnone, Qnone);v2=dispatch1(paren,v1);(yyval.val)=v2;}
			SET_LEX_STATE(EXPR_BEG);
			p->command_start = TRUE;
		    ;}
    break;

  case 645:
#line 4829 "ripper.y"
    {
			(yyval.num) = p->in_kwarg;
			p->in_kwarg = 1;
			SET_LEX_STATE(p->lex.state|EXPR_LABEL); /* force for args */
		    ;}
    break;

  case 646:
#line 4835 "ripper.y"
    {
			p->in_kwarg = !!(yyvsp[(1) - (3)].num);
			(yyval.val) = (yyvsp[(2) - (3)].val);
			SET_LEX_STATE(EXPR_BEG);
			p->command_start = TRUE;
		    ;}
    break;

  case 647:
#line 4844 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yylsp[(3) - (4)]));
		    ;}
    break;

  case 648:
#line 4848 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, (yyvsp[(1) - (2)].val), Qnone, (yyvsp[(2) - (2)].val), &(yylsp[(1) - (2)]));
		    ;}
    break;

  case 649:
#line 4852 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, Qnone, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yylsp[(1) - (2)]));
		    ;}
    break;

  case 650:
#line 4856 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, Qnone, ID2VAL(idNil), (yyvsp[(2) - (2)].val), &(yylsp[(1) - (2)]));
		    ;}
    break;

  case 651:
#line 4860 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, Qnone, Qnone, (yyvsp[(1) - (1)].val), &(yylsp[(1) - (1)]));
		    ;}
    break;

  case 652:
#line 4866 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 653:
#line 4870 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, Qnone, Qnone, Qnone, &(yylsp[(0) - (0)]));
		    ;}
    break;

  case 654:
#line 4876 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), Qnone, (yyvsp[(6) - (6)].val), &(yyloc));
		    ;}
    break;

  case 655:
#line 4880 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (8)].val), (yyvsp[(3) - (8)].val), (yyvsp[(5) - (8)].val), (yyvsp[(7) - (8)].val), (yyvsp[(8) - (8)].val), &(yyloc));
		    ;}
    break;

  case 656:
#line 4884 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), Qnone, Qnone, (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 657:
#line 4888 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), Qnone, (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val), &(yyloc));
		    ;}
    break;

  case 658:
#line 4892 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (4)].val), Qnone, (yyvsp[(3) - (4)].val), Qnone, (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 659:
#line 4896 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (6)].val), Qnone, (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val), &(yyloc));
		    ;}
    break;

  case 660:
#line 4900 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (2)].val), Qnone, Qnone, Qnone, (yyvsp[(2) - (2)].val), &(yyloc));
		    ;}
    break;

  case 661:
#line 4904 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), Qnone, (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 662:
#line 4908 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val), &(yyloc));
		    ;}
    break;

  case 663:
#line 4912 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, (yyvsp[(1) - (2)].val), Qnone, Qnone, (yyvsp[(2) - (2)].val), &(yyloc));
		    ;}
    break;

  case 664:
#line 4916 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, (yyvsp[(1) - (4)].val), Qnone, (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 665:
#line 4920 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, Qnone, (yyvsp[(1) - (2)].val), Qnone, (yyvsp[(2) - (2)].val), &(yyloc));
		    ;}
    break;

  case 666:
#line 4924 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, Qnone, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 667:
#line 4928 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, Qnone, Qnone, Qnone, (yyvsp[(1) - (1)].val), &(yyloc));
		    ;}
    break;

  case 668:
#line 4932 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, Qnone, Qnone, Qnone, &(yylsp[(0) - (0)]));
			(yyval.val) = new_args(p, Qnone, Qnone, Qnone, Qnone, (yyval.val), &(yylsp[(0) - (0)]));
		    ;}
    break;

  case 669:
#line 4939 "ripper.y"
    {
#if 0
			(yyval.val) = idDot3;
#endif
			{VALUE v1;v1=dispatch0(args_forward);(yyval.val)=v1;}
		    ;}
    break;

  case 670:
#line 4948 "ripper.y"
    {
#if 0
			yyerror1(&(yylsp[(1) - (1)]), "formal argument cannot be a constant");
			(yyval.val) = 0;
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(param_error,v1);(yyval.val)=v2;}ripper_error(p);
		    ;}
    break;

  case 671:
#line 4956 "ripper.y"
    {
#if 0
			yyerror1(&(yylsp[(1) - (1)]), "formal argument cannot be an instance variable");
			(yyval.val) = 0;
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(param_error,v1);(yyval.val)=v2;}ripper_error(p);
		    ;}
    break;

  case 672:
#line 4964 "ripper.y"
    {
#if 0
			yyerror1(&(yylsp[(1) - (1)]), "formal argument cannot be a global variable");
			(yyval.val) = 0;
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(param_error,v1);(yyval.val)=v2;}ripper_error(p);
		    ;}
    break;

  case 673:
#line 4972 "ripper.y"
    {
#if 0
			yyerror1(&(yylsp[(1) - (1)]), "formal argument cannot be a class variable");
			(yyval.val) = 0;
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(param_error,v1);(yyval.val)=v2;}ripper_error(p);
		    ;}
    break;

  case 675:
#line 4983 "ripper.y"
    {
			formal_argument(p, get_id((yyvsp[(1) - (1)].val)));
			p->max_numparam = ORDINAL_PARAM;
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 676:
#line 4991 "ripper.y"
    {
			ID id = get_id((yyvsp[(1) - (1)].val));
			arg_var(p, id);
			p->cur_arg = id;
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 677:
#line 5000 "ripper.y"
    {
			p->cur_arg = 0;
#if 0
			(yyval.val) = NEW_ARGS_AUX((yyvsp[(1) - (1)].val), 1, &NULL_LOC);
#endif
			(yyval.val)=get_value((yyvsp[(1) - (1)].val));
		    ;}
    break;

  case 678:
#line 5008 "ripper.y"
    {
#if 0
			ID tid = internal_id(p);
			YYLTYPE loc;
			loc.beg_pos = (yylsp[(2) - (3)]).beg_pos;
			loc.end_pos = (yylsp[(2) - (3)]).beg_pos;
			arg_var(p, tid);
			if (dyna_in_block(p)) {
			    (yyvsp[(2) - (3)].val)->nd_value = NEW_DVAR(tid, &loc);
			}
			else {
			    (yyvsp[(2) - (3)].val)->nd_value = NEW_LVAR(tid, &loc);
			}
			(yyval.val) = NEW_ARGS_AUX(tid, 1, &NULL_LOC);
			(yyval.val)->nd_next = (yyvsp[(2) - (3)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(mlhs_paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 679:
#line 5029 "ripper.y"
    {(yyval.val)=rb_ary_new3(1, get_value((yyvsp[(1) - (1)].val)));;}
    break;

  case 680:
#line 5031 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (3)].val);
			(yyval.val)->nd_plen++;
			(yyval.val)->nd_next = block_append(p, (yyval.val)->nd_next, (yyvsp[(3) - (3)].val)->nd_next);
			rb_discard_node(p, (yyvsp[(3) - (3)].val));
#endif
			(yyval.val)=rb_ary_push((yyvsp[(1) - (3)].val), get_value((yyvsp[(3) - (3)].val)));
		    ;}
    break;

  case 681:
#line 5044 "ripper.y"
    {
			ID id = get_id((yyvsp[(1) - (1)].val));
			arg_var(p, formal_argument(p, id));
			p->cur_arg = id;
			p->max_numparam = ORDINAL_PARAM;
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 682:
#line 5054 "ripper.y"
    {
			p->cur_arg = 0;
#if 0
			(yyval.val) = new_kw_arg(p, assignable(p, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yyloc)), &(yyloc));
#endif
			(yyval.val)=rb_assoc_new(get_value(assignable(p, (yyvsp[(1) - (2)].val))), get_value((yyvsp[(2) - (2)].val)));
		    ;}
    break;

  case 683:
#line 5062 "ripper.y"
    {
			p->cur_arg = 0;
#if 0
			(yyval.val) = new_kw_arg(p, assignable(p, (yyvsp[(1) - (1)].val), NODE_SPECIAL_REQUIRED_KEYWORD, &(yyloc)), &(yyloc));
#endif
			(yyval.val)=rb_assoc_new(get_value(assignable(p, (yyvsp[(1) - (1)].val))), 0);
		    ;}
    break;

  case 684:
#line 5072 "ripper.y"
    {
#if 0
			(yyval.val) = new_kw_arg(p, assignable(p, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yyloc)), &(yyloc));
#endif
			(yyval.val)=rb_assoc_new(get_value(assignable(p, (yyvsp[(1) - (2)].val))), get_value((yyvsp[(2) - (2)].val)));
		    ;}
    break;

  case 685:
#line 5079 "ripper.y"
    {
#if 0
			(yyval.val) = new_kw_arg(p, assignable(p, (yyvsp[(1) - (1)].val), NODE_SPECIAL_REQUIRED_KEYWORD, &(yyloc)), &(yyloc));
#endif
			(yyval.val)=rb_assoc_new(get_value(assignable(p, (yyvsp[(1) - (1)].val))), 0);
		    ;}
    break;

  case 686:
#line 5088 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (1)].val);
#endif
			(yyval.val)=rb_ary_new3(1, get_value((yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 687:
#line 5095 "ripper.y"
    {
#if 0
			(yyval.val) = kwd_append((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val)=rb_ary_push((yyvsp[(1) - (3)].val), get_value((yyvsp[(3) - (3)].val)));
		    ;}
    break;

  case 688:
#line 5105 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (1)].val);
#endif
			(yyval.val)=rb_ary_new3(1, get_value((yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 689:
#line 5112 "ripper.y"
    {
#if 0
			(yyval.val) = kwd_append((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val)=rb_ary_push((yyvsp[(1) - (3)].val), get_value((yyvsp[(3) - (3)].val)));
		    ;}
    break;

  case 692:
#line 5125 "ripper.y"
    {
#if 0
#endif
			{VALUE v1,v2;v1=Qnil;v2=dispatch1(nokw_param,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 693:
#line 5133 "ripper.y"
    {
			arg_var(p, shadowing_lvar(p, get_id((yyvsp[(2) - (2)].val))));
#if 0
			(yyval.val) = (yyvsp[(2) - (2)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(kwrest_param,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 694:
#line 5141 "ripper.y"
    {
#if 0
			(yyval.val) = internal_id(p);
			arg_var(p, (yyval.val));
#endif
			{VALUE v1,v2;v1=Qnil;v2=dispatch1(kwrest_param,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 695:
#line 5151 "ripper.y"
    {
			p->cur_arg = 0;
#if 0
			(yyval.val) = NEW_OPT_ARG(0, assignable(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc)), &(yyloc));
#endif
			(yyval.val)=rb_assoc_new(get_value(assignable(p, (yyvsp[(1) - (3)].val))), get_value((yyvsp[(3) - (3)].val)));
		    ;}
    break;

  case 696:
#line 5161 "ripper.y"
    {
			p->cur_arg = 0;
#if 0
			(yyval.val) = NEW_OPT_ARG(0, assignable(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc)), &(yyloc));
#endif
			(yyval.val)=rb_assoc_new(get_value(assignable(p, (yyvsp[(1) - (3)].val))), get_value((yyvsp[(3) - (3)].val)));
		    ;}
    break;

  case 697:
#line 5171 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (1)].val);
#endif
			(yyval.val)=rb_ary_new3(1, get_value((yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 698:
#line 5178 "ripper.y"
    {
#if 0
			(yyval.val) = opt_arg_append((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val)=rb_ary_push((yyvsp[(1) - (3)].val), get_value((yyvsp[(3) - (3)].val)));
		    ;}
    break;

  case 699:
#line 5187 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (1)].val);
#endif
			(yyval.val)=rb_ary_new3(1, get_value((yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 700:
#line 5194 "ripper.y"
    {
#if 0
			(yyval.val) = opt_arg_append((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val)=rb_ary_push((yyvsp[(1) - (3)].val), get_value((yyvsp[(3) - (3)].val)));
		    ;}
    break;

  case 703:
#line 5207 "ripper.y"
    {
			arg_var(p, shadowing_lvar(p, get_id((yyvsp[(2) - (2)].val))));
#if 0
			(yyval.val) = (yyvsp[(2) - (2)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(rest_param,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 704:
#line 5215 "ripper.y"
    {
#if 0
			(yyval.val) = internal_id(p);
			arg_var(p, (yyval.val));
#endif
			{VALUE v1,v2;v1=Qnil;v2=dispatch1(rest_param,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 707:
#line 5229 "ripper.y"
    {
			arg_var(p, shadowing_lvar(p, get_id((yyvsp[(2) - (2)].val))));
#if 0
			(yyval.val) = (yyvsp[(2) - (2)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(blockarg,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 708:
#line 5239 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 709:
#line 5243 "ripper.y"
    {
			(yyval.val) = Qnull;
		    ;}
    break;

  case 710:
#line 5249 "ripper.y"
    {
			value_expr((yyvsp[(1) - (1)].val));
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 711:
#line 5253 "ripper.y"
    {SET_LEX_STATE(EXPR_BEG);;}
    break;

  case 712:
#line 5254 "ripper.y"
    {
#if 0
			switch (nd_type((yyvsp[(3) - (4)].val))) {
			  case NODE_STR:
			  case NODE_DSTR:
			  case NODE_XSTR:
			  case NODE_DXSTR:
			  case NODE_DREGX:
			  case NODE_LIT:
			  case NODE_LIST:
			  case NODE_ZLIST:
			    yyerror1(&(yylsp[(3) - (4)]), "can't define singleton method for literals");
			    break;
			  default:
			    value_expr((yyvsp[(3) - (4)].val));
			    break;
			}
			(yyval.val) = (yyvsp[(3) - (4)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 714:
#line 5279 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (2)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (2)].val);v2=dispatch1(assoclist_from_args,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 715:
#line 5288 "ripper.y"
    {(yyval.val)=rb_ary_new3(1, get_value((yyvsp[(1) - (1)].val)));;}
    break;

  case 716:
#line 5290 "ripper.y"
    {
#if 0
			NODE *assocs = (yyvsp[(1) - (3)].val);
			NODE *tail = (yyvsp[(3) - (3)].val);
			if (!assocs) {
			    assocs = tail;
			}
			else if (tail) {
                            if (assocs->nd_head &&
                                !tail->nd_head && nd_type(tail->nd_next) == NODE_LIST &&
                                nd_type(tail->nd_next->nd_head) == NODE_HASH) {
                                /* DSTAR */
                                tail = tail->nd_next->nd_head->nd_head;
                            }
			    assocs = list_concat(assocs, tail);
			}
			(yyval.val) = assocs;
#endif
			(yyval.val)=rb_ary_push((yyvsp[(1) - (3)].val), get_value((yyvsp[(3) - (3)].val)));
		    ;}
    break;

  case 717:
#line 5313 "ripper.y"
    {
#if 0
			if (nd_type((yyvsp[(1) - (3)].val)) == NODE_STR) {
			    nd_set_type((yyvsp[(1) - (3)].val), NODE_LIT);
			    RB_OBJ_WRITE(p->ast, &(yyvsp[(1) - (3)].val)->nd_lit, rb_fstring((yyvsp[(1) - (3)].val)->nd_lit));
			}
			(yyval.val) = list_append(p, NEW_LIST((yyvsp[(1) - (3)].val), &(yyloc)), (yyvsp[(3) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(assoc_new,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 718:
#line 5324 "ripper.y"
    {
#if 0
			(yyval.val) = list_append(p, NEW_LIST(NEW_LIT(ID2SYM((yyvsp[(1) - (2)].val)), &(yylsp[(1) - (2)])), &(yyloc)), (yyvsp[(2) - (2)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(assoc_new,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 719:
#line 5331 "ripper.y"
    {
#if 0
			YYLTYPE loc = code_loc_gen(&(yylsp[(1) - (4)]), &(yylsp[(3) - (4)]));
			(yyval.val) = list_append(p, NEW_LIST(dsym_node(p, (yyvsp[(2) - (4)].val), &loc), &loc), (yyvsp[(4) - (4)].val));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=(yyvsp[(2) - (4)].val);v2=dispatch1(dyna_symbol,v1);v3=v2;v4=(yyvsp[(4) - (4)].val);v5=dispatch2(assoc_new,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 720:
#line 5339 "ripper.y"
    {
#if 0
                        if (nd_type((yyvsp[(2) - (2)].val)) == NODE_HASH &&
                            !((yyvsp[(2) - (2)].val)->nd_head && (yyvsp[(2) - (2)].val)->nd_head->nd_alen)) {
                            static VALUE empty_hash;
                            if (!empty_hash) {
                                empty_hash = rb_obj_freeze(rb_hash_new());
                                rb_gc_register_mark_object(empty_hash);
                            }
                            (yyval.val) = list_append(p, NEW_LIST(0, &(yyloc)), NEW_LIT(empty_hash, &(yyloc)));
                        }
                        else
                            (yyval.val) = list_append(p, NEW_LIST(0, &(yyloc)), (yyvsp[(2) - (2)].val));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(assoc_splat,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 746:
#line 5404 "ripper.y"
    {yyerrok;token_flush(p);;}
    break;

  case 747:
#line 5405 "ripper.y"
    {token_flush(p);;}
    break;

  case 749:
#line 5409 "ripper.y"
    {yyerrok;;}
    break;

  case 750:
#line 5413 "ripper.y"
    {
			(yyval.val) = Qnull;
		    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 11863 "ripper.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, p, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (p, 0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (p, yymsg, yystate, yychar);
	    yyerror (&yylloc, p, yymsg);
	  }
	else
	  {
	    yyerror (&yylloc, p, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, &yylloc, p);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, p);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, p, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc, p);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, p);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 5417 "ripper.y"

# undef p
# undef yylex
# undef yylval
# define yylval  (*p->lval)

static int regx_options(struct parser_params*);
static int tokadd_string(struct parser_params*,int,int,int,long*,rb_encoding**,rb_encoding**);
static void tokaddmbc(struct parser_params *p, int c, rb_encoding *enc);
static enum yytokentype parse_string(struct parser_params*,rb_strterm_literal_t*);
static enum yytokentype here_document(struct parser_params*,rb_strterm_heredoc_t*);

#ifndef RIPPER
# define set_yylval_node(x) {				\
  YYLTYPE _cur_loc;					\
  rb_parser_set_location(p, &_cur_loc);			\
  yylval.node = (x);					\
}
# define set_yylval_str(x) \
do { \
  set_yylval_node(NEW_STR(x, &_cur_loc)); \
  RB_OBJ_WRITTEN(p->ast, Qnil, x); \
} while(0)
# define set_yylval_literal(x) \
do { \
  set_yylval_node(NEW_LIT(x, &_cur_loc)); \
  RB_OBJ_WRITTEN(p->ast, Qnil, x); \
} while(0)
# define set_yylval_num(x) (yylval.num = (x))
# define set_yylval_id(x)  (yylval.id = (x))
# define set_yylval_name(x)  (yylval.id = (x))
# define yylval_id() (yylval.id)
#else
static inline VALUE
ripper_yylval_id(struct parser_params *p, ID x)
{
    return ripper_new_yylval(p, x, ID2SYM(x), 0);
}
# define set_yylval_str(x) (yylval.val = add_mark_object(p, (x)))
# define set_yylval_num(x) (yylval.val = ripper_new_yylval(p, (x), 0, 0))
# define set_yylval_id(x)  (void)(x)
# define set_yylval_name(x) (void)(yylval.val = ripper_yylval_id(p, x))
# define set_yylval_literal(x) add_mark_object(p, (x))
# define set_yylval_node(x) (void)(x)
# define yylval_id() yylval.id
# define _cur_loc NULL_LOC /* dummy */
#endif

#define set_yylval_noname() set_yylval_id(keyword_nil)

#ifndef RIPPER
#define literal_flush(p, ptr) ((p)->lex.ptok = (ptr))
#define dispatch_scan_event(p, t) ((void)0)
#define dispatch_delayed_token(p, t) ((void)0)
#define has_delayed_token(p) (0)
#else
#define literal_flush(p, ptr) ((void)(ptr))

#define yylval_rval (*(RB_TYPE_P(yylval.val, T_NODE) ? &yylval.node->nd_rval : &yylval.val))

static inline VALUE
intern_sym(const char *name)
{
    ID id = rb_intern_const(name);
    return ID2SYM(id);
}

static int
ripper_has_scan_event(struct parser_params *p)
{
    if (p->lex.pcur < p->lex.ptok) rb_raise(rb_eRuntimeError, "lex.pcur < lex.ptok");
    return p->lex.pcur > p->lex.ptok;
}

static VALUE
ripper_scan_event_val(struct parser_params *p, enum yytokentype t)
{
    VALUE str = STR_NEW(p->lex.ptok, p->lex.pcur - p->lex.ptok);
    VALUE rval = ripper_dispatch1(p, ripper_token2eventid(t), str);
    token_flush(p);
    return rval;
}

static void
ripper_dispatch_scan_event(struct parser_params *p, enum yytokentype t)
{
    if (!ripper_has_scan_event(p)) return;
    add_mark_object(p, yylval_rval = ripper_scan_event_val(p, t));
}
#define dispatch_scan_event(p, t) ripper_dispatch_scan_event(p, t)

static void
ripper_dispatch_delayed_token(struct parser_params *p, enum yytokentype t)
{
    int saved_line = p->ruby_sourceline;
    const char *saved_tokp = p->lex.ptok;

    if (NIL_P(p->delayed.token)) return;
    p->ruby_sourceline = p->delayed.line;
    p->lex.ptok = p->lex.pbeg + p->delayed.col;
    add_mark_object(p, yylval_rval = ripper_dispatch1(p, ripper_token2eventid(t), p->delayed.token));
    p->delayed.token = Qnil;
    p->ruby_sourceline = saved_line;
    p->lex.ptok = saved_tokp;
}
#define dispatch_delayed_token(p, t) ripper_dispatch_delayed_token(p, t)
#define has_delayed_token(p) (!NIL_P(p->delayed.token))
#endif /* RIPPER */

#include "ruby/regex.h"
#include "ruby/util.h"

static inline int
is_identchar(const char *ptr, const char *MAYBE_UNUSED(ptr_end), rb_encoding *enc)
{
    return rb_enc_isalnum((unsigned char)*ptr, enc) || *ptr == '_' || !ISASCII(*ptr);
}

static inline int
parser_is_identchar(struct parser_params *p)
{
    return !(p)->eofp && is_identchar(p->lex.pcur-1, p->lex.pend, p->enc);
}

static inline int
parser_isascii(struct parser_params *p)
{
    return ISASCII(*(p->lex.pcur-1));
}

static void
token_info_setup(token_info *ptinfo, const char *ptr, const rb_code_location_t *loc)
{
    int column = 1, nonspc = 0, i;
    for (i = 0; i < loc->beg_pos.column; i++, ptr++) {
	if (*ptr == '\t') {
	    column = (((column - 1) / TAB_WIDTH) + 1) * TAB_WIDTH;
	}
	column++;
	if (*ptr != ' ' && *ptr != '\t') {
	    nonspc = 1;
	}
    }

    ptinfo->beg = loc->beg_pos;
    ptinfo->indent = column;
    ptinfo->nonspc = nonspc;
}

static void
token_info_push(struct parser_params *p, const char *token, const rb_code_location_t *loc)
{
    token_info *ptinfo;

    if (!p->token_info_enabled) return;
    ptinfo = ALLOC(token_info);
    ptinfo->token = token;
    ptinfo->next = p->token_info;
    token_info_setup(ptinfo, p->lex.pbeg, loc);

    p->token_info = ptinfo;
}

static void
token_info_pop(struct parser_params *p, const char *token, const rb_code_location_t *loc)
{
    token_info *ptinfo_beg = p->token_info;

    if (!ptinfo_beg) return;
    p->token_info = ptinfo_beg->next;

    /* indentation check of matched keywords (begin..end, if..end, etc.) */
    token_info_warn(p, token, ptinfo_beg, 1, loc);
    ruby_sized_xfree(ptinfo_beg, sizeof(*ptinfo_beg));
}

static void
token_info_warn(struct parser_params *p, const char *token, token_info *ptinfo_beg, int same, const rb_code_location_t *loc)
{
    token_info ptinfo_end_body, *ptinfo_end = &ptinfo_end_body;
    if (!p->token_info_enabled) return;
    if (!ptinfo_beg) return;
    token_info_setup(ptinfo_end, p->lex.pbeg, loc);
    if (ptinfo_beg->beg.lineno == ptinfo_end->beg.lineno) return; /* ignore one-line block */
    if (ptinfo_beg->nonspc || ptinfo_end->nonspc) return; /* ignore keyword in the middle of a line */
    if (ptinfo_beg->indent == ptinfo_end->indent) return; /* the indents are matched */
    if (!same && ptinfo_beg->indent < ptinfo_end->indent) return;
    rb_warn3L(ptinfo_end->beg.lineno,
	      "mismatched indentations at '%s' with '%s' at %d",
	      WARN_S(token), WARN_S(ptinfo_beg->token), WARN_I(ptinfo_beg->beg.lineno));
}

static int
parser_precise_mbclen(struct parser_params *p, const char *ptr)
{
    int len = rb_enc_precise_mbclen(ptr, p->lex.pend, p->enc);
    if (!MBCLEN_CHARFOUND_P(len)) {
	compile_error(p, "invalid multibyte char (%s)", rb_enc_name(p->enc));
	return -1;
    }
    return len;
}

#ifndef RIPPER
static void ruby_show_error_line(VALUE errbuf, const YYLTYPE *yylloc, int lineno, VALUE str);

static inline void
parser_show_error_line(struct parser_params *p, const YYLTYPE *yylloc)
{
    ruby_show_error_line(p->error_buffer, yylloc, p->ruby_sourceline, p->lex.lastline);
}

static int
parser_yyerror(struct parser_params *p, const YYLTYPE *yylloc, const char *msg)
{
    YYLTYPE current;

    if (!yylloc) {
	yylloc = RUBY_SET_YYLLOC(current);
    }
    else if ((p->ruby_sourceline != yylloc->beg_pos.lineno &&
	      p->ruby_sourceline != yylloc->end_pos.lineno) ||
	     (yylloc->beg_pos.lineno == yylloc->end_pos.lineno &&
	      yylloc->beg_pos.column == yylloc->end_pos.column)) {
	yylloc = 0;
    }
    compile_error(p, "%s", msg);
    parser_show_error_line(p, yylloc);
    return 0;
}

static void
ruby_show_error_line(VALUE errbuf, const YYLTYPE *yylloc, int lineno, VALUE str)
{
    VALUE mesg;
    const int max_line_margin = 30;
    const char *ptr, *ptr_end, *pt, *pb;
    const char *pre = "", *post = "", *pend;
    const char *code = "", *caret = "";
    const char *lim;
    const char *const pbeg = RSTRING_PTR(str);
    char *buf;
    long len;
    int i;

    if (!yylloc) return;
    pend = RSTRING_END(str);
    if (pend > pbeg && pend[-1] == '\n') {
	if (--pend > pbeg && pend[-1] == '\r') --pend;
    }

    pt = pend;
    if (lineno == yylloc->end_pos.lineno &&
	(pend - pbeg) > yylloc->end_pos.column) {
	pt = pbeg + yylloc->end_pos.column;
    }

    ptr = ptr_end = pt;
    lim = ptr - pbeg > max_line_margin ? ptr - max_line_margin : pbeg;
    while ((lim < ptr) && (*(ptr-1) != '\n')) ptr--;

    lim = pend - ptr_end > max_line_margin ? ptr_end + max_line_margin : pend;
    while ((ptr_end < lim) && (*ptr_end != '\n') && (*ptr_end != '\r')) ptr_end++;

    len = ptr_end - ptr;
    if (len > 4) {
	if (ptr > pbeg) {
	    ptr = rb_enc_prev_char(pbeg, ptr, pt, rb_enc_get(str));
	    if (ptr > pbeg) pre = "...";
	}
	if (ptr_end < pend) {
	    ptr_end = rb_enc_prev_char(pt, ptr_end, pend, rb_enc_get(str));
	    if (ptr_end < pend) post = "...";
	}
    }
    pb = pbeg;
    if (lineno == yylloc->beg_pos.lineno) {
	pb += yylloc->beg_pos.column;
	if (pb > pt) pb = pt;
    }
    if (pb < ptr) pb = ptr;
    if (len <= 4 && yylloc->beg_pos.lineno == yylloc->end_pos.lineno) {
	return;
    }
    if (RTEST(errbuf)) {
	mesg = rb_attr_get(errbuf, idMesg);
	if (RSTRING_LEN(mesg) > 0 && *(RSTRING_END(mesg)-1) != '\n')
	    rb_str_cat_cstr(mesg, "\n");
    }
    else {
	mesg = rb_enc_str_new(0, 0, rb_enc_get(str));
    }
    if (!errbuf && rb_stderr_tty_p()) {
#define CSI_BEGIN "\033["
#define CSI_SGR "m"
	rb_str_catf(mesg,
		    CSI_BEGIN""CSI_SGR"%s" /* pre */
		    CSI_BEGIN"1"CSI_SGR"%.*s"
		    CSI_BEGIN"1;4"CSI_SGR"%.*s"
		    CSI_BEGIN";1"CSI_SGR"%.*s"
		    CSI_BEGIN""CSI_SGR"%s" /* post */
		    "\n",
		    pre,
		    (int)(pb - ptr), ptr,
		    (int)(pt - pb), pb,
		    (int)(ptr_end - pt), pt,
		    post);
    }
    else {
	char *p2;

	len = ptr_end - ptr;
	lim = pt < pend ? pt : pend;
	i = (int)(lim - ptr);
	buf = ALLOCA_N(char, i+2);
	code = ptr;
	caret = p2 = buf;
	if (ptr <= pb) {
	    while (ptr < pb) {
		*p2++ = *ptr++ == '\t' ? '\t' : ' ';
	    }
	    *p2++ = '^';
	    ptr++;
	}
	if (lim > ptr) {
	    memset(p2, '~', (lim - ptr));
	    p2 += (lim - ptr);
	}
	*p2 = '\0';
	rb_str_catf(mesg, "%s%.*s%s\n""%s%s\n",
		    pre, (int)len, code, post,
		    pre, caret);
    }
    if (!errbuf) rb_write_error_str(mesg);
}
#else
static int
parser_yyerror(struct parser_params *p, const YYLTYPE *yylloc, const char *msg)
{
    dispatch1(parse_error, STR_NEW2(msg));
    ripper_error(p);
    return 0;
}

static inline void
parser_show_error_line(struct parser_params *p, const YYLTYPE *yylloc)
{
}
#endif /* !RIPPER */

#ifndef RIPPER
static int
vtable_size(const struct vtable *tbl)
{
    if (!DVARS_TERMINAL_P(tbl)) {
	return tbl->pos;
    }
    else {
	return 0;
    }
}
#endif

static struct vtable *
vtable_alloc_gen(struct parser_params *p, int line, struct vtable *prev)
{
    struct vtable *tbl = ALLOC(struct vtable);
    tbl->pos = 0;
    tbl->capa = 8;
    tbl->tbl = ALLOC_N(ID, tbl->capa);
    tbl->prev = prev;
#ifndef RIPPER
    if (p->debug) {
	rb_parser_printf(p, "vtable_alloc:%d: %p\n", line, (void *)tbl);
    }
#endif
    return tbl;
}
#define vtable_alloc(prev) vtable_alloc_gen(p, __LINE__, prev)

static void
vtable_free_gen(struct parser_params *p, int line, const char *name,
		struct vtable *tbl)
{
#ifndef RIPPER
    if (p->debug) {
	rb_parser_printf(p, "vtable_free:%d: %s(%p)\n", line, name, (void *)tbl);
    }
#endif
    if (!DVARS_TERMINAL_P(tbl)) {
	if (tbl->tbl) {
	    ruby_sized_xfree(tbl->tbl, tbl->capa * sizeof(ID));
	}
	ruby_sized_xfree(tbl, sizeof(tbl));
    }
}
#define vtable_free(tbl) vtable_free_gen(p, __LINE__, #tbl, tbl)

static void
vtable_add_gen(struct parser_params *p, int line, const char *name,
	       struct vtable *tbl, ID id)
{
#ifndef RIPPER
    if (p->debug) {
	rb_parser_printf(p, "vtable_add:%d: %s(%p), %s\n",
			 line, name, (void *)tbl, rb_id2name(id));
    }
#endif
    if (DVARS_TERMINAL_P(tbl)) {
	rb_parser_fatal(p, "vtable_add: vtable is not allocated (%p)", (void *)tbl);
	return;
    }
    if (tbl->pos == tbl->capa) {
	tbl->capa = tbl->capa * 2;
	SIZED_REALLOC_N(tbl->tbl, ID, tbl->capa, tbl->pos);
    }
    tbl->tbl[tbl->pos++] = id;
}
#define vtable_add(tbl, id) vtable_add_gen(p, __LINE__, #tbl, tbl, id)

#ifndef RIPPER
static void
vtable_pop_gen(struct parser_params *p, int line, const char *name,
	       struct vtable *tbl, int n)
{
    if (p->debug) {
	rb_parser_printf(p, "vtable_pop:%d: %s(%p), %d\n",
			 line, name, (void *)tbl, n);
    }
    if (tbl->pos < n) {
	rb_parser_fatal(p, "vtable_pop: unreachable (%d < %d)", tbl->pos, n);
	return;
    }
    tbl->pos -= n;
}
#define vtable_pop(tbl, n) vtable_pop_gen(p, __LINE__, #tbl, tbl, n)
#endif

static int
vtable_included(const struct vtable * tbl, ID id)
{
    int i;

    if (!DVARS_TERMINAL_P(tbl)) {
	for (i = 0; i < tbl->pos; i++) {
	    if (tbl->tbl[i] == id) {
		return i+1;
	    }
	}
    }
    return 0;
}

static void parser_prepare(struct parser_params *p);

#ifndef RIPPER
static NODE *parser_append_options(struct parser_params *p, NODE *node);

static VALUE
debug_lines(VALUE fname)
{
    ID script_lines;
    CONST_ID(script_lines, "SCRIPT_LINES__");
    if (rb_const_defined_at(rb_cObject, script_lines)) {
	VALUE hash = rb_const_get_at(rb_cObject, script_lines);
	if (RB_TYPE_P(hash, T_HASH)) {
	    VALUE lines = rb_ary_new();
	    rb_hash_aset(hash, fname, lines);
	    return lines;
	}
    }
    return 0;
}

static int
e_option_supplied(struct parser_params *p)
{
    return strcmp(p->ruby_sourcefile, "-e") == 0;
}

static VALUE
yycompile0(VALUE arg)
{
    int n;
    NODE *tree;
    struct parser_params *p = (struct parser_params *)arg;
    VALUE cov = Qfalse;

    if (!compile_for_eval && !NIL_P(p->ruby_sourcefile_string)) {
	p->debug_lines = debug_lines(p->ruby_sourcefile_string);
	if (p->debug_lines && p->ruby_sourceline > 0) {
	    VALUE str = STR_NEW0();
	    n = p->ruby_sourceline;
	    do {
		rb_ary_push(p->debug_lines, str);
	    } while (--n);
	}

	if (!e_option_supplied(p)) {
	    cov = Qtrue;
	}
    }

    parser_prepare(p);
#define RUBY_DTRACE_PARSE_HOOK(name) \
    if (RUBY_DTRACE_PARSE_##name##_ENABLED()) { \
	RUBY_DTRACE_PARSE_##name(p->ruby_sourcefile, p->ruby_sourceline); \
    }
    RUBY_DTRACE_PARSE_HOOK(BEGIN);
    n = yyparse(p);
    RUBY_DTRACE_PARSE_HOOK(END);
    p->debug_lines = 0;

    p->lex.strterm = 0;
    p->lex.pcur = p->lex.pbeg = p->lex.pend = 0;
    p->lex.prevline = p->lex.lastline = p->lex.nextline = 0;
    if (n || p->error_p) {
	VALUE mesg = p->error_buffer;
	if (!mesg) {
	    mesg = rb_class_new_instance(0, 0, rb_eSyntaxError);
	}
	rb_set_errinfo(mesg);
	return FALSE;
    }
    tree = p->eval_tree;
    if (!tree) {
	tree = NEW_NIL(&NULL_LOC);
    }
    else {
	VALUE opt = p->compile_option;
	NODE *prelude;
	NODE *body = parser_append_options(p, tree->nd_body);
	if (!opt) opt = rb_obj_hide(rb_ident_hash_new());
	rb_hash_aset(opt, rb_sym_intern_ascii_cstr("coverage_enabled"), cov);
	prelude = block_append(p, p->eval_tree_begin, body);
	tree->nd_body = prelude;
        RB_OBJ_WRITE(p->ast, &p->ast->body.compile_option, opt);
    }
    p->ast->body.root = tree;
    p->ast->body.line_count = p->line_count;
    return TRUE;
}

static rb_ast_t *
yycompile(VALUE vparser, struct parser_params *p, VALUE fname, int line)
{
    rb_ast_t *ast;
    if (NIL_P(fname)) {
	p->ruby_sourcefile_string = Qnil;
	p->ruby_sourcefile = "(none)";
    }
    else {
	p->ruby_sourcefile_string = rb_fstring(fname);
	p->ruby_sourcefile = StringValueCStr(fname);
    }
    p->ruby_sourceline = line - 1;

    p->ast = ast = rb_ast_new();
    rb_suppress_tracing(yycompile0, (VALUE)p);
    p->ast = 0;
    RB_GC_GUARD(vparser); /* prohibit tail call optimization */

    return ast;
}
#endif /* !RIPPER */

static rb_encoding *
must_be_ascii_compatible(VALUE s)
{
    rb_encoding *enc = rb_enc_get(s);
    if (!rb_enc_asciicompat(enc)) {
	rb_raise(rb_eArgError, "invalid source encoding");
    }
    return enc;
}

static VALUE
lex_get_str(struct parser_params *p, VALUE s)
{
    char *beg, *end, *start;
    long len;

    beg = RSTRING_PTR(s);
    len = RSTRING_LEN(s);
    start = beg;
    if (p->lex.gets_.ptr) {
	if (len == p->lex.gets_.ptr) return Qnil;
	beg += p->lex.gets_.ptr;
	len -= p->lex.gets_.ptr;
    }
    end = memchr(beg, '\n', len);
    if (end) len = ++end - beg;
    p->lex.gets_.ptr += len;
    return rb_str_subseq(s, beg - start, len);
}

static VALUE
lex_getline(struct parser_params *p)
{
    VALUE line = (*p->lex.gets)(p, p->lex.input);
    if (NIL_P(line)) return line;
    must_be_ascii_compatible(line);
#ifndef RIPPER
    if (p->debug_lines) {
	rb_enc_associate(line, p->enc);
	rb_ary_push(p->debug_lines, line);
    }
#endif
    p->line_count++;
    return line;
}

static const rb_data_type_t parser_data_type;

#ifndef RIPPER
static rb_ast_t*
parser_compile_string(VALUE vparser, VALUE fname, VALUE s, int line)
{
    struct parser_params *p;

    TypedData_Get_Struct(vparser, struct parser_params, &parser_data_type, p);

    p->lex.gets = lex_get_str;
    p->lex.gets_.ptr = 0;
    p->lex.input = rb_str_new_frozen(s);
    p->lex.pbeg = p->lex.pcur = p->lex.pend = 0;

    return yycompile(vparser, p, fname, line);
}

rb_ast_t*
rb_parser_compile_string(VALUE vparser, const char *f, VALUE s, int line)
{
    return rb_parser_compile_string_path(vparser, rb_filesystem_str_new_cstr(f), s, line);
}

rb_ast_t*
rb_parser_compile_string_path(VALUE vparser, VALUE f, VALUE s, int line)
{
    must_be_ascii_compatible(s);
    return parser_compile_string(vparser, f, s, line);
}

VALUE rb_io_gets_internal(VALUE io);

static VALUE
lex_io_gets(struct parser_params *p, VALUE io)
{
    return rb_io_gets_internal(io);
}

rb_ast_t*
rb_parser_compile_file_path(VALUE vparser, VALUE fname, VALUE file, int start)
{
    struct parser_params *p;

    TypedData_Get_Struct(vparser, struct parser_params, &parser_data_type, p);

    p->lex.gets = lex_io_gets;
    p->lex.input = file;
    p->lex.pbeg = p->lex.pcur = p->lex.pend = 0;

    return yycompile(vparser, p, fname, start);
}

static VALUE
lex_generic_gets(struct parser_params *p, VALUE input)
{
    return (*p->lex.gets_.call)(input, p->line_count);
}

rb_ast_t*
rb_parser_compile_generic(VALUE vparser, VALUE (*lex_gets)(VALUE, int), VALUE fname, VALUE input, int start)
{
    struct parser_params *p;

    TypedData_Get_Struct(vparser, struct parser_params, &parser_data_type, p);

    p->lex.gets = lex_generic_gets;
    p->lex.gets_.call = lex_gets;
    p->lex.input = input;
    p->lex.pbeg = p->lex.pcur = p->lex.pend = 0;

    return yycompile(vparser, p, fname, start);
}
#endif  /* !RIPPER */

#define STR_FUNC_ESCAPE 0x01
#define STR_FUNC_EXPAND 0x02
#define STR_FUNC_REGEXP 0x04
#define STR_FUNC_QWORDS 0x08
#define STR_FUNC_SYMBOL 0x10
#define STR_FUNC_INDENT 0x20
#define STR_FUNC_LABEL  0x40
#define STR_FUNC_LIST   0x4000
#define STR_FUNC_TERM   0x8000

enum string_type {
    str_label  = STR_FUNC_LABEL,
    str_squote = (0),
    str_dquote = (STR_FUNC_EXPAND),
    str_xquote = (STR_FUNC_EXPAND),
    str_regexp = (STR_FUNC_REGEXP|STR_FUNC_ESCAPE|STR_FUNC_EXPAND),
    str_sword  = (STR_FUNC_QWORDS|STR_FUNC_LIST),
    str_dword  = (STR_FUNC_QWORDS|STR_FUNC_EXPAND|STR_FUNC_LIST),
    str_ssym   = (STR_FUNC_SYMBOL),
    str_dsym   = (STR_FUNC_SYMBOL|STR_FUNC_EXPAND)
};

static VALUE
parser_str_new(const char *ptr, long len, rb_encoding *enc, int func, rb_encoding *enc0)
{
    VALUE str;

    str = rb_enc_str_new(ptr, len, enc);
    if (!(func & STR_FUNC_REGEXP) && rb_enc_asciicompat(enc)) {
	if (rb_enc_str_coderange(str) == ENC_CODERANGE_7BIT) {
	}
	else if (enc0 == rb_usascii_encoding() && enc != rb_utf8_encoding()) {
	    rb_enc_associate(str, rb_ascii8bit_encoding());
	}
    }

    return str;
}

#define lex_goto_eol(p) ((p)->lex.pcur = (p)->lex.pend)
#define lex_eol_p(p) ((p)->lex.pcur >= (p)->lex.pend)
#define lex_eol_n_p(p,n) ((p)->lex.pcur+(n) >= (p)->lex.pend)
#define peek(p,c) peek_n(p, (c), 0)
#define peek_n(p,c,n) (!lex_eol_n_p(p, n) && (c) == (unsigned char)(p)->lex.pcur[n])
#define peekc(p) peekc_n(p, 0)
#define peekc_n(p,n) (lex_eol_n_p(p, n) ? -1 : (unsigned char)(p)->lex.pcur[n])

#ifdef RIPPER
static void
add_delayed_token(struct parser_params *p, const char *tok, const char *end)
{
    if (tok < end) {
	if (!has_delayed_token(p)) {
	    p->delayed.token = rb_str_buf_new(end - tok);
	    rb_enc_associate(p->delayed.token, p->enc);
	    p->delayed.line = p->ruby_sourceline;
	    p->delayed.col = rb_long2int(tok - p->lex.pbeg);
	}
	rb_str_buf_cat(p->delayed.token, tok, end - tok);
	p->lex.ptok = end;
    }
}
#else
#define add_delayed_token(p, tok, end) ((void)(tok), (void)(end))
#endif

static int
nextline(struct parser_params *p)
{
    VALUE v = p->lex.nextline;
    p->lex.nextline = 0;
    if (!v) {
	if (p->eofp)
	    return -1;

	if (p->lex.pend > p->lex.pbeg && *(p->lex.pend-1) != '\n') {
	    goto end_of_input;
	}

	if (!p->lex.input || NIL_P(v = lex_getline(p))) {
	  end_of_input:
	    p->eofp = 1;
	    lex_goto_eol(p);
	    return -1;
	}
	p->cr_seen = FALSE;
    }
    else if (NIL_P(v)) {
	/* after here-document without terminator */
	goto end_of_input;
    }
    add_delayed_token(p, p->lex.ptok, p->lex.pend);
    if (p->heredoc_end > 0) {
	p->ruby_sourceline = p->heredoc_end;
	p->heredoc_end = 0;
    }
    p->ruby_sourceline++;
    p->lex.pbeg = p->lex.pcur = RSTRING_PTR(v);
    p->lex.pend = p->lex.pcur + RSTRING_LEN(v);
    token_flush(p);
    p->lex.prevline = p->lex.lastline;
    p->lex.lastline = v;
    return 0;
}

static int
parser_cr(struct parser_params *p, int c)
{
    if (peek(p, '\n')) {
	p->lex.pcur++;
	c = '\n';
    }
    else if (!p->cr_seen) {
	p->cr_seen = TRUE;
	/* carried over with p->lex.nextline for nextc() */
	rb_warn0("encountered \\r in middle of line, treated as a mere space");
    }
    return c;
}

static inline int
nextc(struct parser_params *p)
{
    int c;

    if (UNLIKELY((p->lex.pcur == p->lex.pend) || p->eofp || RTEST(p->lex.nextline))) {
	if (nextline(p)) return -1;
    }
    c = (unsigned char)*p->lex.pcur++;
    if (UNLIKELY(c == '\r')) {
	c = parser_cr(p, c);
    }

    return c;
}

static void
pushback(struct parser_params *p, int c)
{
    if (c == -1) return;
    p->lex.pcur--;
    if (p->lex.pcur > p->lex.pbeg && p->lex.pcur[0] == '\n' && p->lex.pcur[-1] == '\r') {
	p->lex.pcur--;
    }
}

#define was_bol(p) ((p)->lex.pcur == (p)->lex.pbeg + 1)

#define tokfix(p) ((p)->tokenbuf[(p)->tokidx]='\0')
#define tok(p) (p)->tokenbuf
#define toklen(p) (p)->tokidx

static int
looking_at_eol_p(struct parser_params *p)
{
    const char *ptr = p->lex.pcur;
    while (ptr < p->lex.pend) {
	int c = (unsigned char)*ptr++;
	int eol = (c == '\n' || c == '#');
	if (eol || !ISSPACE(c)) {
	    return eol;
	}
    }
    return TRUE;
}

static char*
newtok(struct parser_params *p)
{
    p->tokidx = 0;
    p->tokline = p->ruby_sourceline;
    if (!p->tokenbuf) {
	p->toksiz = 60;
	p->tokenbuf = ALLOC_N(char, 60);
    }
    if (p->toksiz > 4096) {
	p->toksiz = 60;
	REALLOC_N(p->tokenbuf, char, 60);
    }
    return p->tokenbuf;
}

static char *
tokspace(struct parser_params *p, int n)
{
    p->tokidx += n;

    if (p->tokidx >= p->toksiz) {
	do {p->toksiz *= 2;} while (p->toksiz < p->tokidx);
	REALLOC_N(p->tokenbuf, char, p->toksiz);
    }
    return &p->tokenbuf[p->tokidx-n];
}

static void
tokadd(struct parser_params *p, int c)
{
    p->tokenbuf[p->tokidx++] = (char)c;
    if (p->tokidx >= p->toksiz) {
	p->toksiz *= 2;
	REALLOC_N(p->tokenbuf, char, p->toksiz);
    }
}

static int
tok_hex(struct parser_params *p, size_t *numlen)
{
    int c;

    c = scan_hex(p->lex.pcur, 2, numlen);
    if (!*numlen) {
	yyerror0("invalid hex escape");
	token_flush(p);
	return 0;
    }
    p->lex.pcur += *numlen;
    return c;
}

#define tokcopy(p, n) memcpy(tokspace(p, n), (p)->lex.pcur - (n), (n))

static int
escaped_control_code(int c)
{
    int c2 = 0;
    switch (c) {
      case ' ':
	c2 = 's';
	break;
      case '\n':
	c2 = 'n';
	break;
      case '\t':
	c2 = 't';
	break;
      case '\v':
	c2 = 'v';
	break;
      case '\r':
	c2 = 'r';
	break;
      case '\f':
	c2 = 'f';
	break;
    }
    return c2;
}

#define WARN_SPACE_CHAR(c, prefix) \
    rb_warn1("invalid character syntax; use "prefix"\\%c", WARN_I(c2))

static int
tokadd_codepoint(struct parser_params *p, rb_encoding **encp,
		 int regexp_literal, int wide)
{
    size_t numlen;
    int codepoint = scan_hex(p->lex.pcur, wide ? p->lex.pend - p->lex.pcur : 4, &numlen);
    literal_flush(p, p->lex.pcur);
    p->lex.pcur += numlen;
    if (wide ? (numlen == 0 || numlen > 6) : (numlen < 4))  {
	yyerror0("invalid Unicode escape");
	return wide && numlen > 0;
    }
    if (codepoint > 0x10ffff) {
	yyerror0("invalid Unicode codepoint (too large)");
	return wide;
    }
    if ((codepoint & 0xfffff800) == 0xd800) {
	yyerror0("invalid Unicode codepoint");
	return wide;
    }
    if (regexp_literal) {
	tokcopy(p, (int)numlen);
    }
    else if (codepoint >= 0x80) {
	rb_encoding *utf8 = rb_utf8_encoding();
	if (*encp && utf8 != *encp) {
	    YYLTYPE loc = RUBY_INIT_YYLLOC();
	    compile_error(p, "UTF-8 mixed within %s source", rb_enc_name(*encp));
	    parser_show_error_line(p, &loc);
	    return wide;
	}
	*encp = utf8;
	tokaddmbc(p, codepoint, *encp);
    }
    else {
	tokadd(p, codepoint);
    }
    return TRUE;
}

/* return value is for ?\u3042 */
static void
tokadd_utf8(struct parser_params *p, rb_encoding **encp,
	    int term, int symbol_literal, int regexp_literal)
{
    /*
     * If `term` is not -1, then we allow multiple codepoints in \u{}
     * upto `term` byte, otherwise we're parsing a character literal.
     * And then add the codepoints to the current token.
     */
    static const char multiple_codepoints[] = "Multiple codepoints at single character literal";

    const int open_brace = '{', close_brace = '}';

    if (regexp_literal) { tokadd(p, '\\'); tokadd(p, 'u'); }

    if (peek(p, open_brace)) {  /* handle \u{...} form */
	const char *second = NULL;
	int c, last = nextc(p);
	if (p->lex.pcur >= p->lex.pend) goto unterminated;
	while (ISSPACE(c = *p->lex.pcur) && ++p->lex.pcur < p->lex.pend);
	while (c != close_brace) {
	    if (c == term) goto unterminated;
	    if (second == multiple_codepoints)
		second = p->lex.pcur;
	    if (regexp_literal) tokadd(p, last);
	    if (!tokadd_codepoint(p, encp, regexp_literal, TRUE)) {
		break;
	    }
	    while (ISSPACE(c = *p->lex.pcur)) {
		if (++p->lex.pcur >= p->lex.pend) goto unterminated;
		last = c;
	    }
	    if (term == -1 && !second)
		second = multiple_codepoints;
	}

	if (c != close_brace) {
	  unterminated:
	    token_flush(p);
	    yyerror0("unterminated Unicode escape");
	    return;
	}
	if (second && second != multiple_codepoints) {
	    const char *pcur = p->lex.pcur;
	    p->lex.pcur = second;
	    dispatch_scan_event(p, tSTRING_CONTENT);
	    token_flush(p);
	    p->lex.pcur = pcur;
	    yyerror0(multiple_codepoints);
	    token_flush(p);
	}

	if (regexp_literal) tokadd(p, close_brace);
	nextc(p);
    }
    else {			/* handle \uxxxx form */
	if (!tokadd_codepoint(p, encp, regexp_literal, FALSE)) {
	    token_flush(p);
	    return;
	}
    }
}

#define ESCAPE_CONTROL 1
#define ESCAPE_META    2

static int
read_escape(struct parser_params *p, int flags, rb_encoding **encp)
{
    int c;
    size_t numlen;

    switch (c = nextc(p)) {
      case '\\':	/* Backslash */
	return c;

      case 'n':	/* newline */
	return '\n';

      case 't':	/* horizontal tab */
	return '\t';

      case 'r':	/* carriage-return */
	return '\r';

      case 'f':	/* form-feed */
	return '\f';

      case 'v':	/* vertical tab */
	return '\13';

      case 'a':	/* alarm(bell) */
	return '\007';

      case 'e':	/* escape */
	return 033;

      case '0': case '1': case '2': case '3': /* octal constant */
      case '4': case '5': case '6': case '7':
	pushback(p, c);
	c = scan_oct(p->lex.pcur, 3, &numlen);
	p->lex.pcur += numlen;
	return c;

      case 'x':	/* hex constant */
	c = tok_hex(p, &numlen);
	if (numlen == 0) return 0;
	return c;

      case 'b':	/* backspace */
	return '\010';

      case 's':	/* space */
	return ' ';

      case 'M':
	if (flags & ESCAPE_META) goto eof;
	if ((c = nextc(p)) != '-') {
	    goto eof;
	}
	if ((c = nextc(p)) == '\\') {
	    if (peek(p, 'u')) goto eof;
	    return read_escape(p, flags|ESCAPE_META, encp) | 0x80;
	}
	else if (c == -1 || !ISASCII(c)) goto eof;
	else {
	    int c2 = escaped_control_code(c);
	    if (c2) {
		if (ISCNTRL(c) || !(flags & ESCAPE_CONTROL)) {
		    WARN_SPACE_CHAR(c2, "\\M-");
		}
		else {
		    WARN_SPACE_CHAR(c2, "\\C-\\M-");
		}
	    }
	    else if (ISCNTRL(c)) goto eof;
	    return ((c & 0xff) | 0x80);
	}

      case 'C':
	if ((c = nextc(p)) != '-') {
	    goto eof;
	}
      case 'c':
	if (flags & ESCAPE_CONTROL) goto eof;
	if ((c = nextc(p))== '\\') {
	    if (peek(p, 'u')) goto eof;
	    c = read_escape(p, flags|ESCAPE_CONTROL, encp);
	}
	else if (c == '?')
	    return 0177;
	else if (c == -1 || !ISASCII(c)) goto eof;
	else {
	    int c2 = escaped_control_code(c);
	    if (c2) {
		if (ISCNTRL(c)) {
		    if (flags & ESCAPE_META) {
			WARN_SPACE_CHAR(c2, "\\M-");
		    }
		    else {
			WARN_SPACE_CHAR(c2, "");
		    }
		}
		else {
		    if (flags & ESCAPE_META) {
			WARN_SPACE_CHAR(c2, "\\M-\\C-");
		    }
		    else {
			WARN_SPACE_CHAR(c2, "\\C-");
		    }
		}
	    }
	    else if (ISCNTRL(c)) goto eof;
	}
	return c & 0x9f;

      eof:
      case -1:
        yyerror0("Invalid escape character syntax");
	token_flush(p);
	return '\0';

      default:
	return c;
    }
}

static void
tokaddmbc(struct parser_params *p, int c, rb_encoding *enc)
{
    int len = rb_enc_codelen(c, enc);
    rb_enc_mbcput(c, tokspace(p, len), enc);
}

static int
tokadd_escape(struct parser_params *p, rb_encoding **encp)
{
    int c;
    int flags = 0;
    size_t numlen;

  first:
    switch (c = nextc(p)) {
      case '\n':
	return 0;		/* just ignore */

      case '0': case '1': case '2': case '3': /* octal constant */
      case '4': case '5': case '6': case '7':
	{
	    ruby_scan_oct(--p->lex.pcur, 3, &numlen);
	    if (numlen == 0) goto eof;
	    p->lex.pcur += numlen;
	    tokcopy(p, (int)numlen + 1);
	}
	return 0;

      case 'x':	/* hex constant */
	{
	    tok_hex(p, &numlen);
	    if (numlen == 0) return -1;
	    tokcopy(p, (int)numlen + 2);
	}
	return 0;

      case 'M':
	if (flags & ESCAPE_META) goto eof;
	if ((c = nextc(p)) != '-') {
	    pushback(p, c);
	    goto eof;
	}
	tokcopy(p, 3);
	flags |= ESCAPE_META;
	goto escaped;

      case 'C':
	if (flags & ESCAPE_CONTROL) goto eof;
	if ((c = nextc(p)) != '-') {
	    pushback(p, c);
	    goto eof;
	}
	tokcopy(p, 3);
	goto escaped;

      case 'c':
	if (flags & ESCAPE_CONTROL) goto eof;
	tokcopy(p, 2);
	flags |= ESCAPE_CONTROL;
      escaped:
	if ((c = nextc(p)) == '\\') {
	    goto first;
	}
	else if (c == -1) goto eof;
	tokadd(p, c);
	return 0;

      eof:
      case -1:
        yyerror0("Invalid escape character syntax");
	token_flush(p);
	return -1;

      default:
	tokadd(p, '\\');
	tokadd(p, c);
    }
    return 0;
}

static int
regx_options(struct parser_params *p)
{
    int kcode = 0;
    int kopt = 0;
    int options = 0;
    int c, opt, kc;

    newtok(p);
    while (c = nextc(p), ISALPHA(c)) {
        if (c == 'o') {
            options |= RE_OPTION_ONCE;
        }
        else if (rb_char_to_option_kcode(c, &opt, &kc)) {
	    if (kc >= 0) {
		if (kc != rb_ascii8bit_encindex()) kcode = c;
		kopt = opt;
	    }
	    else {
		options |= opt;
	    }
        }
        else {
	    tokadd(p, c);
        }
    }
    options |= kopt;
    pushback(p, c);
    if (toklen(p)) {
	YYLTYPE loc = RUBY_INIT_YYLLOC();
	tokfix(p);
	compile_error(p, "unknown regexp option%s - %*s",
		      toklen(p) > 1 ? "s" : "", toklen(p), tok(p));
	parser_show_error_line(p, &loc);
    }
    return options | RE_OPTION_ENCODING(kcode);
}

static int
tokadd_mbchar(struct parser_params *p, int c)
{
    int len = parser_precise_mbclen(p, p->lex.pcur-1);
    if (len < 0) return -1;
    tokadd(p, c);
    p->lex.pcur += --len;
    if (len > 0) tokcopy(p, len);
    return c;
}

static inline int
simple_re_meta(int c)
{
    switch (c) {
      case '$': case '*': case '+': case '.':
      case '?': case '^': case '|':
      case ')': case ']': case '}': case '>':
	return TRUE;
      default:
	return FALSE;
    }
}

static int
parser_update_heredoc_indent(struct parser_params *p, int c)
{
    if (p->heredoc_line_indent == -1) {
	if (c == '\n') p->heredoc_line_indent = 0;
    }
    else {
	if (c == ' ') {
	    p->heredoc_line_indent++;
	    return TRUE;
	}
	else if (c == '\t') {
	    int w = (p->heredoc_line_indent / TAB_WIDTH) + 1;
	    p->heredoc_line_indent = w * TAB_WIDTH;
	    return TRUE;
	}
	else if (c != '\n') {
	    if (p->heredoc_indent > p->heredoc_line_indent) {
		p->heredoc_indent = p->heredoc_line_indent;
	    }
	    p->heredoc_line_indent = -1;
	}
    }
    return FALSE;
}

static void
parser_mixed_error(struct parser_params *p, rb_encoding *enc1, rb_encoding *enc2)
{
    YYLTYPE loc = RUBY_INIT_YYLLOC();
    const char *n1 = rb_enc_name(enc1), *n2 = rb_enc_name(enc2);
    compile_error(p, "%s mixed within %s source", n1, n2);
    parser_show_error_line(p, &loc);
}

static void
parser_mixed_escape(struct parser_params *p, const char *beg, rb_encoding *enc1, rb_encoding *enc2)
{
    const char *pos = p->lex.pcur;
    p->lex.pcur = beg;
    parser_mixed_error(p, enc1, enc2);
    p->lex.pcur = pos;
}

static int
tokadd_string(struct parser_params *p,
	      int func, int term, int paren, long *nest,
	      rb_encoding **encp, rb_encoding **enc)
{
    int c;
    bool erred = false;

#define mixed_error(enc1, enc2) \
    (void)(erred || (parser_mixed_error(p, enc1, enc2), erred = true))
#define mixed_escape(beg, enc1, enc2) \
    (void)(erred || (parser_mixed_escape(p, beg, enc1, enc2), erred = true))

    while ((c = nextc(p)) != -1) {
	if (p->heredoc_indent > 0) {
	    parser_update_heredoc_indent(p, c);
	}

	if (paren && c == paren) {
	    ++*nest;
	}
	else if (c == term) {
	    if (!nest || !*nest) {
		pushback(p, c);
		break;
	    }
	    --*nest;
	}
	else if ((func & STR_FUNC_EXPAND) && c == '#' && p->lex.pcur < p->lex.pend) {
	    int c2 = *p->lex.pcur;
	    if (c2 == '$' || c2 == '@' || c2 == '{') {
		pushback(p, c);
		break;
	    }
	}
	else if (c == '\\') {
	    literal_flush(p, p->lex.pcur - 1);
	    c = nextc(p);
	    switch (c) {
	      case '\n':
		if (func & STR_FUNC_QWORDS) break;
		if (func & STR_FUNC_EXPAND) {
		    if (!(func & STR_FUNC_INDENT) || (p->heredoc_indent < 0))
			continue;
		    if (c == term) {
			c = '\\';
			goto terminate;
		    }
		}
		tokadd(p, '\\');
		break;

	      case '\\':
		if (func & STR_FUNC_ESCAPE) tokadd(p, c);
		break;

	      case 'u':
		if ((func & STR_FUNC_EXPAND) == 0) {
		    tokadd(p, '\\');
		    break;
		}
		tokadd_utf8(p, enc, term,
			    func & STR_FUNC_SYMBOL,
			    func & STR_FUNC_REGEXP);
		continue;

	      default:
		if (c == -1) return -1;
		if (!ISASCII(c)) {
		    if ((func & STR_FUNC_EXPAND) == 0) tokadd(p, '\\');
		    goto non_ascii;
		}
		if (func & STR_FUNC_REGEXP) {
		    if (c == term && !simple_re_meta(c)) {
			tokadd(p, c);
			continue;
		    }
		    pushback(p, c);
		    if ((c = tokadd_escape(p, enc)) < 0)
			return -1;
		    if (*enc && *enc != *encp) {
			mixed_escape(p->lex.ptok+2, *enc, *encp);
		    }
		    continue;
		}
		else if (func & STR_FUNC_EXPAND) {
		    pushback(p, c);
		    if (func & STR_FUNC_ESCAPE) tokadd(p, '\\');
		    c = read_escape(p, 0, enc);
		}
		else if ((func & STR_FUNC_QWORDS) && ISSPACE(c)) {
		    /* ignore backslashed spaces in %w */
		}
		else if (c != term && !(paren && c == paren)) {
		    tokadd(p, '\\');
		    pushback(p, c);
		    continue;
		}
	    }
	}
	else if (!parser_isascii(p)) {
	  non_ascii:
	    if (!*enc) {
		*enc = *encp;
	    }
	    else if (*enc != *encp) {
		mixed_error(*enc, *encp);
		continue;
	    }
	    if (tokadd_mbchar(p, c) == -1) return -1;
	    continue;
	}
	else if ((func & STR_FUNC_QWORDS) && ISSPACE(c)) {
	    pushback(p, c);
	    break;
	}
        if (c & 0x80) {
	    if (!*enc) {
		*enc = *encp;
	    }
	    else if (*enc != *encp) {
		mixed_error(*enc, *encp);
		continue;
	    }
        }
	tokadd(p, c);
    }
  terminate:
    if (*enc) *encp = *enc;
    return c;
}

static inline rb_strterm_t *
new_strterm(VALUE v1, VALUE v2, VALUE v3, VALUE v0)
{
    return (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm, v1, v2, v3, v0);
}

/* imemo_parser_strterm for literal */
#define NEW_STRTERM(func, term, paren) \
    new_strterm((VALUE)(func), (VALUE)(paren), (VALUE)(term), 0)

#ifdef RIPPER
static void
flush_string_content(struct parser_params *p, rb_encoding *enc)
{
    VALUE content = yylval.val;
    if (!ripper_is_node_yylval(content))
	content = ripper_new_yylval(p, 0, 0, content);
    if (has_delayed_token(p)) {
	ptrdiff_t len = p->lex.pcur - p->lex.ptok;
	if (len > 0) {
	    rb_enc_str_buf_cat(p->delayed.token, p->lex.ptok, len, enc);
	}
	dispatch_delayed_token(p, tSTRING_CONTENT);
	p->lex.ptok = p->lex.pcur;
	RNODE(content)->nd_rval = yylval.val;
    }
    dispatch_scan_event(p, tSTRING_CONTENT);
    if (yylval.val != content)
	RNODE(content)->nd_rval = yylval.val;
    yylval.val = content;
}
#else
#define flush_string_content(p, enc) ((void)(enc))
#endif

RUBY_FUNC_EXPORTED const unsigned int ruby_global_name_punct_bits[(0x7e - 0x20 + 31) / 32];
/* this can be shared with ripper, since it's independent from struct
 * parser_params. */
#ifndef RIPPER
#define BIT(c, idx) (((c) / 32 - 1 == idx) ? (1U << ((c) % 32)) : 0)
#define SPECIAL_PUNCT(idx) ( \
	BIT('~', idx) | BIT('*', idx) | BIT('$', idx) | BIT('?', idx) | \
	BIT('!', idx) | BIT('@', idx) | BIT('/', idx) | BIT('\\', idx) | \
	BIT(';', idx) | BIT(',', idx) | BIT('.', idx) | BIT('=', idx) | \
	BIT(':', idx) | BIT('<', idx) | BIT('>', idx) | BIT('\"', idx) | \
	BIT('&', idx) | BIT('`', idx) | BIT('\'', idx) | BIT('+', idx) | \
	BIT('0', idx))
const unsigned int ruby_global_name_punct_bits[] = {
    SPECIAL_PUNCT(0),
    SPECIAL_PUNCT(1),
    SPECIAL_PUNCT(2),
};
#undef BIT
#undef SPECIAL_PUNCT
#endif

static enum yytokentype
parser_peek_variable_name(struct parser_params *p)
{
    int c;
    const char *ptr = p->lex.pcur;

    if (ptr + 1 >= p->lex.pend) return 0;
    c = *ptr++;
    switch (c) {
      case '$':
	if ((c = *ptr) == '-') {
	    if (++ptr >= p->lex.pend) return 0;
	    c = *ptr;
	}
	else if (is_global_name_punct(c) || ISDIGIT(c)) {
	    return tSTRING_DVAR;
	}
	break;
      case '@':
	if ((c = *ptr) == '@') {
	    if (++ptr >= p->lex.pend) return 0;
	    c = *ptr;
	}
	break;
      case '{':
	p->lex.pcur = ptr;
	p->command_start = TRUE;
	return tSTRING_DBEG;
      default:
	return 0;
    }
    if (!ISASCII(c) || c == '_' || ISALPHA(c))
	return tSTRING_DVAR;
    return 0;
}

#define IS_ARG() IS_lex_state(EXPR_ARG_ANY)
#define IS_END() IS_lex_state(EXPR_END_ANY)
#define IS_BEG() (IS_lex_state(EXPR_BEG_ANY) || IS_lex_state_all(EXPR_ARG|EXPR_LABELED))
#define IS_SPCARG(c) (IS_ARG() && space_seen && !ISSPACE(c))
#define IS_LABEL_POSSIBLE() (\
	(IS_lex_state(EXPR_LABEL|EXPR_ENDFN) && !cmd_state) || \
	IS_ARG())
#define IS_LABEL_SUFFIX(n) (peek_n(p, ':',(n)) && !peek_n(p, ':', (n)+1))
#define IS_AFTER_OPERATOR() IS_lex_state(EXPR_FNAME | EXPR_DOT)

static inline enum yytokentype
parser_string_term(struct parser_params *p, int func)
{
    p->lex.strterm = 0;
    if (func & STR_FUNC_REGEXP) {
	set_yylval_num(regx_options(p));
	dispatch_scan_event(p, tREGEXP_END);
	SET_LEX_STATE(EXPR_END);
	return tREGEXP_END;
    }
    if ((func & STR_FUNC_LABEL) && IS_LABEL_SUFFIX(0)) {
	nextc(p);
	SET_LEX_STATE(EXPR_BEG|EXPR_LABEL);
	return tLABEL_END;
    }
    SET_LEX_STATE(EXPR_END);
    return tSTRING_END;
}

static enum yytokentype
parse_string(struct parser_params *p, rb_strterm_literal_t *quote)
{
    int func = (int)quote->u1.func;
    int term = (int)quote->u3.term;
    int paren = (int)quote->u2.paren;
    int c, space = 0;
    rb_encoding *enc = p->enc;
    rb_encoding *base_enc = 0;
    VALUE lit;

    if (func & STR_FUNC_TERM) {
	if (func & STR_FUNC_QWORDS) nextc(p); /* delayed term */
	SET_LEX_STATE(EXPR_END);
	p->lex.strterm = 0;
	return func & STR_FUNC_REGEXP ? tREGEXP_END : tSTRING_END;
    }
    c = nextc(p);
    if ((func & STR_FUNC_QWORDS) && ISSPACE(c)) {
	do {c = nextc(p);} while (ISSPACE(c));
	space = 1;
    }
    if (func & STR_FUNC_LIST) {
	quote->u1.func &= ~STR_FUNC_LIST;
	space = 1;
    }
    if (c == term && !quote->u0.nest) {
	if (func & STR_FUNC_QWORDS) {
	    quote->u1.func |= STR_FUNC_TERM;
	    pushback(p, c); /* dispatch the term at tSTRING_END */
	    add_delayed_token(p, p->lex.ptok, p->lex.pcur);
	    return ' ';
	}
	return parser_string_term(p, func);
    }
    if (space) {
	pushback(p, c);
	add_delayed_token(p, p->lex.ptok, p->lex.pcur);
	return ' ';
    }
    newtok(p);
    if ((func & STR_FUNC_EXPAND) && c == '#') {
	int t = parser_peek_variable_name(p);
	if (t) return t;
	tokadd(p, '#');
	c = nextc(p);
    }
    pushback(p, c);
    if (tokadd_string(p, func, term, paren, &quote->u0.nest,
		      &enc, &base_enc) == -1) {
	if (p->eofp) {
#ifndef RIPPER
# define unterminated_literal(mesg) yyerror0(mesg)
#else
# define unterminated_literal(mesg) compile_error(p,  mesg)
#endif
	    literal_flush(p, p->lex.pcur);
	    if (func & STR_FUNC_QWORDS) {
		/* no content to add, bailing out here */
		unterminated_literal("unterminated list meets end of file");
		p->lex.strterm = 0;
		return tSTRING_END;
	    }
	    if (func & STR_FUNC_REGEXP) {
		unterminated_literal("unterminated regexp meets end of file");
	    }
	    else {
		unterminated_literal("unterminated string meets end of file");
	    }
	    quote->u1.func |= STR_FUNC_TERM;
	}
    }

    tokfix(p);
    lit = STR_NEW3(tok(p), toklen(p), enc, func);
    set_yylval_str(lit);
    flush_string_content(p, enc);

    return tSTRING_CONTENT;
}

static enum yytokentype
heredoc_identifier(struct parser_params *p)
{
    /*
     * term_len is length of `<<"END"` except `END`,
     * in this case term_len is 4 (<, <, " and ").
     */
    long len, offset = p->lex.pcur - p->lex.pbeg;
    int c = nextc(p), term, func = 0, quote = 0;
    enum yytokentype token = tSTRING_BEG;
    int indent = 0;

    if (c == '-') {
	c = nextc(p);
	func = STR_FUNC_INDENT;
	offset++;
    }
    else if (c == '~') {
	c = nextc(p);
	func = STR_FUNC_INDENT;
	offset++;
	indent = INT_MAX;
    }
    switch (c) {
      case '\'':
	func |= str_squote; goto quoted;
      case '"':
	func |= str_dquote; goto quoted;
      case '`':
	token = tXSTRING_BEG;
	func |= str_xquote; goto quoted;

      quoted:
	quote++;
	offset++;
	term = c;
	len = 0;
	while ((c = nextc(p)) != term) {
	    if (c == -1 || c == '\r' || c == '\n') {
		yyerror(NULL, p, "unterminated here document identifier");
		return -1;
	    }
	}
	break;

      default:
	if (!parser_is_identchar(p)) {
	    pushback(p, c);
	    if (func & STR_FUNC_INDENT) {
		pushback(p, indent > 0 ? '~' : '-');
	    }
	    return 0;
	}
	func |= str_dquote;
	do {
	    int n = parser_precise_mbclen(p, p->lex.pcur-1);
	    if (n < 0) return 0;
	    p->lex.pcur += --n;
	} while ((c = nextc(p)) != -1 && parser_is_identchar(p));
	pushback(p, c);
	break;
    }

    len = p->lex.pcur - (p->lex.pbeg + offset) - quote;
    if ((unsigned long)len >= HERETERM_LENGTH_MAX)
	yyerror(NULL, p, "too long here document identifier");
    dispatch_scan_event(p, tHEREDOC_BEG);
    lex_goto_eol(p);

    p->lex.strterm = new_strterm(0, 0, 0, p->lex.lastline);
    p->lex.strterm->flags |= STRTERM_HEREDOC;
    rb_strterm_heredoc_t *here = &p->lex.strterm->u.heredoc;
    here->offset = offset;
    here->sourceline = p->ruby_sourceline;
    here->length = (int)len;
    here->quote = quote;
    here->func = func;

    token_flush(p);
    p->heredoc_indent = indent;
    p->heredoc_line_indent = 0;
    return token;
}

static void
heredoc_restore(struct parser_params *p, rb_strterm_heredoc_t *here)
{
    VALUE line;

    p->lex.strterm = 0;
    line = here->lastline;
    p->lex.lastline = line;
    p->lex.pbeg = RSTRING_PTR(line);
    p->lex.pend = p->lex.pbeg + RSTRING_LEN(line);
    p->lex.pcur = p->lex.pbeg + here->offset + here->length + here->quote;
    p->lex.ptok = p->lex.pbeg + here->offset - here->quote;
    p->heredoc_end = p->ruby_sourceline;
    p->ruby_sourceline = (int)here->sourceline;
    if (p->eofp) p->lex.nextline = Qnil;
    p->eofp = 0;
}

static int
dedent_string(VALUE string, int width)
{
    char *str;
    long len;
    int i, col = 0;

    RSTRING_GETMEM(string, str, len);
    for (i = 0; i < len && col < width; i++) {
	if (str[i] == ' ') {
	    col++;
	}
	else if (str[i] == '\t') {
	    int n = TAB_WIDTH * (col / TAB_WIDTH + 1);
	    if (n > width) break;
	    col = n;
	}
	else {
	    break;
	}
    }
    if (!i) return 0;
    rb_str_modify(string);
    str = RSTRING_PTR(string);
    if (RSTRING_LEN(string) != len)
	rb_fatal("literal string changed: %+"PRIsVALUE, string);
    MEMMOVE(str, str + i, char, len - i);
    rb_str_set_len(string, len - i);
    return i;
}

#ifndef RIPPER
static NODE *
heredoc_dedent(struct parser_params *p, NODE *root)
{
    NODE *node, *str_node, *prev_node;
    int indent = p->heredoc_indent;
    VALUE prev_lit = 0;

    if (indent <= 0) return root;
    p->heredoc_indent = 0;
    if (!root) return root;

    prev_node = node = str_node = root;
    if (nd_type(root) == NODE_LIST) str_node = root->nd_head;

    while (str_node) {
	VALUE lit = str_node->nd_lit;
	if (str_node->flags & NODE_FL_NEWLINE) {
	    dedent_string(lit, indent);
	}
	if (!prev_lit) {
	    prev_lit = lit;
	}
	else if (!literal_concat0(p, prev_lit, lit)) {
	    return 0;
	}
	else {
	    NODE *end = node->nd_end;
	    node = prev_node->nd_next = node->nd_next;
	    if (!node) {
		if (nd_type(prev_node) == NODE_DSTR)
		    nd_set_type(prev_node, NODE_STR);
		break;
	    }
	    node->nd_end = end;
	    goto next_str;
	}

	str_node = 0;
	while ((node = (prev_node = node)->nd_next) != 0) {
	  next_str:
	    if (nd_type(node) != NODE_LIST) break;
	    if ((str_node = node->nd_head) != 0) {
		enum node_type type = nd_type(str_node);
		if (type == NODE_STR || type == NODE_DSTR) break;
		prev_lit = 0;
		str_node = 0;
	    }
	}
    }
    return root;
}
#else /* RIPPER */
static VALUE
heredoc_dedent(struct parser_params *p, VALUE array)
{
    int indent = p->heredoc_indent;

    if (indent <= 0) return array;
    p->heredoc_indent = 0;
    dispatch2(heredoc_dedent, array, INT2NUM(indent));
    return array;
}

/*
 *  call-seq:
 *    Ripper.dedent_string(input, width)   -> Integer
 *
 *  USE OF RIPPER LIBRARY ONLY.
 *
 *  Strips up to +width+ leading whitespaces from +input+,
 *  and returns the stripped column width.
 */
static VALUE
parser_dedent_string(VALUE self, VALUE input, VALUE width)
{
    int wid, col;

    StringValue(input);
    wid = NUM2UINT(width);
    col = dedent_string(input, wid);
    return INT2NUM(col);
}
#endif

static int
whole_match_p(struct parser_params *p, const char *eos, long len, int indent)
{
    const char *ptr = p->lex.pbeg;
    long n;

    if (indent) {
	while (*ptr && ISSPACE(*ptr)) ptr++;
    }
    n = p->lex.pend - (ptr + len);
    if (n < 0) return FALSE;
    if (n > 0 && ptr[len] != '\n') {
	if (ptr[len] != '\r') return FALSE;
	if (n <= 1 || ptr[len+1] != '\n') return FALSE;
    }
    return strncmp(eos, ptr, len) == 0;
}

static int
word_match_p(struct parser_params *p, const char *word, long len)
{
    if (strncmp(p->lex.pcur, word, len)) return 0;
    if (p->lex.pcur + len == p->lex.pend) return 1;
    int c = (unsigned char)p->lex.pcur[len];
    if (ISSPACE(c)) return 1;
    switch (c) {
      case '\0': case '\004': case '\032': return 1;
    }
    return 0;
}

#define NUM_SUFFIX_R   (1<<0)
#define NUM_SUFFIX_I   (1<<1)
#define NUM_SUFFIX_ALL 3

static int
number_literal_suffix(struct parser_params *p, int mask)
{
    int c, result = 0;
    const char *lastp = p->lex.pcur;

    while ((c = nextc(p)) != -1) {
	if ((mask & NUM_SUFFIX_I) && c == 'i') {
	    result |= (mask & NUM_SUFFIX_I);
	    mask &= ~NUM_SUFFIX_I;
	    /* r after i, rational of complex is disallowed */
	    mask &= ~NUM_SUFFIX_R;
	    continue;
	}
	if ((mask & NUM_SUFFIX_R) && c == 'r') {
	    result |= (mask & NUM_SUFFIX_R);
	    mask &= ~NUM_SUFFIX_R;
	    continue;
	}
	if (!ISASCII(c) || ISALPHA(c) || c == '_') {
	    p->lex.pcur = lastp;
	    literal_flush(p, p->lex.pcur);
	    return 0;
	}
	pushback(p, c);
	break;
    }
    return result;
}

static enum yytokentype
set_number_literal(struct parser_params *p, VALUE v,
		   enum yytokentype type, int suffix)
{
    if (suffix & NUM_SUFFIX_I) {
	v = rb_complex_raw(INT2FIX(0), v);
	type = tIMAGINARY;
    }
    set_yylval_literal(v);
    SET_LEX_STATE(EXPR_END);
    return type;
}

static enum yytokentype
set_integer_literal(struct parser_params *p, VALUE v, int suffix)
{
    enum yytokentype type = tINTEGER;
    if (suffix & NUM_SUFFIX_R) {
	v = rb_rational_raw1(v);
	type = tRATIONAL;
    }
    return set_number_literal(p, v, type, suffix);
}

#ifdef RIPPER
static void
dispatch_heredoc_end(struct parser_params *p)
{
    VALUE str;
    if (has_delayed_token(p))
	dispatch_delayed_token(p, tSTRING_CONTENT);
    str = STR_NEW(p->lex.ptok, p->lex.pend - p->lex.ptok);
    ripper_dispatch1(p, ripper_token2eventid(tHEREDOC_END), str);
    lex_goto_eol(p);
    token_flush(p);
}

#else
#define dispatch_heredoc_end(p) ((void)0)
#endif

static enum yytokentype
here_document(struct parser_params *p, rb_strterm_heredoc_t *here)
{
    int c, func, indent = 0;
    const char *eos, *ptr, *ptr_end;
    long len;
    VALUE str = 0;
    rb_encoding *enc = p->enc;
    rb_encoding *base_enc = 0;
    int bol;

    eos = RSTRING_PTR(here->lastline) + here->offset;
    len = here->length;
    indent = (func = here->func) & STR_FUNC_INDENT;

    if ((c = nextc(p)) == -1) {
      error:
#ifdef RIPPER
	if (!has_delayed_token(p)) {
	    dispatch_scan_event(p, tSTRING_CONTENT);
	}
	else {
	    if ((len = p->lex.pcur - p->lex.ptok) > 0) {
		if (!(func & STR_FUNC_REGEXP) && rb_enc_asciicompat(enc)) {
		    int cr = ENC_CODERANGE_UNKNOWN;
		    rb_str_coderange_scan_restartable(p->lex.ptok, p->lex.pcur, enc, &cr);
		    if (cr != ENC_CODERANGE_7BIT &&
			p->enc == rb_usascii_encoding() &&
			enc != rb_utf8_encoding()) {
			enc = rb_ascii8bit_encoding();
		    }
		}
		rb_enc_str_buf_cat(p->delayed.token, p->lex.ptok, len, enc);
	    }
	    dispatch_delayed_token(p, tSTRING_CONTENT);
	}
	lex_goto_eol(p);
#endif
	heredoc_restore(p, &p->lex.strterm->u.heredoc);
	compile_error(p, "can't find string \"%.*s\" anywhere before EOF",
		      (int)len, eos);
	token_flush(p);
	p->lex.strterm = 0;
	SET_LEX_STATE(EXPR_END);
	return tSTRING_END;
    }
    bol = was_bol(p);
    if (!bol) {
	/* not beginning of line, cannot be the terminator */
    }
    else if (p->heredoc_line_indent == -1) {
	/* `heredoc_line_indent == -1` means
	 * - "after an interpolation in the same line", or
	 * - "in a continuing line"
	 */
	p->heredoc_line_indent = 0;
    }
    else if (whole_match_p(p, eos, len, indent)) {
	dispatch_heredoc_end(p);
      restore:
	heredoc_restore(p, &p->lex.strterm->u.heredoc);
	token_flush(p);
	p->lex.strterm = 0;
	SET_LEX_STATE(EXPR_END);
	return tSTRING_END;
    }

    if (!(func & STR_FUNC_EXPAND)) {
	do {
	    ptr = RSTRING_PTR(p->lex.lastline);
	    ptr_end = p->lex.pend;
	    if (ptr_end > ptr) {
		switch (ptr_end[-1]) {
		  case '\n':
		    if (--ptr_end == ptr || ptr_end[-1] != '\r') {
			ptr_end++;
			break;
		    }
		  case '\r':
		    --ptr_end;
		}
	    }

	    if (p->heredoc_indent > 0) {
		long i = 0;
		while (ptr + i < ptr_end && parser_update_heredoc_indent(p, ptr[i]))
		    i++;
		p->heredoc_line_indent = 0;
	    }

	    if (str)
		rb_str_cat(str, ptr, ptr_end - ptr);
	    else
		str = STR_NEW(ptr, ptr_end - ptr);
	    if (ptr_end < p->lex.pend) rb_str_cat(str, "\n", 1);
	    lex_goto_eol(p);
	    if (p->heredoc_indent > 0) {
		goto flush_str;
	    }
	    if (nextc(p) == -1) {
		if (str) {
		    str = 0;
		}
		goto error;
	    }
	} while (!whole_match_p(p, eos, len, indent));
    }
    else {
	/*	int mb = ENC_CODERANGE_7BIT, *mbp = &mb;*/
	newtok(p);
	if (c == '#') {
	    int t = parser_peek_variable_name(p);
	    if (p->heredoc_line_indent != -1) {
		if (p->heredoc_indent > p->heredoc_line_indent) {
		    p->heredoc_indent = p->heredoc_line_indent;
		}
		p->heredoc_line_indent = -1;
	    }
	    if (t) return t;
	    tokadd(p, '#');
	    c = nextc(p);
	}
	do {
	    pushback(p, c);
	    enc = p->enc;
	    if ((c = tokadd_string(p, func, '\n', 0, NULL, &enc, &base_enc)) == -1) {
		if (p->eofp) goto error;
		goto restore;
	    }
	    if (c != '\n') {
		if (c == '\\') p->heredoc_line_indent = -1;
	      flush:
		str = STR_NEW3(tok(p), toklen(p), enc, func);
	      flush_str:
		set_yylval_str(str);
#ifndef RIPPER
		if (bol) yylval.node->flags |= NODE_FL_NEWLINE;
#endif
		flush_string_content(p, enc);
		return tSTRING_CONTENT;
	    }
	    tokadd(p, nextc(p));
	    if (p->heredoc_indent > 0) {
		lex_goto_eol(p);
		goto flush;
	    }
	    /*	    if (mbp && mb == ENC_CODERANGE_UNKNOWN) mbp = 0;*/
	    if ((c = nextc(p)) == -1) goto error;
	} while (!whole_match_p(p, eos, len, indent));
	str = STR_NEW3(tok(p), toklen(p), enc, func);
    }
    dispatch_heredoc_end(p);
#ifdef RIPPER
    str = ripper_new_yylval(p, ripper_token2eventid(tSTRING_CONTENT),
			    yylval.val, str);
#endif
    heredoc_restore(p, &p->lex.strterm->u.heredoc);
    token_flush(p);
    p->lex.strterm = NEW_STRTERM(func | STR_FUNC_TERM, 0, 0);
    set_yylval_str(str);
#ifndef RIPPER
    if (bol) yylval.node->flags |= NODE_FL_NEWLINE;
#endif
    return tSTRING_CONTENT;
}

#include "lex.c"

static int
arg_ambiguous(struct parser_params *p, char c)
{
#ifndef RIPPER
    rb_warning1("ambiguous first argument; put parentheses or a space even after `%c' operator", WARN_I(c));
#else
    dispatch1(arg_ambiguous, rb_usascii_str_new(&c, 1));
#endif
    return TRUE;
}

static ID
formal_argument(struct parser_params *p, ID lhs)
{
    switch (id_type(lhs)) {
      case ID_LOCAL:
	break;
#ifndef RIPPER
      case ID_CONST:
	yyerror0("formal argument cannot be a constant");
	return 0;
      case ID_INSTANCE:
	yyerror0("formal argument cannot be an instance variable");
	return 0;
      case ID_GLOBAL:
	yyerror0("formal argument cannot be a global variable");
	return 0;
      case ID_CLASS:
	yyerror0("formal argument cannot be a class variable");
	return 0;
      default:
	yyerror0("formal argument must be local variable");
	return 0;
#else
      default:
	lhs = dispatch1(param_error, lhs);
	ripper_error(p);
	return 0;
#endif
    }
    shadowing_lvar(p, lhs);
    return lhs;
}

static int
lvar_defined(struct parser_params *p, ID id)
{
    return (dyna_in_block(p) && dvar_defined(p, id)) || local_id(p, id);
}

/* emacsen -*- hack */
static long
parser_encode_length(struct parser_params *p, const char *name, long len)
{
    long nlen;

    if (len > 5 && name[nlen = len - 5] == '-') {
	if (rb_memcicmp(name + nlen + 1, "unix", 4) == 0)
	    return nlen;
    }
    if (len > 4 && name[nlen = len - 4] == '-') {
	if (rb_memcicmp(name + nlen + 1, "dos", 3) == 0)
	    return nlen;
	if (rb_memcicmp(name + nlen + 1, "mac", 3) == 0 &&
	    !(len == 8 && rb_memcicmp(name, "utf8-mac", len) == 0))
	    /* exclude UTF8-MAC because the encoding named "UTF8" doesn't exist in Ruby */
	    return nlen;
    }
    return len;
}

static void
parser_set_encode(struct parser_params *p, const char *name)
{
    int idx = rb_enc_find_index(name);
    rb_encoding *enc;
    VALUE excargs[3];

    if (idx < 0) {
	excargs[1] = rb_sprintf("unknown encoding name: %s", name);
      error:
	excargs[0] = rb_eArgError;
	excargs[2] = rb_make_backtrace();
	rb_ary_unshift(excargs[2], rb_sprintf("%"PRIsVALUE":%d", p->ruby_sourcefile_string, p->ruby_sourceline));
	rb_exc_raise(rb_make_exception(3, excargs));
    }
    enc = rb_enc_from_index(idx);
    if (!rb_enc_asciicompat(enc)) {
	excargs[1] = rb_sprintf("%s is not ASCII compatible", rb_enc_name(enc));
	goto error;
    }
    p->enc = enc;
#ifndef RIPPER
    if (p->debug_lines) {
	VALUE lines = p->debug_lines;
	long i, n = RARRAY_LEN(lines);
	for (i = 0; i < n; ++i) {
	    rb_enc_associate_index(RARRAY_AREF(lines, i), idx);
	}
    }
#endif
}

static int
comment_at_top(struct parser_params *p)
{
    const char *ptr = p->lex.pbeg, *ptr_end = p->lex.pcur - 1;
    if (p->line_count != (p->has_shebang ? 2 : 1)) return 0;
    while (ptr < ptr_end) {
	if (!ISSPACE(*ptr)) return 0;
	ptr++;
    }
    return 1;
}

typedef long (*rb_magic_comment_length_t)(struct parser_params *p, const char *name, long len);
typedef void (*rb_magic_comment_setter_t)(struct parser_params *p, const char *name, const char *val);

static void
magic_comment_encoding(struct parser_params *p, const char *name, const char *val)
{
    if (!comment_at_top(p)) {
	return;
    }
    parser_set_encode(p, val);
}

static int
parser_get_bool(struct parser_params *p, const char *name, const char *val)
{
    switch (*val) {
      case 't': case 'T':
	if (strcasecmp(val, "true") == 0) {
	    return TRUE;
	}
	break;
      case 'f': case 'F':
	if (strcasecmp(val, "false") == 0) {
	    return FALSE;
	}
	break;
    }
    rb_compile_warning(p->ruby_sourcefile, p->ruby_sourceline, "invalid value for %s: %s", name, val);
    return -1;
}

static void
parser_set_token_info(struct parser_params *p, const char *name, const char *val)
{
    int b = parser_get_bool(p, name, val);
    if (b >= 0) p->token_info_enabled = b;
}

static void
parser_set_compile_option_flag(struct parser_params *p, const char *name, const char *val)
{
    int b;

    if (p->token_seen) {
	rb_warning1("`%s' is ignored after any tokens", WARN_S(name));
	return;
    }

    b = parser_get_bool(p, name, val);
    if (b < 0) return;

    if (!p->compile_option)
	p->compile_option = rb_obj_hide(rb_ident_hash_new());
    rb_hash_aset(p->compile_option, ID2SYM(rb_intern(name)),
		 (b ? Qtrue : Qfalse));
}

# if WARN_PAST_SCOPE
static void
parser_set_past_scope(struct parser_params *p, const char *name, const char *val)
{
    int b = parser_get_bool(p, name, val);
    if (b >= 0) p->past_scope_enabled = b;
}
# endif

struct magic_comment {
    const char *name;
    rb_magic_comment_setter_t func;
    rb_magic_comment_length_t length;
};

static const struct magic_comment magic_comments[] = {
    {"coding", magic_comment_encoding, parser_encode_length},
    {"encoding", magic_comment_encoding, parser_encode_length},
    {"frozen_string_literal", parser_set_compile_option_flag},
    {"warn_indent", parser_set_token_info},
# if WARN_PAST_SCOPE
    {"warn_past_scope", parser_set_past_scope},
# endif
};

static const char *
magic_comment_marker(const char *str, long len)
{
    long i = 2;

    while (i < len) {
	switch (str[i]) {
	  case '-':
	    if (str[i-1] == '*' && str[i-2] == '-') {
		return str + i + 1;
	    }
	    i += 2;
	    break;
	  case '*':
	    if (i + 1 >= len) return 0;
	    if (str[i+1] != '-') {
		i += 4;
	    }
	    else if (str[i-1] != '-') {
		i += 2;
	    }
	    else {
		return str + i + 2;
	    }
	    break;
	  default:
	    i += 3;
	    break;
	}
    }
    return 0;
}

static int
parser_magic_comment(struct parser_params *p, const char *str, long len)
{
    int indicator = 0;
    VALUE name = 0, val = 0;
    const char *beg, *end, *vbeg, *vend;
#define str_copy(_s, _p, _n) ((_s) \
	? (void)(rb_str_resize((_s), (_n)), \
	   MEMCPY(RSTRING_PTR(_s), (_p), char, (_n)), (_s)) \
	: (void)((_s) = STR_NEW((_p), (_n))))

    if (len <= 7) return FALSE;
    if (!!(beg = magic_comment_marker(str, len))) {
	if (!(end = magic_comment_marker(beg, str + len - beg)))
	    return FALSE;
	indicator = TRUE;
	str = beg;
	len = end - beg - 3;
    }

    /* %r"([^\\s\'\":;]+)\\s*:\\s*(\"(?:\\\\.|[^\"])*\"|[^\"\\s;]+)[\\s;]*" */
    while (len > 0) {
	const struct magic_comment *mc = magic_comments;
	char *s;
	int i;
	long n = 0;

	for (; len > 0 && *str; str++, --len) {
	    switch (*str) {
	      case '\'': case '"': case ':': case ';':
		continue;
	    }
	    if (!ISSPACE(*str)) break;
	}
	for (beg = str; len > 0; str++, --len) {
	    switch (*str) {
	      case '\'': case '"': case ':': case ';':
		break;
	      default:
		if (ISSPACE(*str)) break;
		continue;
	    }
	    break;
	}
	for (end = str; len > 0 && ISSPACE(*str); str++, --len);
	if (!len) break;
	if (*str != ':') {
	    if (!indicator) return FALSE;
	    continue;
	}

	do str++; while (--len > 0 && ISSPACE(*str));
	if (!len) break;
	if (*str == '"') {
	    for (vbeg = ++str; --len > 0 && *str != '"'; str++) {
		if (*str == '\\') {
		    --len;
		    ++str;
		}
	    }
	    vend = str;
	    if (len) {
		--len;
		++str;
	    }
	}
	else {
	    for (vbeg = str; len > 0 && *str != '"' && *str != ';' && !ISSPACE(*str); --len, str++);
	    vend = str;
	}
	if (indicator) {
	    while (len > 0 && (*str == ';' || ISSPACE(*str))) --len, str++;
	}
	else {
	    while (len > 0 && (ISSPACE(*str))) --len, str++;
	    if (len) return FALSE;
	}

	n = end - beg;
	str_copy(name, beg, n);
	s = RSTRING_PTR(name);
	for (i = 0; i < n; ++i) {
	    if (s[i] == '-') s[i] = '_';
	}
	do {
	    if (STRNCASECMP(mc->name, s, n) == 0 && !mc->name[n]) {
		n = vend - vbeg;
		if (mc->length) {
		    n = (*mc->length)(p, vbeg, n);
		}
		str_copy(val, vbeg, n);
		(*mc->func)(p, mc->name, RSTRING_PTR(val));
		break;
	    }
	} while (++mc < magic_comments + numberof(magic_comments));
#ifdef RIPPER
	str_copy(val, vbeg, vend - vbeg);
	dispatch2(magic_comment, name, val);
#endif
    }

    return TRUE;
}

static void
set_file_encoding(struct parser_params *p, const char *str, const char *send)
{
    int sep = 0;
    const char *beg = str;
    VALUE s;

    for (;;) {
	if (send - str <= 6) return;
	switch (str[6]) {
	  case 'C': case 'c': str += 6; continue;
	  case 'O': case 'o': str += 5; continue;
	  case 'D': case 'd': str += 4; continue;
	  case 'I': case 'i': str += 3; continue;
	  case 'N': case 'n': str += 2; continue;
	  case 'G': case 'g': str += 1; continue;
	  case '=': case ':':
	    sep = 1;
	    str += 6;
	    break;
	  default:
	    str += 6;
	    if (ISSPACE(*str)) break;
	    continue;
	}
	if (STRNCASECMP(str-6, "coding", 6) == 0) break;
    }
    for (;;) {
	do {
	    if (++str >= send) return;
	} while (ISSPACE(*str));
	if (sep) break;
	if (*str != '=' && *str != ':') return;
	sep = 1;
	str++;
    }
    beg = str;
    while ((*str == '-' || *str == '_' || ISALNUM(*str)) && ++str < send);
    s = rb_str_new(beg, parser_encode_length(p, beg, str - beg));
    parser_set_encode(p, RSTRING_PTR(s));
    rb_str_resize(s, 0);
}

static void
parser_prepare(struct parser_params *p)
{
    int c = nextc(p);
    p->token_info_enabled = !compile_for_eval && RTEST(ruby_verbose);
    switch (c) {
      case '#':
	if (peek(p, '!')) p->has_shebang = 1;
	break;
      case 0xef:		/* UTF-8 BOM marker */
	if (p->lex.pend - p->lex.pcur >= 2 &&
	    (unsigned char)p->lex.pcur[0] == 0xbb &&
	    (unsigned char)p->lex.pcur[1] == 0xbf) {
	    p->enc = rb_utf8_encoding();
	    p->lex.pcur += 2;
	    p->lex.pbeg = p->lex.pcur;
	    return;
	}
	break;
      case EOF:
	return;
    }
    pushback(p, c);
    p->enc = rb_enc_get(p->lex.lastline);
}

#ifndef RIPPER
#define ambiguous_operator(tok, op, syn) ( \
    rb_warning0("`"op"' after local variable or literal is interpreted as binary operator"), \
    rb_warning0("even though it seems like "syn""))
#else
#define ambiguous_operator(tok, op, syn) \
    dispatch2(operator_ambiguous, TOKEN2VAL(tok), rb_str_new_cstr(syn))
#endif
#define warn_balanced(tok, op, syn) ((void) \
    (!IS_lex_state_for(last_state, EXPR_CLASS|EXPR_DOT|EXPR_FNAME|EXPR_ENDFN) && \
     space_seen && !ISSPACE(c) && \
     (ambiguous_operator(tok, op, syn), 0)), \
     (enum yytokentype)(tok))

static VALUE
parse_rational(struct parser_params *p, char *str, int len, int seen_point)
{
    VALUE v;
    char *point = &str[seen_point];
    size_t fraclen = len-seen_point-1;
    memmove(point, point+1, fraclen+1);
    v = rb_cstr_to_inum(str, 10, FALSE);
    return rb_rational_new(v, rb_int_positive_pow(10, fraclen));
}

static enum yytokentype
no_digits(struct parser_params *p)
{
    yyerror0("numeric literal without digits");
    if (peek(p, '_')) nextc(p);
    /* dummy 0, for tUMINUS_NUM at numeric */
    return set_integer_literal(p, INT2FIX(0), 0);
}

static enum yytokentype
parse_numeric(struct parser_params *p, int c)
{
    int is_float, seen_point, seen_e, nondigit;
    int suffix;

    is_float = seen_point = seen_e = nondigit = 0;
    SET_LEX_STATE(EXPR_END);
    newtok(p);
    if (c == '-' || c == '+') {
	tokadd(p, c);
	c = nextc(p);
    }
    if (c == '0') {
	int start = toklen(p);
	c = nextc(p);
	if (c == 'x' || c == 'X') {
	    /* hexadecimal */
	    c = nextc(p);
	    if (c != -1 && ISXDIGIT(c)) {
		do {
		    if (c == '_') {
			if (nondigit) break;
			nondigit = c;
			continue;
		    }
		    if (!ISXDIGIT(c)) break;
		    nondigit = 0;
		    tokadd(p, c);
		} while ((c = nextc(p)) != -1);
	    }
	    pushback(p, c);
	    tokfix(p);
	    if (toklen(p) == start) {
		return no_digits(p);
	    }
	    else if (nondigit) goto trailing_uc;
	    suffix = number_literal_suffix(p, NUM_SUFFIX_ALL);
	    return set_integer_literal(p, rb_cstr_to_inum(tok(p), 16, FALSE), suffix);
	}
	if (c == 'b' || c == 'B') {
	    /* binary */
	    c = nextc(p);
	    if (c == '0' || c == '1') {
		do {
		    if (c == '_') {
			if (nondigit) break;
			nondigit = c;
			continue;
		    }
		    if (c != '0' && c != '1') break;
		    nondigit = 0;
		    tokadd(p, c);
		} while ((c = nextc(p)) != -1);
	    }
	    pushback(p, c);
	    tokfix(p);
	    if (toklen(p) == start) {
		return no_digits(p);
	    }
	    else if (nondigit) goto trailing_uc;
	    suffix = number_literal_suffix(p, NUM_SUFFIX_ALL);
	    return set_integer_literal(p, rb_cstr_to_inum(tok(p), 2, FALSE), suffix);
	}
	if (c == 'd' || c == 'D') {
	    /* decimal */
	    c = nextc(p);
	    if (c != -1 && ISDIGIT(c)) {
		do {
		    if (c == '_') {
			if (nondigit) break;
			nondigit = c;
			continue;
		    }
		    if (!ISDIGIT(c)) break;
		    nondigit = 0;
		    tokadd(p, c);
		} while ((c = nextc(p)) != -1);
	    }
	    pushback(p, c);
	    tokfix(p);
	    if (toklen(p) == start) {
		return no_digits(p);
	    }
	    else if (nondigit) goto trailing_uc;
	    suffix = number_literal_suffix(p, NUM_SUFFIX_ALL);
	    return set_integer_literal(p, rb_cstr_to_inum(tok(p), 10, FALSE), suffix);
	}
	if (c == '_') {
	    /* 0_0 */
	    goto octal_number;
	}
	if (c == 'o' || c == 'O') {
	    /* prefixed octal */
	    c = nextc(p);
	    if (c == -1 || c == '_' || !ISDIGIT(c)) {
		return no_digits(p);
	    }
	}
	if (c >= '0' && c <= '7') {
	    /* octal */
	  octal_number:
	    do {
		if (c == '_') {
		    if (nondigit) break;
		    nondigit = c;
		    continue;
		}
		if (c < '0' || c > '9') break;
		if (c > '7') goto invalid_octal;
		nondigit = 0;
		tokadd(p, c);
	    } while ((c = nextc(p)) != -1);
	    if (toklen(p) > start) {
		pushback(p, c);
		tokfix(p);
		if (nondigit) goto trailing_uc;
		suffix = number_literal_suffix(p, NUM_SUFFIX_ALL);
		return set_integer_literal(p, rb_cstr_to_inum(tok(p), 8, FALSE), suffix);
	    }
	    if (nondigit) {
		pushback(p, c);
		goto trailing_uc;
	    }
	}
	if (c > '7' && c <= '9') {
	  invalid_octal:
	    yyerror0("Invalid octal digit");
	}
	else if (c == '.' || c == 'e' || c == 'E') {
	    tokadd(p, '0');
	}
	else {
	    pushback(p, c);
	    suffix = number_literal_suffix(p, NUM_SUFFIX_ALL);
	    return set_integer_literal(p, INT2FIX(0), suffix);
	}
    }

    for (;;) {
	switch (c) {
	  case '0': case '1': case '2': case '3': case '4':
	  case '5': case '6': case '7': case '8': case '9':
	    nondigit = 0;
	    tokadd(p, c);
	    break;

	  case '.':
	    if (nondigit) goto trailing_uc;
	    if (seen_point || seen_e) {
		goto decode_num;
	    }
	    else {
		int c0 = nextc(p);
		if (c0 == -1 || !ISDIGIT(c0)) {
		    pushback(p, c0);
		    goto decode_num;
		}
		c = c0;
	    }
	    seen_point = toklen(p);
	    tokadd(p, '.');
	    tokadd(p, c);
	    is_float++;
	    nondigit = 0;
	    break;

	  case 'e':
	  case 'E':
	    if (nondigit) {
		pushback(p, c);
		c = nondigit;
		goto decode_num;
	    }
	    if (seen_e) {
		goto decode_num;
	    }
	    nondigit = c;
	    c = nextc(p);
	    if (c != '-' && c != '+' && !ISDIGIT(c)) {
		pushback(p, c);
		nondigit = 0;
		goto decode_num;
	    }
	    tokadd(p, nondigit);
	    seen_e++;
	    is_float++;
	    tokadd(p, c);
	    nondigit = (c == '-' || c == '+') ? c : 0;
	    break;

	  case '_':	/* `_' in number just ignored */
	    if (nondigit) goto decode_num;
	    nondigit = c;
	    break;

	  default:
	    goto decode_num;
	}
	c = nextc(p);
    }

  decode_num:
    pushback(p, c);
    if (nondigit) {
      trailing_uc:
	literal_flush(p, p->lex.pcur - 1);
	YYLTYPE loc = RUBY_INIT_YYLLOC();
	compile_error(p, "trailing `%c' in number", nondigit);
	parser_show_error_line(p, &loc);
    }
    tokfix(p);
    if (is_float) {
	enum yytokentype type = tFLOAT;
	VALUE v;

	suffix = number_literal_suffix(p, seen_e ? NUM_SUFFIX_I : NUM_SUFFIX_ALL);
	if (suffix & NUM_SUFFIX_R) {
	    type = tRATIONAL;
	    v = parse_rational(p, tok(p), toklen(p), seen_point);
	}
	else {
	    double d = strtod(tok(p), 0);
	    if (errno == ERANGE) {
		rb_warning1("Float %s out of range", WARN_S(tok(p)));
		errno = 0;
	    }
	    v = DBL2NUM(d);
	}
	return set_number_literal(p, v, type, suffix);
    }
    suffix = number_literal_suffix(p, NUM_SUFFIX_ALL);
    return set_integer_literal(p, rb_cstr_to_inum(tok(p), 10, FALSE), suffix);
}

static enum yytokentype
parse_qmark(struct parser_params *p, int space_seen)
{
    rb_encoding *enc;
    register int c;
    VALUE lit;

    if (IS_END()) {
	SET_LEX_STATE(EXPR_VALUE);
	return '?';
    }
    c = nextc(p);
    if (c == -1) {
	compile_error(p, "incomplete character syntax");
	return 0;
    }
    if (rb_enc_isspace(c, p->enc)) {
	if (!IS_ARG()) {
	    int c2 = escaped_control_code(c);
	    if (c2) {
		WARN_SPACE_CHAR(c2, "?");
	    }
	}
      ternary:
	pushback(p, c);
	SET_LEX_STATE(EXPR_VALUE);
	return '?';
    }
    newtok(p);
    enc = p->enc;
    if (!parser_isascii(p)) {
	if (tokadd_mbchar(p, c) == -1) return 0;
    }
    else if ((rb_enc_isalnum(c, p->enc) || c == '_') &&
	     p->lex.pcur < p->lex.pend && is_identchar(p->lex.pcur, p->lex.pend, p->enc)) {
	if (space_seen) {
	    const char *start = p->lex.pcur - 1, *ptr = start;
	    do {
		int n = parser_precise_mbclen(p, ptr);
		if (n < 0) return -1;
		ptr += n;
	    } while (ptr < p->lex.pend && is_identchar(ptr, p->lex.pend, p->enc));
	    rb_warn2("`?' just followed by `%.*s' is interpreted as" \
		     " a conditional operator, put a space after `?'",
		     WARN_I((int)(ptr - start)), WARN_S_L(start, (ptr - start)));
	}
	goto ternary;
    }
    else if (c == '\\') {
	if (peek(p, 'u')) {
	    nextc(p);
	    enc = rb_utf8_encoding();
	    tokadd_utf8(p, &enc, -1, 0, 0);
	}
	else if (!lex_eol_p(p) && !(c = *p->lex.pcur, ISASCII(c))) {
	    nextc(p);
	    if (tokadd_mbchar(p, c) == -1) return 0;
	}
	else {
	    c = read_escape(p, 0, &enc);
	    tokadd(p, c);
	}
    }
    else {
	tokadd(p, c);
    }
    tokfix(p);
    lit = STR_NEW3(tok(p), toklen(p), enc, 0);
    set_yylval_str(lit);
    SET_LEX_STATE(EXPR_END);
    return tCHAR;
}

static enum yytokentype
parse_percent(struct parser_params *p, const int space_seen, const enum lex_state_e last_state)
{
    register int c;

    if (IS_BEG()) {
	int term;
	int paren;

	c = nextc(p);
      quotation:
	if (c == -1 || !ISALNUM(c)) {
	    term = c;
	    c = 'Q';
	}
	else {
	    term = nextc(p);
	    if (rb_enc_isalnum(term, p->enc) || !parser_isascii(p)) {
		yyerror0("unknown type of %string");
		return 0;
	    }
	}
	if (c == -1 || term == -1) {
	    compile_error(p, "unterminated quoted string meets end of file");
	    return 0;
	}
	paren = term;
	if (term == '(') term = ')';
	else if (term == '[') term = ']';
	else if (term == '{') term = '}';
	else if (term == '<') term = '>';
	else paren = 0;

	switch (c) {
	  case 'Q':
	    p->lex.strterm = NEW_STRTERM(str_dquote, term, paren);
	    return tSTRING_BEG;

	  case 'q':
	    p->lex.strterm = NEW_STRTERM(str_squote, term, paren);
	    return tSTRING_BEG;

	  case 'W':
	    p->lex.strterm = NEW_STRTERM(str_dword, term, paren);
	    return tWORDS_BEG;

	  case 'w':
	    p->lex.strterm = NEW_STRTERM(str_sword, term, paren);
	    return tQWORDS_BEG;

	  case 'I':
	    p->lex.strterm = NEW_STRTERM(str_dword, term, paren);
	    return tSYMBOLS_BEG;

	  case 'i':
	    p->lex.strterm = NEW_STRTERM(str_sword, term, paren);
	    return tQSYMBOLS_BEG;

	  case 'x':
	    p->lex.strterm = NEW_STRTERM(str_xquote, term, paren);
	    return tXSTRING_BEG;

	  case 'r':
	    p->lex.strterm = NEW_STRTERM(str_regexp, term, paren);
	    return tREGEXP_BEG;

	  case 's':
	    p->lex.strterm = NEW_STRTERM(str_ssym, term, paren);
	    SET_LEX_STATE(EXPR_FNAME|EXPR_FITEM);
	    return tSYMBEG;

	  default:
	    yyerror0("unknown type of %string");
	    return 0;
	}
    }
    if ((c = nextc(p)) == '=') {
	set_yylval_id('%');
	SET_LEX_STATE(EXPR_BEG);
	return tOP_ASGN;
    }
    if (IS_SPCARG(c) || (IS_lex_state(EXPR_FITEM) && c == 's')) {
	goto quotation;
    }
    SET_LEX_STATE(IS_AFTER_OPERATOR() ? EXPR_ARG : EXPR_BEG);
    pushback(p, c);
    return warn_balanced('%', "%%", "string literal");
}

static int
tokadd_ident(struct parser_params *p, int c)
{
    do {
	if (tokadd_mbchar(p, c) == -1) return -1;
	c = nextc(p);
    } while (parser_is_identchar(p));
    pushback(p, c);
    return 0;
}

static ID
tokenize_ident(struct parser_params *p, const enum lex_state_e last_state)
{
    ID ident = TOK_INTERN();

    set_yylval_name(ident);

    return ident;
}

static int
parse_numvar(struct parser_params *p)
{
    size_t len;
    int overflow;
    unsigned long n = ruby_scan_digits(tok(p)+1, toklen(p)-1, 10, &len, &overflow);
    const unsigned long nth_ref_max =
	((FIXNUM_MAX < INT_MAX) ? FIXNUM_MAX : INT_MAX) >> 1;
    /* NTH_REF is left-shifted to be ORed with back-ref flag and
     * turned into a Fixnum, in compile.c */

    if (overflow || n > nth_ref_max) {
	/* compile_error()? */
	rb_warn1("`%s' is too big for a number variable, always nil", WARN_S(tok(p)));
	return 0;		/* $0 is $PROGRAM_NAME, not NTH_REF */
    }
    else {
	return (int)n;
    }
}

static enum yytokentype
parse_gvar(struct parser_params *p, const enum lex_state_e last_state)
{
    const char *ptr = p->lex.pcur;
    register int c;

    SET_LEX_STATE(EXPR_END);
    p->lex.ptok = ptr - 1; /* from '$' */
    newtok(p);
    c = nextc(p);
    switch (c) {
      case '_':		/* $_: last read line string */
	c = nextc(p);
	if (parser_is_identchar(p)) {
	    tokadd(p, '$');
	    tokadd(p, '_');
	    break;
	}
	pushback(p, c);
	c = '_';
	/* fall through */
      case '~':		/* $~: match-data */
      case '*':		/* $*: argv */
      case '$':		/* $$: pid */
      case '?':		/* $?: last status */
      case '!':		/* $!: error string */
      case '@':		/* $@: error position */
      case '/':		/* $/: input record separator */
      case '\\':		/* $\: output record separator */
      case ';':		/* $;: field separator */
      case ',':		/* $,: output field separator */
      case '.':		/* $.: last read line number */
      case '=':		/* $=: ignorecase */
      case ':':		/* $:: load path */
      case '<':		/* $<: reading filename */
      case '>':		/* $>: default output handle */
      case '\"':		/* $": already loaded files */
	tokadd(p, '$');
	tokadd(p, c);
	goto gvar;

      case '-':
	tokadd(p, '$');
	tokadd(p, c);
	c = nextc(p);
	if (parser_is_identchar(p)) {
	    if (tokadd_mbchar(p, c) == -1) return 0;
	}
	else {
	    pushback(p, c);
	    pushback(p, '-');
	    return '$';
	}
      gvar:
	set_yylval_name(TOK_INTERN());
	return tGVAR;

      case '&':		/* $&: last match */
      case '`':		/* $`: string before last match */
      case '\'':		/* $': string after last match */
      case '+':		/* $+: string matches last paren. */
	if (IS_lex_state_for(last_state, EXPR_FNAME)) {
	    tokadd(p, '$');
	    tokadd(p, c);
	    goto gvar;
	}
	set_yylval_node(NEW_BACK_REF(c, &_cur_loc));
	return tBACK_REF;

      case '1': case '2': case '3':
      case '4': case '5': case '6':
      case '7': case '8': case '9':
	tokadd(p, '$');
	do {
	    tokadd(p, c);
	    c = nextc(p);
	} while (c != -1 && ISDIGIT(c));
	pushback(p, c);
	if (IS_lex_state_for(last_state, EXPR_FNAME)) goto gvar;
	tokfix(p);
	set_yylval_node(NEW_NTH_REF(parse_numvar(p), &_cur_loc));
	return tNTH_REF;

      default:
	if (!parser_is_identchar(p)) {
	    YYLTYPE loc = RUBY_INIT_YYLLOC();
	    if (c == -1 || ISSPACE(c)) {
		compile_error(p, "`$' without identifiers is not allowed as a global variable name");
	    }
	    else {
		pushback(p, c);
		compile_error(p, "`$%c' is not allowed as a global variable name", c);
	    }
	    parser_show_error_line(p, &loc);
	    set_yylval_noname();
	    return tGVAR;
	}
	/* fall through */
      case '0':
	tokadd(p, '$');
    }

    if (tokadd_ident(p, c)) return 0;
    SET_LEX_STATE(EXPR_END);
    tokenize_ident(p, last_state);
    return tGVAR;
}

#ifndef RIPPER
static bool
parser_numbered_param(struct parser_params *p, int n)
{
    if (n < 0) return false;

    if (DVARS_TERMINAL_P(p->lvtbl->args) || DVARS_TERMINAL_P(p->lvtbl->args->prev)) {
	return false;
    }
    if (p->max_numparam == ORDINAL_PARAM) {
	compile_error(p, "ordinary parameter is defined");
	return false;
    }
    struct vtable *args = p->lvtbl->args;
    if (p->max_numparam < n) {
	p->max_numparam = n;
    }
    while (n > args->pos) {
	vtable_add(args, NUMPARAM_IDX_TO_ID(args->pos+1));
    }
    return true;
}
#endif

static enum yytokentype
parse_atmark(struct parser_params *p, const enum lex_state_e last_state)
{
    const char *ptr = p->lex.pcur;
    enum yytokentype result = tIVAR;
    register int c = nextc(p);
    YYLTYPE loc;

    p->lex.ptok = ptr - 1; /* from '@' */
    newtok(p);
    tokadd(p, '@');
    if (c == '@') {
	result = tCVAR;
	tokadd(p, '@');
	c = nextc(p);
    }
    SET_LEX_STATE(IS_lex_state_for(last_state, EXPR_FNAME) ? EXPR_ENDFN : EXPR_END);
    if (c == -1 || !parser_is_identchar(p)) {
	pushback(p, c);
	RUBY_SET_YYLLOC(loc);
	if (result == tIVAR) {
	    compile_error(p, "`@' without identifiers is not allowed as an instance variable name");
	}
	else {
	    compile_error(p, "`@@' without identifiers is not allowed as a class variable name");
	}
	parser_show_error_line(p, &loc);
	set_yylval_noname();
	SET_LEX_STATE(EXPR_END);
	return result;
    }
    else if (ISDIGIT(c)) {
	pushback(p, c);
	RUBY_SET_YYLLOC(loc);
	if (result == tIVAR) {
	    compile_error(p, "`@%c' is not allowed as an instance variable name", c);
	}
	else {
	    compile_error(p, "`@@%c' is not allowed as a class variable name", c);
	}
	parser_show_error_line(p, &loc);
	set_yylval_noname();
	SET_LEX_STATE(EXPR_END);
	return result;
    }

    if (tokadd_ident(p, c)) return 0;
    tokenize_ident(p, last_state);
    return result;
}

static enum yytokentype
parse_ident(struct parser_params *p, int c, int cmd_state)
{
    enum yytokentype result;
    int mb = ENC_CODERANGE_7BIT;
    const enum lex_state_e last_state = p->lex.state;
    ID ident;

    do {
	if (!ISASCII(c)) mb = ENC_CODERANGE_UNKNOWN;
	if (tokadd_mbchar(p, c) == -1) return 0;
	c = nextc(p);
    } while (parser_is_identchar(p));
    if ((c == '!' || c == '?') && !peek(p, '=')) {
	result = tFID;
	tokadd(p, c);
    }
    else if (c == '=' && IS_lex_state(EXPR_FNAME) &&
	     (!peek(p, '~') && !peek(p, '>') && (!peek(p, '=') || (peek_n(p, '>', 1))))) {
	result = tIDENTIFIER;
	tokadd(p, c);
    }
    else {
	result = tCONSTANT;	/* assume provisionally */
	pushback(p, c);
    }
    tokfix(p);

    if (IS_LABEL_POSSIBLE()) {
	if (IS_LABEL_SUFFIX(0)) {
	    SET_LEX_STATE(EXPR_ARG|EXPR_LABELED);
	    nextc(p);
	    set_yylval_name(TOK_INTERN());
	    return tLABEL;
	}
    }
    if (mb == ENC_CODERANGE_7BIT && !IS_lex_state(EXPR_DOT)) {
	const struct kwtable *kw;

	/* See if it is a reserved word.  */
	kw = rb_reserved_word(tok(p), toklen(p));
	if (kw) {
	    enum lex_state_e state = p->lex.state;
	    SET_LEX_STATE(kw->state);
	    if (IS_lex_state_for(state, EXPR_FNAME)) {
		set_yylval_name(rb_intern2(tok(p), toklen(p)));
		return kw->id[0];
	    }
	    if (IS_lex_state(EXPR_BEG)) {
		p->command_start = TRUE;
	    }
	    if (kw->id[0] == keyword_do) {
		if (lambda_beginning_p()) {
		    p->lex.lpar_beg = -1; /* make lambda_beginning_p() == FALSE in the body of "-> do ... end" */
		    return keyword_do_LAMBDA;
		}
		if (COND_P()) return keyword_do_cond;
		if (CMDARG_P() && !IS_lex_state_for(state, EXPR_CMDARG))
		    return keyword_do_block;
		return keyword_do;
	    }
	    if (IS_lex_state_for(state, (EXPR_BEG | EXPR_LABELED)))
		return kw->id[0];
	    else {
		if (kw->id[0] != kw->id[1])
		    SET_LEX_STATE(EXPR_BEG | EXPR_LABEL);
		return kw->id[1];
	    }
	}
    }

    if (IS_lex_state(EXPR_BEG_ANY | EXPR_ARG_ANY | EXPR_DOT)) {
	if (cmd_state) {
	    SET_LEX_STATE(EXPR_CMDARG);
	}
	else {
	    SET_LEX_STATE(EXPR_ARG);
	}
    }
    else if (p->lex.state == EXPR_FNAME) {
	SET_LEX_STATE(EXPR_ENDFN);
    }
    else {
	SET_LEX_STATE(EXPR_END);
    }

    ident = tokenize_ident(p, last_state);
    if (result == tCONSTANT && is_local_id(ident)) result = tIDENTIFIER;
    if (!IS_lex_state_for(last_state, EXPR_DOT|EXPR_FNAME) &&
	(result == tIDENTIFIER) && /* not EXPR_FNAME, not attrasgn */
	lvar_defined(p, ident)) {
	SET_LEX_STATE(EXPR_END|EXPR_LABEL);
    }
    return result;
}

static enum yytokentype
parser_yylex(struct parser_params *p)
{
    register int c;
    int space_seen = 0;
    int cmd_state;
    int label;
    enum lex_state_e last_state;
    int fallthru = FALSE;
    int token_seen = p->token_seen;

    if (p->lex.strterm) {
	if (p->lex.strterm->flags & STRTERM_HEREDOC) {
	    return here_document(p, &p->lex.strterm->u.heredoc);
	}
	else {
	    token_flush(p);
	    return parse_string(p, &p->lex.strterm->u.literal);
	}
    }
    cmd_state = p->command_start;
    p->command_start = FALSE;
    p->token_seen = TRUE;
  retry:
    last_state = p->lex.state;
#ifndef RIPPER
    token_flush(p);
#endif
    switch (c = nextc(p)) {
      case '\0':		/* NUL */
      case '\004':		/* ^D */
      case '\032':		/* ^Z */
      case -1:			/* end of script. */
	return 0;

	/* white spaces */
      case ' ': case '\t': case '\f': case '\r':
      case '\13': /* '\v' */
	space_seen = 1;
#ifdef RIPPER
	while ((c = nextc(p))) {
	    switch (c) {
	      case ' ': case '\t': case '\f': case '\r':
	      case '\13': /* '\v' */
		break;
	      default:
		goto outofloop;
	    }
	}
      outofloop:
	pushback(p, c);
	dispatch_scan_event(p, tSP);
#endif
	goto retry;

      case '#':		/* it's a comment */
	p->token_seen = token_seen;
	/* no magic_comment in shebang line */
	if (!parser_magic_comment(p, p->lex.pcur, p->lex.pend - p->lex.pcur)) {
	    if (comment_at_top(p)) {
		set_file_encoding(p, p->lex.pcur, p->lex.pend);
	    }
	}
	lex_goto_eol(p);
        dispatch_scan_event(p, tCOMMENT);
        fallthru = TRUE;
	/* fall through */
      case '\n':
	p->token_seen = token_seen;
	c = (IS_lex_state(EXPR_BEG|EXPR_CLASS|EXPR_FNAME|EXPR_DOT) &&
	     !IS_lex_state(EXPR_LABELED));
	if (c || IS_lex_state_all(EXPR_ARG|EXPR_LABELED)) {
            if (!fallthru) {
                dispatch_scan_event(p, tIGNORED_NL);
            }
            fallthru = FALSE;
	    if (!c && p->in_kwarg) {
		goto normal_newline;
	    }
	    goto retry;
	}
	while (1) {
	    switch (c = nextc(p)) {
	      case ' ': case '\t': case '\f': case '\r':
	      case '\13': /* '\v' */
		space_seen = 1;
		break;
	      case '#':
		pushback(p, c);
		if (space_seen) dispatch_scan_event(p, tSP);
		goto retry;
	      case '&':
	      case '.': {
		dispatch_delayed_token(p, tIGNORED_NL);
		if (peek(p, '.') == (c == '&')) {
		    pushback(p, c);
		    dispatch_scan_event(p, tSP);
		    goto retry;
		}
	      }
	      default:
		p->ruby_sourceline--;
		p->lex.nextline = p->lex.lastline;
	      case -1:		/* EOF no decrement*/
#ifndef RIPPER
		if (p->lex.prevline && !p->eofp) p->lex.lastline = p->lex.prevline;
		p->lex.pbeg = RSTRING_PTR(p->lex.lastline);
		p->lex.pend = p->lex.pcur = p->lex.pbeg + RSTRING_LEN(p->lex.lastline);
		pushback(p, 1); /* always pushback */
		p->lex.ptok = p->lex.pcur;
#else
		lex_goto_eol(p);
		if (c != -1) {
		    p->lex.ptok = p->lex.pcur;
		}
#endif
		goto normal_newline;
	    }
	}
      normal_newline:
	p->command_start = TRUE;
	SET_LEX_STATE(EXPR_BEG);
	return '\n';

      case '*':
	if ((c = nextc(p)) == '*') {
	    if ((c = nextc(p)) == '=') {
		set_yylval_id(idPow);
		SET_LEX_STATE(EXPR_BEG);
		return tOP_ASGN;
	    }
	    pushback(p, c);
	    if (IS_SPCARG(c)) {
		rb_warning0("`**' interpreted as argument prefix");
		c = tDSTAR;
	    }
	    else if (IS_BEG()) {
		c = tDSTAR;
	    }
	    else {
		c = warn_balanced((enum ruby_method_ids)tPOW, "**", "argument prefix");
	    }
	}
	else {
	    if (c == '=') {
                set_yylval_id('*');
		SET_LEX_STATE(EXPR_BEG);
		return tOP_ASGN;
	    }
	    pushback(p, c);
	    if (IS_SPCARG(c)) {
		rb_warning0("`*' interpreted as argument prefix");
		c = tSTAR;
	    }
	    else if (IS_BEG()) {
		c = tSTAR;
	    }
	    else {
		c = warn_balanced('*', "*", "argument prefix");
	    }
	}
	SET_LEX_STATE(IS_AFTER_OPERATOR() ? EXPR_ARG : EXPR_BEG);
	return c;

      case '!':
	c = nextc(p);
	if (IS_AFTER_OPERATOR()) {
	    SET_LEX_STATE(EXPR_ARG);
	    if (c == '@') {
		return '!';
	    }
	}
	else {
	    SET_LEX_STATE(EXPR_BEG);
	}
	if (c == '=') {
	    return tNEQ;
	}
	if (c == '~') {
	    return tNMATCH;
	}
	pushback(p, c);
	return '!';

      case '=':
	if (was_bol(p)) {
	    /* skip embedded rd document */
	    if (word_match_p(p, "begin", 5)) {
		int first_p = TRUE;

		lex_goto_eol(p);
		dispatch_scan_event(p, tEMBDOC_BEG);
		for (;;) {
		    lex_goto_eol(p);
		    if (!first_p) {
			dispatch_scan_event(p, tEMBDOC);
		    }
		    first_p = FALSE;
		    c = nextc(p);
		    if (c == -1) {
			compile_error(p, "embedded document meets end of file");
			return 0;
		    }
		    if (c == '=' && word_match_p(p, "end", 3)) {
			break;
		    }
		    pushback(p, c);
		}
		lex_goto_eol(p);
		dispatch_scan_event(p, tEMBDOC_END);
		goto retry;
	    }
	}

	SET_LEX_STATE(IS_AFTER_OPERATOR() ? EXPR_ARG : EXPR_BEG);
	if ((c = nextc(p)) == '=') {
	    if ((c = nextc(p)) == '=') {
		return tEQQ;
	    }
	    pushback(p, c);
	    return tEQ;
	}
	if (c == '~') {
	    return tMATCH;
	}
	else if (c == '>') {
	    return tASSOC;
	}
	pushback(p, c);
	return '=';

      case '<':
	c = nextc(p);
	if (c == '<' &&
	    !IS_lex_state(EXPR_DOT | EXPR_CLASS) &&
	    !IS_END() &&
	    (!IS_ARG() || IS_lex_state(EXPR_LABELED) || space_seen)) {
	    int token = heredoc_identifier(p);
	    if (token) return token < 0 ? 0 : token;
	}
	if (IS_AFTER_OPERATOR()) {
	    SET_LEX_STATE(EXPR_ARG);
	}
	else {
	    if (IS_lex_state(EXPR_CLASS))
		p->command_start = TRUE;
	    SET_LEX_STATE(EXPR_BEG);
	}
	if (c == '=') {
	    if ((c = nextc(p)) == '>') {
		return tCMP;
	    }
	    pushback(p, c);
	    return tLEQ;
	}
	if (c == '<') {
	    if ((c = nextc(p)) == '=') {
		set_yylval_id(idLTLT);
		SET_LEX_STATE(EXPR_BEG);
		return tOP_ASGN;
	    }
	    pushback(p, c);
	    return warn_balanced((enum ruby_method_ids)tLSHFT, "<<", "here document");
	}
	pushback(p, c);
	return '<';

      case '>':
	SET_LEX_STATE(IS_AFTER_OPERATOR() ? EXPR_ARG : EXPR_BEG);
	if ((c = nextc(p)) == '=') {
	    return tGEQ;
	}
	if (c == '>') {
	    if ((c = nextc(p)) == '=') {
		set_yylval_id(idGTGT);
		SET_LEX_STATE(EXPR_BEG);
		return tOP_ASGN;
	    }
	    pushback(p, c);
	    return tRSHFT;
	}
	pushback(p, c);
	return '>';

      case '"':
	label = (IS_LABEL_POSSIBLE() ? str_label : 0);
	p->lex.strterm = NEW_STRTERM(str_dquote | label, '"', 0);
	return tSTRING_BEG;

      case '`':
	if (IS_lex_state(EXPR_FNAME)) {
	    SET_LEX_STATE(EXPR_ENDFN);
	    return c;
	}
	if (IS_lex_state(EXPR_DOT)) {
	    if (cmd_state)
		SET_LEX_STATE(EXPR_CMDARG);
	    else
		SET_LEX_STATE(EXPR_ARG);
	    return c;
	}
	p->lex.strterm = NEW_STRTERM(str_xquote, '`', 0);
	return tXSTRING_BEG;

      case '\'':
	label = (IS_LABEL_POSSIBLE() ? str_label : 0);
	p->lex.strterm = NEW_STRTERM(str_squote | label, '\'', 0);
	return tSTRING_BEG;

      case '?':
	return parse_qmark(p, space_seen);

      case '&':
	if ((c = nextc(p)) == '&') {
	    SET_LEX_STATE(EXPR_BEG);
	    if ((c = nextc(p)) == '=') {
                set_yylval_id(idANDOP);
		SET_LEX_STATE(EXPR_BEG);
		return tOP_ASGN;
	    }
	    pushback(p, c);
	    return tANDOP;
	}
	else if (c == '=') {
            set_yylval_id('&');
	    SET_LEX_STATE(EXPR_BEG);
	    return tOP_ASGN;
	}
	else if (c == '.') {
	    set_yylval_id(idANDDOT);
	    SET_LEX_STATE(EXPR_DOT);
	    return tANDDOT;
	}
	pushback(p, c);
	if (IS_SPCARG(c)) {
	    if ((c != ':') ||
		(c = peekc_n(p, 1)) == -1 ||
		!(c == '\'' || c == '"' ||
		  is_identchar((p->lex.pcur+1), p->lex.pend, p->enc))) {
		rb_warning0("`&' interpreted as argument prefix");
	    }
	    c = tAMPER;
	}
	else if (IS_BEG()) {
	    c = tAMPER;
	}
	else {
	    c = warn_balanced('&', "&", "argument prefix");
	}
	SET_LEX_STATE(IS_AFTER_OPERATOR() ? EXPR_ARG : EXPR_BEG);
	return c;

      case '|':
	if ((c = nextc(p)) == '|') {
	    SET_LEX_STATE(EXPR_BEG);
	    if ((c = nextc(p)) == '=') {
                set_yylval_id(idOROP);
		SET_LEX_STATE(EXPR_BEG);
		return tOP_ASGN;
	    }
	    pushback(p, c);
	    if (IS_lex_state_for(last_state, EXPR_BEG)) {
		c = '|';
		pushback(p, '|');
		return c;
	    }
	    return tOROP;
	}
	if (c == '=') {
            set_yylval_id('|');
	    SET_LEX_STATE(EXPR_BEG);
	    return tOP_ASGN;
	}
	SET_LEX_STATE(IS_AFTER_OPERATOR() ? EXPR_ARG : EXPR_BEG|EXPR_LABEL);
	pushback(p, c);
	return '|';

      case '+':
	c = nextc(p);
	if (IS_AFTER_OPERATOR()) {
	    SET_LEX_STATE(EXPR_ARG);
	    if (c == '@') {
		return tUPLUS;
	    }
	    pushback(p, c);
	    return '+';
	}
	if (c == '=') {
            set_yylval_id('+');
	    SET_LEX_STATE(EXPR_BEG);
	    return tOP_ASGN;
	}
	if (IS_BEG() || (IS_SPCARG(c) && arg_ambiguous(p, '+'))) {
	    SET_LEX_STATE(EXPR_BEG);
	    pushback(p, c);
	    if (c != -1 && ISDIGIT(c)) {
		return parse_numeric(p, '+');
	    }
	    return tUPLUS;
	}
	SET_LEX_STATE(EXPR_BEG);
	pushback(p, c);
	return warn_balanced('+', "+", "unary operator");

      case '-':
	c = nextc(p);
	if (IS_AFTER_OPERATOR()) {
	    SET_LEX_STATE(EXPR_ARG);
	    if (c == '@') {
		return tUMINUS;
	    }
	    pushback(p, c);
	    return '-';
	}
	if (c == '=') {
            set_yylval_id('-');
	    SET_LEX_STATE(EXPR_BEG);
	    return tOP_ASGN;
	}
	if (c == '>') {
	    SET_LEX_STATE(EXPR_ENDFN);
	    return tLAMBDA;
	}
	if (IS_BEG() || (IS_SPCARG(c) && arg_ambiguous(p, '-'))) {
	    SET_LEX_STATE(EXPR_BEG);
	    pushback(p, c);
	    if (c != -1 && ISDIGIT(c)) {
		return tUMINUS_NUM;
	    }
	    return tUMINUS;
	}
	SET_LEX_STATE(EXPR_BEG);
	pushback(p, c);
	return warn_balanced('-', "-", "unary operator");

      case '.': {
        int is_beg = IS_BEG();
	SET_LEX_STATE(EXPR_BEG);
	if ((c = nextc(p)) == '.') {
	    if ((c = nextc(p)) == '.') {
		if (p->lex.paren_nest == 0 && looking_at_eol_p(p)) {
		    rb_warn0("... at EOL, should be parenthesized?");
		}
		return is_beg ? tBDOT3 : tDOT3;
	    }
	    pushback(p, c);
	    return is_beg ? tBDOT2 : tDOT2;
	}
	pushback(p, c);
	if (c != -1 && ISDIGIT(c)) {
	    char prev = p->lex.pcur-1 > p->lex.pbeg ? *(p->lex.pcur-2) : 0;
	    parse_numeric(p, '.');
	    if (ISDIGIT(prev)) {
		yyerror0("unexpected fraction part after numeric literal");
	    }
	    else {
		yyerror0("no .<digit> floating literal anymore; put 0 before dot");
	    }
	    SET_LEX_STATE(EXPR_END);
	    p->lex.ptok = p->lex.pcur;
	    goto retry;
	}
	set_yylval_id('.');
	SET_LEX_STATE(EXPR_DOT);
	return '.';
      }

      case '0': case '1': case '2': case '3': case '4':
      case '5': case '6': case '7': case '8': case '9':
	return parse_numeric(p, c);

      case ')':
	COND_POP();
	CMDARG_POP();
	SET_LEX_STATE(EXPR_ENDFN);
	p->lex.paren_nest--;
	return c;

      case ']':
	COND_POP();
	CMDARG_POP();
	SET_LEX_STATE(EXPR_END);
	p->lex.paren_nest--;
	return c;

      case '}':
	/* tSTRING_DEND does COND_POP and CMDARG_POP in the yacc's rule */
	if (!p->lex.brace_nest--) return tSTRING_DEND;
	COND_POP();
	CMDARG_POP();
	SET_LEX_STATE(EXPR_END);
	p->lex.paren_nest--;
	return c;

      case ':':
	c = nextc(p);
	if (c == ':') {
	    if (IS_BEG() || IS_lex_state(EXPR_CLASS) || IS_SPCARG(-1)) {
		SET_LEX_STATE(EXPR_BEG);
		return tCOLON3;
	    }
	    set_yylval_id(idCOLON2);
	    SET_LEX_STATE(EXPR_DOT);
	    return tCOLON2;
	}
	if (IS_END() || ISSPACE(c) || c == '#') {
	    pushback(p, c);
	    c = warn_balanced(':', ":", "symbol literal");
	    SET_LEX_STATE(EXPR_BEG);
	    return c;
	}
	switch (c) {
	  case '\'':
	    p->lex.strterm = NEW_STRTERM(str_ssym, c, 0);
	    break;
	  case '"':
	    p->lex.strterm = NEW_STRTERM(str_dsym, c, 0);
	    break;
	  default:
	    pushback(p, c);
	    break;
	}
	SET_LEX_STATE(EXPR_FNAME);
	return tSYMBEG;

      case '/':
	if (IS_BEG()) {
	    p->lex.strterm = NEW_STRTERM(str_regexp, '/', 0);
	    return tREGEXP_BEG;
	}
	if ((c = nextc(p)) == '=') {
            set_yylval_id('/');
	    SET_LEX_STATE(EXPR_BEG);
	    return tOP_ASGN;
	}
	pushback(p, c);
	if (IS_SPCARG(c)) {
	    arg_ambiguous(p, '/');
	    p->lex.strterm = NEW_STRTERM(str_regexp, '/', 0);
	    return tREGEXP_BEG;
	}
	SET_LEX_STATE(IS_AFTER_OPERATOR() ? EXPR_ARG : EXPR_BEG);
	return warn_balanced('/', "/", "regexp literal");

      case '^':
	if ((c = nextc(p)) == '=') {
            set_yylval_id('^');
	    SET_LEX_STATE(EXPR_BEG);
	    return tOP_ASGN;
	}
	SET_LEX_STATE(IS_AFTER_OPERATOR() ? EXPR_ARG : EXPR_BEG);
	pushback(p, c);
	return '^';

      case ';':
	SET_LEX_STATE(EXPR_BEG);
	p->command_start = TRUE;
	return ';';

      case ',':
	SET_LEX_STATE(EXPR_BEG|EXPR_LABEL);
	return ',';

      case '~':
	if (IS_AFTER_OPERATOR()) {
	    if ((c = nextc(p)) != '@') {
		pushback(p, c);
	    }
	    SET_LEX_STATE(EXPR_ARG);
	}
	else {
	    SET_LEX_STATE(EXPR_BEG);
	}
	return '~';

      case '(':
	if (IS_BEG()) {
	    c = tLPAREN;
	}
	else if (!space_seen) {
	    /* foo( ... ) => method call, no ambiguity */
	}
	else if (IS_ARG() || IS_lex_state_all(EXPR_END|EXPR_LABEL)) {
	    c = tLPAREN_ARG;
	}
	else if (IS_lex_state(EXPR_ENDFN) && !lambda_beginning_p()) {
	    rb_warning0("parentheses after method name is interpreted as "
			"an argument list, not a decomposed argument");
	}
	p->lex.paren_nest++;
	COND_PUSH(0);
	CMDARG_PUSH(0);
	SET_LEX_STATE(EXPR_BEG|EXPR_LABEL);
	return c;

      case '[':
	p->lex.paren_nest++;
	if (IS_AFTER_OPERATOR()) {
	    if ((c = nextc(p)) == ']') {
		SET_LEX_STATE(EXPR_ARG);
		if ((c = nextc(p)) == '=') {
		    return tASET;
		}
		pushback(p, c);
		return tAREF;
	    }
	    pushback(p, c);
	    SET_LEX_STATE(EXPR_ARG|EXPR_LABEL);
	    return '[';
	}
	else if (IS_BEG()) {
	    c = tLBRACK;
	}
	else if (IS_ARG() && (space_seen || IS_lex_state(EXPR_LABELED))) {
	    c = tLBRACK;
	}
	SET_LEX_STATE(EXPR_BEG|EXPR_LABEL);
	COND_PUSH(0);
	CMDARG_PUSH(0);
	return c;

      case '{':
	++p->lex.brace_nest;
	if (lambda_beginning_p())
	    c = tLAMBEG;
	else if (IS_lex_state(EXPR_LABELED))
	    c = tLBRACE;      /* hash */
	else if (IS_lex_state(EXPR_ARG_ANY | EXPR_END | EXPR_ENDFN))
	    c = '{';          /* block (primary) */
	else if (IS_lex_state(EXPR_ENDARG))
	    c = tLBRACE_ARG;  /* block (expr) */
	else
	    c = tLBRACE;      /* hash */
	if (c != tLBRACE) {
	    p->command_start = TRUE;
	    SET_LEX_STATE(EXPR_BEG);
	}
	else {
	    SET_LEX_STATE(EXPR_BEG|EXPR_LABEL);
	}
	++p->lex.paren_nest;  /* after lambda_beginning_p() */
	COND_PUSH(0);
	CMDARG_PUSH(0);
	return c;

      case '\\':
	c = nextc(p);
	if (c == '\n') {
	    space_seen = 1;
	    dispatch_scan_event(p, tSP);
	    goto retry; /* skip \\n */
	}
	if (c == ' ') return tSP;
	if (ISSPACE(c)) return c;
	pushback(p, c);
	return '\\';

      case '%':
	return parse_percent(p, space_seen, last_state);

      case '$':
	return parse_gvar(p, last_state);

      case '@':
	return parse_atmark(p, last_state);

      case '_':
	if (was_bol(p) && whole_match_p(p, "__END__", 7, 0)) {
	    p->ruby__end__seen = 1;
	    p->eofp = 1;
#ifndef RIPPER
	    return -1;
#else
            lex_goto_eol(p);
            dispatch_scan_event(p, k__END__);
            return 0;
#endif
	}
	newtok(p);
	break;

      default:
	if (!parser_is_identchar(p)) {
	    compile_error(p, "Invalid char `\\x%02X' in expression", c);
            token_flush(p);
	    goto retry;
	}

	newtok(p);
	break;
    }

    return parse_ident(p, c, cmd_state);
}

static enum yytokentype
yylex(YYSTYPE *lval, YYLTYPE *yylloc, struct parser_params *p)
{
    enum yytokentype t;

    p->lval = lval;
    lval->val = Qundef;
    t = parser_yylex(p);
    if (has_delayed_token(p))
	dispatch_delayed_token(p, t);
    else if (t != 0)
	dispatch_scan_event(p, t);

    if (p->lex.strterm && (p->lex.strterm->flags & STRTERM_HEREDOC))
	RUBY_SET_YYLLOC_FROM_STRTERM_HEREDOC(*yylloc);
    else
	RUBY_SET_YYLLOC(*yylloc);

    return t;
}

#define LVAR_USED ((ID)1 << (sizeof(ID) * CHAR_BIT - 1))

static NODE*
node_newnode(struct parser_params *p, enum node_type type, VALUE a0, VALUE a1, VALUE a2, const rb_code_location_t *loc)
{
    NODE *n = rb_ast_newnode(p->ast, type);

    rb_node_init(n, type, a0, a1, a2);

    nd_set_loc(n, loc);
    nd_set_node_id(n, parser_get_node_id(p));
    return n;
}

static NODE *
nd_set_loc(NODE *nd, const YYLTYPE *loc)
{
    nd->nd_loc = *loc;
    nd_set_line(nd, loc->beg_pos.lineno);
    return nd;
}

#ifndef RIPPER
static enum node_type
nodetype(NODE *node)			/* for debug */
{
    return (enum node_type)nd_type(node);
}

static int
nodeline(NODE *node)
{
    return nd_line(node);
}

static NODE*
newline_node(NODE *node)
{
    if (node) {
	node = remove_begin(node);
	node->flags |= NODE_FL_NEWLINE;
    }
    return node;
}

static void
fixpos(NODE *node, NODE *orig)
{
    if (!node) return;
    if (!orig) return;
    nd_set_line(node, nd_line(orig));
}

static void
parser_warning(struct parser_params *p, NODE *node, const char *mesg)
{
    rb_compile_warning(p->ruby_sourcefile, nd_line(node), "%s", mesg);
}

static void
parser_warn(struct parser_params *p, NODE *node, const char *mesg)
{
    rb_compile_warn(p->ruby_sourcefile, nd_line(node), "%s", mesg);
}

static NODE*
block_append(struct parser_params *p, NODE *head, NODE *tail)
{
    NODE *end, *h = head, *nd;

    if (tail == 0) return head;

    if (h == 0) return tail;
    switch (nd_type(h)) {
      case NODE_LIT:
      case NODE_STR:
      case NODE_SELF:
      case NODE_TRUE:
      case NODE_FALSE:
      case NODE_NIL:
	parser_warning(p, h, "unused literal ignored");
	return tail;
      default:
	h = end = NEW_BLOCK(head, &head->nd_loc);
	end->nd_end = end;
	head = end;
	break;
      case NODE_BLOCK:
	end = h->nd_end;
	break;
    }

    nd = end->nd_head;
    switch (nd_type(nd)) {
      case NODE_RETURN:
      case NODE_BREAK:
      case NODE_NEXT:
      case NODE_REDO:
      case NODE_RETRY:
	if (RTEST(ruby_verbose)) {
	    parser_warning(p, tail, "statement not reached");
	}
	break;

      default:
	break;
    }

    if (nd_type(tail) != NODE_BLOCK) {
	tail = NEW_BLOCK(tail, &tail->nd_loc);
	tail->nd_end = tail;
    }
    end->nd_next = tail;
    h->nd_end = tail->nd_end;
    nd_set_last_loc(head, nd_last_loc(tail));
    return head;
}

/* append item to the list */
static NODE*
list_append(struct parser_params *p, NODE *list, NODE *item)
{
    NODE *last;

    if (list == 0) return NEW_LIST(item, &item->nd_loc);
    if (list->nd_next) {
	last = list->nd_next->nd_end;
    }
    else {
	last = list;
    }

    list->nd_alen += 1;
    last->nd_next = NEW_LIST(item, &item->nd_loc);
    list->nd_next->nd_end = last->nd_next;

    nd_set_last_loc(list, nd_last_loc(item));

    return list;
}

/* concat two lists */
static NODE*
list_concat(NODE *head, NODE *tail)
{
    NODE *last;

    if (head->nd_next) {
	last = head->nd_next->nd_end;
    }
    else {
	last = head;
    }

    head->nd_alen += tail->nd_alen;
    last->nd_next = tail;
    if (tail->nd_next) {
	head->nd_next->nd_end = tail->nd_next->nd_end;
    }
    else {
	head->nd_next->nd_end = tail;
    }

    nd_set_last_loc(head, nd_last_loc(tail));

    return head;
}

static int
literal_concat0(struct parser_params *p, VALUE head, VALUE tail)
{
    if (NIL_P(tail)) return 1;
    if (!rb_enc_compatible(head, tail)) {
	compile_error(p, "string literal encodings differ (%s / %s)",
		      rb_enc_name(rb_enc_get(head)),
		      rb_enc_name(rb_enc_get(tail)));
	rb_str_resize(head, 0);
	rb_str_resize(tail, 0);
	return 0;
    }
    rb_str_buf_append(head, tail);
    return 1;
}

/* concat two string literals */
static NODE *
literal_concat(struct parser_params *p, NODE *head, NODE *tail, const YYLTYPE *loc)
{
    enum node_type htype;
    NODE *headlast;
    VALUE lit;

    if (!head) return tail;
    if (!tail) return head;

    htype = nd_type(head);
    if (htype == NODE_EVSTR) {
	NODE *node = NEW_DSTR(STR_NEW0(), loc);
        RB_OBJ_WRITTEN(p->ast, Qnil, node->nd_lit);
	head = list_append(p, node, head);
	htype = NODE_DSTR;
    }
    if (p->heredoc_indent > 0) {
	switch (htype) {
	  case NODE_STR:
	    nd_set_type(head, NODE_DSTR);
	  case NODE_DSTR:
	    return list_append(p, head, tail);
	  default:
	    break;
	}
    }
    switch (nd_type(tail)) {
      case NODE_STR:
	if (htype == NODE_DSTR && (headlast = head->nd_next->nd_end->nd_head) &&
	    nd_type(headlast) == NODE_STR) {
	    htype = NODE_STR;
	    lit = headlast->nd_lit;
	}
	else {
	    lit = head->nd_lit;
	}
	if (htype == NODE_STR) {
	    if (!literal_concat0(p, lit, tail->nd_lit)) {
	      error:
		rb_discard_node(p, head);
		rb_discard_node(p, tail);
		return 0;
	    }
	    rb_discard_node(p, tail);
	}
	else {
	    list_append(p, head, tail);
	}
	break;

      case NODE_DSTR:
	if (htype == NODE_STR) {
	    if (!literal_concat0(p, head->nd_lit, tail->nd_lit))
		goto error;
	    tail->nd_lit = head->nd_lit;
	    rb_discard_node(p, head);
	    head = tail;
	}
	else if (NIL_P(tail->nd_lit)) {
	  append:
	    head->nd_alen += tail->nd_alen - 1;
	    head->nd_next->nd_end->nd_next = tail->nd_next;
	    head->nd_next->nd_end = tail->nd_next->nd_end;
	    rb_discard_node(p, tail);
	}
	else if (htype == NODE_DSTR && (headlast = head->nd_next->nd_end->nd_head) &&
		 nd_type(headlast) == NODE_STR) {
	    lit = headlast->nd_lit;
	    if (!literal_concat0(p, lit, tail->nd_lit))
		goto error;
	    tail->nd_lit = Qnil;
	    goto append;
	}
	else {
	    list_concat(head, NEW_NODE(NODE_LIST, NEW_STR(tail->nd_lit, loc), tail->nd_alen, tail->nd_next, loc));
	}
	break;

      case NODE_EVSTR:
	if (htype == NODE_STR) {
	    nd_set_type(head, NODE_DSTR);
	    head->nd_alen = 1;
	}
	list_append(p, head, tail);
	break;
    }
    return head;
}

static NODE *
evstr2dstr(struct parser_params *p, NODE *node)
{
    if (nd_type(node) == NODE_EVSTR) {
	NODE * dstr = NEW_DSTR(STR_NEW0(), &node->nd_loc);
        RB_OBJ_WRITTEN(p->ast, Qnil, dstr->nd_lit);
	node = list_append(p, dstr, node);
    }
    return node;
}

static NODE *
new_evstr(struct parser_params *p, NODE *node, const YYLTYPE *loc)
{
    NODE *head = node;

    if (node) {
	switch (nd_type(node)) {
	  case NODE_STR: case NODE_DSTR: case NODE_EVSTR:
	    return node;
	}
    }
    return NEW_EVSTR(head, loc);
}

static NODE *
call_bin_op(struct parser_params *p, NODE *recv, ID id, NODE *arg1,
		const YYLTYPE *op_loc, const YYLTYPE *loc)
{
    NODE *expr;
    value_expr(recv);
    value_expr(arg1);
    expr = NEW_OPCALL(recv, id, NEW_LIST(arg1, &arg1->nd_loc), loc);
    nd_set_line(expr, op_loc->beg_pos.lineno);
    return expr;
}

static NODE *
call_uni_op(struct parser_params *p, NODE *recv, ID id, const YYLTYPE *op_loc, const YYLTYPE *loc)
{
    NODE *opcall;
    value_expr(recv);
    opcall = NEW_OPCALL(recv, id, 0, loc);
    nd_set_line(opcall, op_loc->beg_pos.lineno);
    return opcall;
}

static NODE *
new_qcall(struct parser_params* p, ID atype, NODE *recv, ID mid, NODE *args, const YYLTYPE *op_loc, const YYLTYPE *loc)
{
    NODE *qcall = NEW_QCALL(atype, recv, mid, args, loc);
    nd_set_line(qcall, op_loc->beg_pos.lineno);
    return qcall;
}

static NODE*
new_command_qcall(struct parser_params* p, ID atype, NODE *recv, ID mid, NODE *args, NODE *block, const YYLTYPE *op_loc, const YYLTYPE *loc)
{
    NODE *ret;
    if (block) block_dup_check(p, args, block);
    ret = new_qcall(p, atype, recv, mid, args, op_loc, loc);
    if (block) ret = method_add_block(p, ret, block, loc);
    fixpos(ret, recv);
    return ret;
}

#define nd_once_body(node) (nd_type(node) == NODE_ONCE ? (node)->nd_body : node)
static NODE*
match_op(struct parser_params *p, NODE *node1, NODE *node2, const YYLTYPE *op_loc, const YYLTYPE *loc)
{
    NODE *n;
    int line = op_loc->beg_pos.lineno;

    value_expr(node1);
    value_expr(node2);
    if (node1 && (n = nd_once_body(node1)) != 0) {
	switch (nd_type(n)) {
	  case NODE_DREGX:
	    {
		NODE *match = NEW_MATCH2(node1, node2, loc);
		nd_set_line(match, line);
		return match;
	    }

	  case NODE_LIT:
	    if (RB_TYPE_P(n->nd_lit, T_REGEXP)) {
		const VALUE lit = n->nd_lit;
		NODE *match = NEW_MATCH2(node1, node2, loc);
		match->nd_args = reg_named_capture_assign(p, lit, loc);
		nd_set_line(match, line);
		return match;
	    }
	}
    }

    if (node2 && (n = nd_once_body(node2)) != 0) {
        NODE *match3;

	switch (nd_type(n)) {
	  case NODE_LIT:
	    if (!RB_TYPE_P(n->nd_lit, T_REGEXP)) break;
	    /* fallthru */
	  case NODE_DREGX:
	    match3 = NEW_MATCH3(node2, node1, loc);
	    return match3;
	}
    }

    n = NEW_CALL(node1, tMATCH, NEW_LIST(node2, &node2->nd_loc), loc);
    nd_set_line(n, line);
    return n;
}

# if WARN_PAST_SCOPE
static int
past_dvar_p(struct parser_params *p, ID id)
{
    struct vtable *past = p->lvtbl->past;
    while (past) {
	if (vtable_included(past, id)) return 1;
	past = past->prev;
    }
    return 0;
}
# endif

/* As Ripper#warn does not have arguments for the location, so the
 * following messages cannot be separated */
#define WARN_LOCATION(type) do { \
    if (p->warn_location) { \
	int line; \
	VALUE file = rb_source_location(&line); \
	rb_warn3(type" in eval may not return location in binding;" \
		 " use Binding#source_location instead\n" \
		 "%"PRIsWARN":%d: warning: in `%"PRIsWARN"'", \
		 file, WARN_I(line), rb_id2str(rb_frame_this_func())); \
    } \
} while (0)

static int
numparam_nested_p(struct parser_params *p)
{
    struct local_vars *local = p->lvtbl;
    NODE *outer = local->numparam.outer;
    NODE *inner = local->numparam.inner;
    if (outer || inner) {
	NODE *used = outer ? outer : inner;
	compile_error(p, "numbered parameter is already used in\n"
		      "%s:%d: %s block here",
		      p->ruby_sourcefile, nd_line(used),
		      outer ? "outer" : "inner");
	parser_show_error_line(p, &used->nd_loc);
	return 1;
    }
    return 0;
}

static NODE*
gettable(struct parser_params *p, ID id, const YYLTYPE *loc)
{
    ID *vidp = NULL;
    NODE *node;
    switch (id) {
      case keyword_self:
	return NEW_SELF(loc);
      case keyword_nil:
	return NEW_NIL(loc);
      case keyword_true:
	return NEW_TRUE(loc);
      case keyword_false:
	return NEW_FALSE(loc);
      case keyword__FILE__:
	WARN_LOCATION("__FILE__");
	{
	    VALUE file = p->ruby_sourcefile_string;
	    if (NIL_P(file))
		file = rb_str_new(0, 0);
	    else
		file = rb_str_dup(file);
	    node = NEW_STR(file, loc);
            RB_OBJ_WRITTEN(p->ast, Qnil, file);
	}
	return node;
      case keyword__LINE__:
	WARN_LOCATION("__LINE__");
	return NEW_LIT(INT2FIX(p->tokline), loc);
      case keyword__ENCODING__:
        node = NEW_LIT(rb_enc_from_encoding(p->enc), loc);
        RB_OBJ_WRITTEN(p->ast, Qnil, node->nd_lit);
        return node;

    }
    switch (id_type(id)) {
      case ID_LOCAL:
	if (dyna_in_block(p) && dvar_defined_ref(p, id, &vidp)) {
	    if (NUMPARAM_ID_P(id) && numparam_nested_p(p)) return 0;
	    if (id == p->cur_arg) {
                compile_error(p, "circular argument reference - %"PRIsWARN, rb_id2str(id));
                return 0;
	    }
	    if (vidp) *vidp |= LVAR_USED;
	    node = NEW_DVAR(id, loc);
	    return node;
	}
	if (local_id_ref(p, id, &vidp)) {
	    if (id == p->cur_arg) {
                compile_error(p, "circular argument reference - %"PRIsWARN, rb_id2str(id));
                return 0;
	    }
	    if (vidp) *vidp |= LVAR_USED;
	    node = NEW_LVAR(id, loc);
	    return node;
	}
	if (dyna_in_block(p) && NUMPARAM_ID_P(id) &&
	    parser_numbered_param(p, NUMPARAM_ID_TO_IDX(id))) {
	    if (numparam_nested_p(p)) return 0;
	    node = NEW_DVAR(id, loc);
	    struct local_vars *local = p->lvtbl;
	    if (!local->numparam.current) local->numparam.current = node;
	    return node;
	}
# if WARN_PAST_SCOPE
	if (!p->in_defined && RTEST(ruby_verbose) && past_dvar_p(p, id)) {
	    rb_warning1("possible reference to past scope - %"PRIsWARN, rb_id2str(id));
	}
# endif
	/* method call without arguments */
	return NEW_VCALL(id, loc);
      case ID_GLOBAL:
	return NEW_GVAR(id, loc);
      case ID_INSTANCE:
	return NEW_IVAR(id, loc);
      case ID_CONST:
	return NEW_CONST(id, loc);
      case ID_CLASS:
	return NEW_CVAR(id, loc);
    }
    compile_error(p, "identifier %"PRIsVALUE" is not valid to get", rb_id2str(id));
    return 0;
}

static NODE *
opt_arg_append(NODE *opt_list, NODE *opt)
{
    NODE *opts = opt_list;
    opts->nd_loc.end_pos = opt->nd_loc.end_pos;

    while (opts->nd_next) {
	opts = opts->nd_next;
	opts->nd_loc.end_pos = opt->nd_loc.end_pos;
    }
    opts->nd_next = opt;

    return opt_list;
}

static NODE *
kwd_append(NODE *kwlist, NODE *kw)
{
    if (kwlist) {
	NODE *kws = kwlist;
	kws->nd_loc.end_pos = kw->nd_loc.end_pos;
	while (kws->nd_next) {
	    kws = kws->nd_next;
	    kws->nd_loc.end_pos = kw->nd_loc.end_pos;
	}
	kws->nd_next = kw;
    }
    return kwlist;
}

static NODE *
new_defined(struct parser_params *p, NODE *expr, const YYLTYPE *loc)
{
    return NEW_DEFINED(remove_begin_all(expr), loc);
}

static NODE*
symbol_append(struct parser_params *p, NODE *symbols, NODE *symbol)
{
    if (nd_type(symbol) == NODE_DSTR) {
	nd_set_type(symbol, NODE_DSYM);
    }
    else {
	nd_set_type(symbol, NODE_LIT);
	RB_OBJ_WRITTEN(p->ast, Qnil, symbol->nd_lit = rb_str_intern(symbol->nd_lit));
    }
    return list_append(p, symbols, symbol);
}

static NODE *
new_regexp(struct parser_params *p, NODE *node, int options, const YYLTYPE *loc)
{
    NODE *list, *prev;
    VALUE lit;

    if (!node) {
	node = NEW_LIT(reg_compile(p, STR_NEW0(), options), loc);
	RB_OBJ_WRITTEN(p->ast, Qnil, node->nd_lit);
        return node;
    }
    switch (nd_type(node)) {
      case NODE_STR:
	{
	    VALUE src = node->nd_lit;
	    nd_set_type(node, NODE_LIT);
	    nd_set_loc(node, loc);
	    RB_OBJ_WRITTEN(p->ast, Qnil, node->nd_lit = reg_compile(p, src, options));
	}
	break;
      default:
	lit = STR_NEW0();
	node = NEW_NODE(NODE_DSTR, lit, 1, NEW_LIST(node, loc), loc);
        RB_OBJ_WRITTEN(p->ast, Qnil, lit);
	/* fall through */
      case NODE_DSTR:
	nd_set_type(node, NODE_DREGX);
	nd_set_loc(node, loc);
	node->nd_cflag = options & RE_OPTION_MASK;
	if (!NIL_P(node->nd_lit)) reg_fragment_check(p, node->nd_lit, options);
	for (list = (prev = node)->nd_next; list; list = list->nd_next) {
	    if (nd_type(list->nd_head) == NODE_STR) {
		VALUE tail = list->nd_head->nd_lit;
		if (reg_fragment_check(p, tail, options) && prev && !NIL_P(prev->nd_lit)) {
		    VALUE lit = prev == node ? prev->nd_lit : prev->nd_head->nd_lit;
		    if (!literal_concat0(p, lit, tail)) {
			return NEW_NIL(loc); /* dummy node on error */
		    }
		    rb_str_resize(tail, 0);
		    prev->nd_next = list->nd_next;
		    rb_discard_node(p, list->nd_head);
		    rb_discard_node(p, list);
		    list = prev;
		}
		else {
		    prev = list;
		}
	    }
	    else {
		prev = 0;
	    }
	}
	if (!node->nd_next) {
	    VALUE src = node->nd_lit;
	    nd_set_type(node, NODE_LIT);
	    RB_OBJ_WRITTEN(p->ast, Qnil, node->nd_lit = reg_compile(p, src, options));
	}
	if (options & RE_OPTION_ONCE) {
	    node = NEW_NODE(NODE_ONCE, 0, node, 0, loc);
	}
	break;
    }
    return node;
}

static NODE *
new_kw_arg(struct parser_params *p, NODE *k, const YYLTYPE *loc)
{
    if (!k) return 0;
    return NEW_KW_ARG(0, (k), loc);
}

static NODE *
new_xstring(struct parser_params *p, NODE *node, const YYLTYPE *loc)
{
    if (!node) {
	VALUE lit = STR_NEW0();
	NODE *xstr = NEW_XSTR(lit, loc);
	RB_OBJ_WRITTEN(p->ast, Qnil, lit);
	return xstr;
    }
    switch (nd_type(node)) {
      case NODE_STR:
	nd_set_type(node, NODE_XSTR);
	nd_set_loc(node, loc);
	break;
      case NODE_DSTR:
	nd_set_type(node, NODE_DXSTR);
	nd_set_loc(node, loc);
	break;
      default:
	node = NEW_NODE(NODE_DXSTR, Qnil, 1, NEW_LIST(node, loc), loc);
	break;
    }
    return node;
}

static void
check_literal_when(struct parser_params *p, NODE *arg, const YYLTYPE *loc)
{
    VALUE lit;

    if (!arg || !p->case_labels) return;

    lit = rb_node_case_when_optimizable_literal(arg);
    if (lit == Qundef) return;
    if (nd_type(arg) == NODE_STR) {
	RB_OBJ_WRITTEN(p->ast, Qnil, arg->nd_lit = lit);
    }

    if (NIL_P(p->case_labels)) {
	p->case_labels = rb_obj_hide(rb_hash_new());
    }
    else {
	VALUE line = rb_hash_lookup(p->case_labels, lit);
	if (!NIL_P(line)) {
	    rb_warning1("duplicated `when' clause with line %d is ignored",
			WARN_IVAL(line));
	    return;
	}
    }
    rb_hash_aset(p->case_labels, lit, INT2NUM(p->ruby_sourceline));
}

#else  /* !RIPPER */
static int
id_is_var(struct parser_params *p, ID id)
{
    if (is_notop_id(id)) {
	switch (id & ID_SCOPE_MASK) {
	  case ID_GLOBAL: case ID_INSTANCE: case ID_CONST: case ID_CLASS:
	    return 1;
	  case ID_LOCAL:
	    if (dyna_in_block(p)) {
		if (NUMPARAM_ID_P(id) || dvar_defined(p, id)) return 1;
	    }
	    if (local_id(p, id)) return 1;
	    /* method call without arguments */
	    return 0;
	}
    }
    compile_error(p, "identifier %"PRIsVALUE" is not valid to get", rb_id2str(id));
    return 0;
}

static VALUE
new_regexp(struct parser_params *p, VALUE re, VALUE opt, const YYLTYPE *loc)
{
    VALUE src = 0, err;
    int options = 0;
    if (ripper_is_node_yylval(re)) {
	src = RNODE(re)->nd_cval;
	re = RNODE(re)->nd_rval;
    }
    if (ripper_is_node_yylval(opt)) {
	options = (int)RNODE(opt)->nd_tag;
	opt = RNODE(opt)->nd_rval;
    }
    if (src && NIL_P(parser_reg_compile(p, src, options, &err))) {
	compile_error(p, "%"PRIsVALUE, err);
    }
    return dispatch2(regexp_literal, re, opt);
}
#endif /* !RIPPER */


#ifndef RIPPER
static const char rb_parser_lex_state_names[][8] = {
    "BEG",    "END",    "ENDARG", "ENDFN",  "ARG",
    "CMDARG", "MID",    "FNAME",  "DOT",    "CLASS",
    "LABEL",  "LABELED","FITEM",
};

static VALUE
append_lex_state_name(enum lex_state_e state, VALUE buf)
{
    int i, sep = 0;
    unsigned int mask = 1;
    static const char none[] = "NONE";

    for (i = 0; i < EXPR_MAX_STATE; ++i, mask <<= 1) {
	if ((unsigned)state & mask) {
	    if (sep) {
		rb_str_cat(buf, "|", 1);
	    }
	    sep = 1;
	    rb_str_cat_cstr(buf, rb_parser_lex_state_names[i]);
	}
    }
    if (!sep) {
	rb_str_cat(buf, none, sizeof(none)-1);
    }
    return buf;
}

static void
flush_debug_buffer(struct parser_params *p, VALUE out, VALUE str)
{
    VALUE mesg = p->debug_buffer;

    if (!NIL_P(mesg) && RSTRING_LEN(mesg)) {
	p->debug_buffer = Qnil;
	rb_io_puts(1, &mesg, out);
    }
    if (!NIL_P(str) && RSTRING_LEN(str)) {
	rb_io_write(p->debug_output, str);
    }
}

enum lex_state_e
rb_parser_trace_lex_state(struct parser_params *p, enum lex_state_e from,
			  enum lex_state_e to, int line)
{
    VALUE mesg;
    mesg = rb_str_new_cstr("lex_state: ");
    append_lex_state_name(from, mesg);
    rb_str_cat_cstr(mesg, " -> ");
    append_lex_state_name(to, mesg);
    rb_str_catf(mesg, " at line %d\n", line);
    flush_debug_buffer(p, p->debug_output, mesg);
    return to;
}

VALUE
rb_parser_lex_state_name(enum lex_state_e state)
{
    return rb_fstring(append_lex_state_name(state, rb_str_new(0, 0)));
}

static void
append_bitstack_value(stack_type stack, VALUE mesg)
{
    if (stack == 0) {
	rb_str_cat_cstr(mesg, "0");
    }
    else {
	stack_type mask = (stack_type)1U << (CHAR_BIT * sizeof(stack_type) - 1);
	for (; mask && !(stack & mask); mask >>= 1) continue;
	for (; mask; mask >>= 1) rb_str_cat(mesg, stack & mask ? "1" : "0", 1);
    }
}

void
rb_parser_show_bitstack(struct parser_params *p, stack_type stack,
			const char *name, int line)
{
    VALUE mesg = rb_sprintf("%s: ", name);
    append_bitstack_value(stack, mesg);
    rb_str_catf(mesg, " at line %d\n", line);
    flush_debug_buffer(p, p->debug_output, mesg);
}

void
rb_parser_fatal(struct parser_params *p, const char *fmt, ...)
{
    va_list ap;
    VALUE mesg = rb_str_new_cstr("internal parser error: ");

    va_start(ap, fmt);
    rb_str_vcatf(mesg, fmt, ap);
    va_end(ap);
    parser_yyerror(p, NULL, RSTRING_PTR(mesg));
    RB_GC_GUARD(mesg);

    mesg = rb_str_new(0, 0);
    append_lex_state_name(p->lex.state, mesg);
    compile_error(p, "lex.state: %"PRIsVALUE, mesg);
    rb_str_resize(mesg, 0);
    append_bitstack_value(p->cond_stack, mesg);
    compile_error(p, "cond_stack: %"PRIsVALUE, mesg);
    rb_str_resize(mesg, 0);
    append_bitstack_value(p->cmdarg_stack, mesg);
    compile_error(p, "cmdarg_stack: %"PRIsVALUE, mesg);
    if (p->debug_output == rb_stdout)
	p->debug_output = rb_stderr;
    p->debug = TRUE;
}

YYLTYPE *
rb_parser_set_location_from_strterm_heredoc(struct parser_params *p, rb_strterm_heredoc_t *here, YYLTYPE *yylloc)
{
    int sourceline = here->sourceline;
    int beg_pos = (int)here->offset - here->quote
	- (rb_strlen_lit("<<-") - !(here->func & STR_FUNC_INDENT));
    int end_pos = (int)here->offset + here->length + here->quote;

    yylloc->beg_pos.lineno = sourceline;
    yylloc->beg_pos.column = beg_pos;
    yylloc->end_pos.lineno = sourceline;
    yylloc->end_pos.column = end_pos;
    return yylloc;
}

YYLTYPE *
rb_parser_set_location_of_none(struct parser_params *p, YYLTYPE *yylloc)
{
    yylloc->beg_pos.lineno = p->ruby_sourceline;
    yylloc->beg_pos.column = (int)(p->lex.ptok - p->lex.pbeg);
    yylloc->end_pos.lineno = p->ruby_sourceline;
    yylloc->end_pos.column = (int)(p->lex.ptok - p->lex.pbeg);
    return yylloc;
}

YYLTYPE *
rb_parser_set_location(struct parser_params *p, YYLTYPE *yylloc)
{
    yylloc->beg_pos.lineno = p->ruby_sourceline;
    yylloc->beg_pos.column = (int)(p->lex.ptok - p->lex.pbeg);
    yylloc->end_pos.lineno = p->ruby_sourceline;
    yylloc->end_pos.column = (int)(p->lex.pcur - p->lex.pbeg);
    return yylloc;
}
#endif /* !RIPPER */

static void
parser_token_value_print(struct parser_params *p, enum yytokentype type, const YYSTYPE *valp)
{
    VALUE v;

    switch (type) {
      case tIDENTIFIER: case tFID: case tGVAR: case tIVAR:
      case tCONSTANT: case tCVAR: case tLABEL: case tOP_ASGN:
#ifndef RIPPER
	v = rb_id2str(valp->id);
#else
	v = valp->node->nd_rval;
#endif
	rb_parser_printf(p, "%"PRIsVALUE, v);
	break;
      case tINTEGER: case tFLOAT: case tRATIONAL: case tIMAGINARY:
      case tSTRING_CONTENT: case tCHAR:
#ifndef RIPPER
	v = valp->node->nd_lit;
#else
	v = valp->val;
#endif
	rb_parser_printf(p, "%+"PRIsVALUE, v);
	break;
      case tNTH_REF:
#ifndef RIPPER
	rb_parser_printf(p, "$%ld", valp->node->nd_nth);
#else
	rb_parser_printf(p, "%"PRIsVALUE, valp->val);
#endif
	break;
      case tBACK_REF:
#ifndef RIPPER
	rb_parser_printf(p, "$%c", (int)valp->node->nd_nth);
#else
	rb_parser_printf(p, "%"PRIsVALUE, valp->val);
#endif
	break;
      default:
	break;
    }
}

static int
assignable0(struct parser_params *p, ID id, const char **err)
{
    if (!id) return -1;
    switch (id) {
      case keyword_self:
	*err = "Can't change the value of self";
	return -1;
      case keyword_nil:
	*err = "Can't assign to nil";
	return -1;
      case keyword_true:
	*err = "Can't assign to true";
	return -1;
      case keyword_false:
	*err = "Can't assign to false";
	return -1;
      case keyword__FILE__:
	*err = "Can't assign to __FILE__";
	return -1;
      case keyword__LINE__:
	*err = "Can't assign to __LINE__";
	return -1;
      case keyword__ENCODING__:
	*err = "Can't assign to __ENCODING__";
	return -1;
    }
    switch (id_type(id)) {
      case ID_LOCAL:
	if (dyna_in_block(p)) {
	    if (p->max_numparam > NO_PARAM && NUMPARAM_ID_P(id)) {
		compile_error(p, "Can't assign to numbered parameter _%d",
			      NUMPARAM_ID_TO_IDX(id));
		return -1;
	    }
	    if (dvar_curr(p, id)) return NODE_DASGN_CURR;
	    if (dvar_defined(p, id)) return NODE_DASGN;
	    if (local_id(p, id)) return NODE_LASGN;
	    dyna_var(p, id);
	    return NODE_DASGN_CURR;
	}
	else {
	    if (!local_id(p, id)) local_var(p, id);
	    return NODE_LASGN;
	}
	break;
      case ID_GLOBAL: return NODE_GASGN;
      case ID_INSTANCE: return NODE_IASGN;
      case ID_CONST:
	if (!p->in_def) return NODE_CDECL;
	*err = "dynamic constant assignment";
	return -1;
      case ID_CLASS: return NODE_CVASGN;
      default:
	compile_error(p, "identifier %"PRIsVALUE" is not valid to set", rb_id2str(id));
    }
    return -1;
}

#ifndef RIPPER
static NODE*
assignable(struct parser_params *p, ID id, NODE *val, const YYLTYPE *loc)
{
    const char *err = 0;
    int node_type = assignable0(p, id, &err);
    switch (node_type) {
      case NODE_DASGN_CURR: return NEW_DASGN_CURR(id, val, loc);
      case NODE_DASGN: return NEW_DASGN(id, val, loc);
      case NODE_LASGN: return NEW_LASGN(id, val, loc);
      case NODE_GASGN: return NEW_GASGN(id, val, loc);
      case NODE_IASGN: return NEW_IASGN(id, val, loc);
      case NODE_CDECL: return NEW_CDECL(id, val, 0, loc);
      case NODE_CVASGN: return NEW_CVASGN(id, val, loc);
    }
    if (err) yyerror1(loc, err);
    return NEW_BEGIN(0, loc);
}
#else
static VALUE
assignable(struct parser_params *p, VALUE lhs)
{
    const char *err = 0;
    assignable0(p, get_id(lhs), &err);
    if (err) lhs = assign_error(p, lhs);
    return lhs;
}
#endif

static int
is_private_local_id(ID name)
{
    VALUE s;
    if (name == idUScore) return 1;
    if (!is_local_id(name)) return 0;
    s = rb_id2str(name);
    if (!s) return 0;
    return RSTRING_PTR(s)[0] == '_';
}

static int
shadowing_lvar_0(struct parser_params *p, ID name)
{
    if (is_private_local_id(name)) return 1;
    if (dyna_in_block(p)) {
	if (dvar_curr(p, name)) {
	    yyerror0("duplicated argument name");
	}
	else if (dvar_defined(p, name) || local_id(p, name)) {
	    vtable_add(p->lvtbl->vars, name);
	    if (p->lvtbl->used) {
		vtable_add(p->lvtbl->used, (ID)p->ruby_sourceline | LVAR_USED);
	    }
	    return 0;
	}
    }
    else {
	if (local_id(p, name)) {
	    yyerror0("duplicated argument name");
	}
    }
    return 1;
}

static ID
shadowing_lvar(struct parser_params *p, ID name)
{
    shadowing_lvar_0(p, name);
    return name;
}

static void
new_bv(struct parser_params *p, ID name)
{
    if (!name) return;
    if (!is_local_id(name)) {
	compile_error(p, "invalid local variable - %"PRIsVALUE,
		      rb_id2str(name));
	return;
    }
    if (!shadowing_lvar_0(p, name)) return;
    dyna_var(p, name);
}

#ifndef RIPPER
static NODE *
aryset(struct parser_params *p, NODE *recv, NODE *idx, const YYLTYPE *loc)
{
    return NEW_ATTRASGN(recv, tASET, idx, loc);
}

static void
block_dup_check(struct parser_params *p, NODE *node1, NODE *node2)
{
    if (node2 && node1 && nd_type(node1) == NODE_BLOCK_PASS) {
	compile_error(p, "both block arg and actual block given");
    }
}

static NODE *
attrset(struct parser_params *p, NODE *recv, ID atype, ID id, const YYLTYPE *loc)
{
    if (!CALL_Q_P(atype)) id = rb_id_attrset(id);
    return NEW_ATTRASGN(recv, id, 0, loc);
}

static void
rb_backref_error(struct parser_params *p, NODE *node)
{
    switch (nd_type(node)) {
      case NODE_NTH_REF:
	compile_error(p, "Can't set variable $%ld", node->nd_nth);
	break;
      case NODE_BACK_REF:
	compile_error(p, "Can't set variable $%c", (int)node->nd_nth);
	break;
    }
}

static NODE *
arg_append(struct parser_params *p, NODE *node1, NODE *node2, const YYLTYPE *loc)
{
    if (!node1) return NEW_LIST(node2, &node2->nd_loc);
    switch (nd_type(node1))  {
      case NODE_LIST:
	return list_append(p, node1, node2);
      case NODE_BLOCK_PASS:
	node1->nd_head = arg_append(p, node1->nd_head, node2, loc);
	node1->nd_loc.end_pos = node1->nd_head->nd_loc.end_pos;
	return node1;
      case NODE_ARGSPUSH:
	node1->nd_body = list_append(p, NEW_LIST(node1->nd_body, &node1->nd_body->nd_loc), node2);
	node1->nd_loc.end_pos = node1->nd_body->nd_loc.end_pos;
	nd_set_type(node1, NODE_ARGSCAT);
	return node1;
      case NODE_ARGSCAT:
        if (nd_type(node1->nd_body) != NODE_LIST) break;
        node1->nd_body = list_append(p, node1->nd_body, node2);
        node1->nd_loc.end_pos = node1->nd_body->nd_loc.end_pos;
        return node1;
    }
    return NEW_ARGSPUSH(node1, node2, loc);
}

static NODE *
arg_concat(struct parser_params *p, NODE *node1, NODE *node2, const YYLTYPE *loc)
{
    if (!node2) return node1;
    switch (nd_type(node1)) {
      case NODE_BLOCK_PASS:
	if (node1->nd_head)
	    node1->nd_head = arg_concat(p, node1->nd_head, node2, loc);
	else
	    node1->nd_head = NEW_LIST(node2, loc);
	return node1;
      case NODE_ARGSPUSH:
	if (nd_type(node2) != NODE_LIST) break;
	node1->nd_body = list_concat(NEW_LIST(node1->nd_body, loc), node2);
	nd_set_type(node1, NODE_ARGSCAT);
	return node1;
      case NODE_ARGSCAT:
	if (nd_type(node2) != NODE_LIST ||
	    nd_type(node1->nd_body) != NODE_LIST) break;
	node1->nd_body = list_concat(node1->nd_body, node2);
	return node1;
    }
    return NEW_ARGSCAT(node1, node2, loc);
}

static NODE *
last_arg_append(struct parser_params *p, NODE *args, NODE *last_arg, const YYLTYPE *loc)
{
    NODE *n1;
    if ((n1 = splat_array(args)) != 0) {
	return list_append(p, n1, last_arg);
    }
    return arg_append(p, args, last_arg, loc);
}

static NODE *
rest_arg_append(struct parser_params *p, NODE *args, NODE *rest_arg, const YYLTYPE *loc)
{
    NODE *n1;
    if ((nd_type(rest_arg) == NODE_LIST) && (n1 = splat_array(args)) != 0) {
	return list_concat(n1, rest_arg);
    }
    return arg_concat(p, args, rest_arg, loc);
}

static NODE *
splat_array(NODE* node)
{
    if (nd_type(node) == NODE_SPLAT) node = node->nd_head;
    if (nd_type(node) == NODE_LIST) return node;
    return 0;
}

static void
mark_lvar_used(struct parser_params *p, NODE *rhs)
{
    ID *vidp = NULL;
    if (!rhs) return;
    switch (nd_type(rhs)) {
      case NODE_LASGN:
	if (local_id_ref(p, rhs->nd_vid, &vidp)) {
	    if (vidp) *vidp |= LVAR_USED;
	}
	break;
      case NODE_DASGN:
      case NODE_DASGN_CURR:
	if (dvar_defined_ref(p, rhs->nd_vid, &vidp)) {
	    if (vidp) *vidp |= LVAR_USED;
	}
	break;
#if 0
      case NODE_MASGN:
	for (rhs = rhs->nd_head; rhs; rhs = rhs->nd_next) {
	    mark_lvar_used(p, rhs->nd_head);
	}
	break;
#endif
    }
}

static NODE *
node_assign(struct parser_params *p, NODE *lhs, NODE *rhs, const YYLTYPE *loc)
{
    if (!lhs) return 0;

    switch (nd_type(lhs)) {
      case NODE_GASGN:
      case NODE_IASGN:
      case NODE_LASGN:
      case NODE_DASGN:
      case NODE_DASGN_CURR:
      case NODE_MASGN:
      case NODE_CDECL:
      case NODE_CVASGN:
	lhs->nd_value = rhs;
	nd_set_loc(lhs, loc);
	break;

      case NODE_ATTRASGN:
	lhs->nd_args = arg_append(p, lhs->nd_args, rhs, loc);
	nd_set_loc(lhs, loc);
	break;

      default:
	/* should not happen */
	break;
    }

    return lhs;
}

static NODE *
value_expr_check(struct parser_params *p, NODE *node)
{
    NODE *void_node = 0, *vn;

    if (!node) {
	rb_warning0("empty expression");
    }
    while (node) {
	switch (nd_type(node)) {
	  case NODE_RETURN:
	  case NODE_BREAK:
	  case NODE_NEXT:
	  case NODE_REDO:
	  case NODE_RETRY:
	    return void_node ? void_node : node;

	  case NODE_BLOCK:
	    while (node->nd_next) {
		node = node->nd_next;
	    }
	    node = node->nd_head;
	    break;

	  case NODE_BEGIN:
	    node = node->nd_body;
	    break;

	  case NODE_IF:
	  case NODE_UNLESS:
	    if (!node->nd_body) {
		return NULL;
	    }
	    else if (!node->nd_else) {
		return NULL;
	    }
	    vn = value_expr_check(p, node->nd_body);
	    if (!vn) return NULL;
	    if (!void_node) void_node = vn;
	    node = node->nd_else;
	    break;

	  case NODE_AND:
	  case NODE_OR:
	    node = node->nd_1st;
	    break;

	  case NODE_LASGN:
	  case NODE_DASGN:
	  case NODE_DASGN_CURR:
	  case NODE_MASGN:
	    mark_lvar_used(p, node);
	    return NULL;

	  default:
	    return NULL;
	}
    }

    return NULL;
}

static int
value_expr_gen(struct parser_params *p, NODE *node)
{
    NODE *void_node = value_expr_check(p, node);
    if (void_node) {
	yyerror1(&void_node->nd_loc, "void value expression");
	/* or "control never reach"? */
	return FALSE;
    }
    return TRUE;
}
static void
void_expr(struct parser_params *p, NODE *node)
{
    const char *useless = 0;

    if (!RTEST(ruby_verbose)) return;

    if (!node || !(node = nd_once_body(node))) return;
    switch (nd_type(node)) {
      case NODE_OPCALL:
	switch (node->nd_mid) {
	  case '+':
	  case '-':
	  case '*':
	  case '/':
	  case '%':
	  case tPOW:
	  case tUPLUS:
	  case tUMINUS:
	  case '|':
	  case '^':
	  case '&':
	  case tCMP:
	  case '>':
	  case tGEQ:
	  case '<':
	  case tLEQ:
	  case tEQ:
	  case tNEQ:
	    useless = rb_id2name(node->nd_mid);
	    break;
	}
	break;

      case NODE_LVAR:
      case NODE_DVAR:
      case NODE_GVAR:
      case NODE_IVAR:
      case NODE_CVAR:
      case NODE_NTH_REF:
      case NODE_BACK_REF:
	useless = "a variable";
	break;
      case NODE_CONST:
	useless = "a constant";
	break;
      case NODE_LIT:
      case NODE_STR:
      case NODE_DSTR:
      case NODE_DREGX:
	useless = "a literal";
	break;
      case NODE_COLON2:
      case NODE_COLON3:
	useless = "::";
	break;
      case NODE_DOT2:
	useless = "..";
	break;
      case NODE_DOT3:
	useless = "...";
	break;
      case NODE_SELF:
	useless = "self";
	break;
      case NODE_NIL:
	useless = "nil";
	break;
      case NODE_TRUE:
	useless = "true";
	break;
      case NODE_FALSE:
	useless = "false";
	break;
      case NODE_DEFINED:
	useless = "defined?";
	break;
    }

    if (useless) {
	rb_warn1L(nd_line(node), "possibly useless use of %s in void context", WARN_S(useless));
    }
}

static NODE *
void_stmts(struct parser_params *p, NODE *node)
{
    NODE *const n = node;
    if (!RTEST(ruby_verbose)) return n;
    if (!node) return n;
    if (nd_type(node) != NODE_BLOCK) return n;

    while (node->nd_next) {
	void_expr(p, node->nd_head);
	node = node->nd_next;
    }
    return n;
}

static NODE *
remove_begin(NODE *node)
{
    NODE **n = &node, *n1 = node;
    while (n1 && nd_type(n1) == NODE_BEGIN && n1->nd_body) {
	*n = n1 = n1->nd_body;
    }
    return node;
}

static NODE *
remove_begin_all(NODE *node)
{
    NODE **n = &node, *n1 = node;
    while (n1 && nd_type(n1) == NODE_BEGIN) {
	*n = n1 = n1->nd_body;
    }
    return node;
}

static void
reduce_nodes(struct parser_params *p, NODE **body)
{
    NODE *node = *body;

    if (!node) {
	*body = NEW_NIL(&NULL_LOC);
	return;
    }
#define subnodes(n1, n2) \
    ((!node->n1) ? (node->n2 ? (body = &node->n2, 1) : 0) : \
     (!node->n2) ? (body = &node->n1, 1) : \
     (reduce_nodes(p, &node->n1), body = &node->n2, 1))

    while (node) {
	int newline = (int)(node->flags & NODE_FL_NEWLINE);
	switch (nd_type(node)) {
	  end:
	  case NODE_NIL:
	    *body = 0;
	    return;
	  case NODE_RETURN:
	    *body = node = node->nd_stts;
	    if (newline && node) node->flags |= NODE_FL_NEWLINE;
	    continue;
	  case NODE_BEGIN:
	    *body = node = node->nd_body;
	    if (newline && node) node->flags |= NODE_FL_NEWLINE;
	    continue;
	  case NODE_BLOCK:
	    body = &node->nd_end->nd_head;
	    break;
	  case NODE_IF:
	  case NODE_UNLESS:
	    if (subnodes(nd_body, nd_else)) break;
	    return;
	  case NODE_CASE:
	    body = &node->nd_body;
	    break;
	  case NODE_WHEN:
	    if (!subnodes(nd_body, nd_next)) goto end;
	    break;
	  case NODE_ENSURE:
	    if (!subnodes(nd_head, nd_resq)) goto end;
	    break;
	  case NODE_RESCUE:
	    if (node->nd_else) {
		body = &node->nd_resq;
		break;
	    }
	    if (!subnodes(nd_head, nd_resq)) goto end;
	    break;
	  default:
	    return;
	}
	node = *body;
	if (newline && node) node->flags |= NODE_FL_NEWLINE;
    }

#undef subnodes
}

static int
is_static_content(NODE *node)
{
    if (!node) return 1;
    switch (nd_type(node)) {
      case NODE_HASH:
	if (!(node = node->nd_head)) break;
      case NODE_LIST:
	do {
	    if (!is_static_content(node->nd_head)) return 0;
	} while ((node = node->nd_next) != 0);
      case NODE_LIT:
      case NODE_STR:
      case NODE_NIL:
      case NODE_TRUE:
      case NODE_FALSE:
      case NODE_ZLIST:
	break;
      default:
	return 0;
    }
    return 1;
}

static int
assign_in_cond(struct parser_params *p, NODE *node)
{
    switch (nd_type(node)) {
      case NODE_MASGN:
      case NODE_LASGN:
      case NODE_DASGN:
      case NODE_DASGN_CURR:
      case NODE_GASGN:
      case NODE_IASGN:
	break;

      default:
	return 0;
    }

    if (!node->nd_value) return 1;
    if (is_static_content(node->nd_value)) {
	/* reports always */
	parser_warn(p, node->nd_value, "found `= literal' in conditional, should be ==");
    }
    return 1;
}

enum cond_type {
    COND_IN_OP,
    COND_IN_COND,
    COND_IN_FF
};

#define SWITCH_BY_COND_TYPE(t, w, arg) \
    switch (t) { \
      case COND_IN_OP: break; \
      case COND_IN_COND: rb_##w##0(arg "literal in condition"); break; \
      case COND_IN_FF: rb_##w##0(arg "literal in flip-flop"); break; \
    }

static NODE *cond0(struct parser_params*,NODE*,enum cond_type,const YYLTYPE*);

static NODE*
range_op(struct parser_params *p, NODE *node, const YYLTYPE *loc)
{
    enum node_type type;

    if (node == 0) return 0;

    type = nd_type(node);
    value_expr(node);
    if (type == NODE_LIT && FIXNUM_P(node->nd_lit)) {
	if (!e_option_supplied(p)) parser_warn(p, node, "integer literal in flip-flop");
	return NEW_CALL(node, tEQ, NEW_LIST(NEW_GVAR(rb_intern("$."), loc), loc), loc);
    }
    return cond0(p, node, COND_IN_FF, loc);
}

static NODE*
cond0(struct parser_params *p, NODE *node, enum cond_type type, const YYLTYPE *loc)
{
    if (node == 0) return 0;
    if (!(node = nd_once_body(node))) return 0;
    assign_in_cond(p, node);

    switch (nd_type(node)) {
      case NODE_DSTR:
      case NODE_EVSTR:
      case NODE_STR:
	SWITCH_BY_COND_TYPE(type, warn, "string ")
	break;

      case NODE_DREGX:
	if (!e_option_supplied(p)) SWITCH_BY_COND_TYPE(type, warning, "regex ")

	return NEW_MATCH2(node, NEW_GVAR(idLASTLINE, loc), loc);

      case NODE_AND:
      case NODE_OR:
	node->nd_1st = cond0(p, node->nd_1st, COND_IN_COND, loc);
	node->nd_2nd = cond0(p, node->nd_2nd, COND_IN_COND, loc);
	break;

      case NODE_DOT2:
      case NODE_DOT3:
	node->nd_beg = range_op(p, node->nd_beg, loc);
	node->nd_end = range_op(p, node->nd_end, loc);
	if (nd_type(node) == NODE_DOT2) nd_set_type(node,NODE_FLIP2);
	else if (nd_type(node) == NODE_DOT3) nd_set_type(node, NODE_FLIP3);
	break;

      case NODE_DSYM:
	SWITCH_BY_COND_TYPE(type, warning, "string ")
	break;

      case NODE_LIT:
	if (RB_TYPE_P(node->nd_lit, T_REGEXP)) {
	    if (!e_option_supplied(p)) SWITCH_BY_COND_TYPE(type, warn, "regex ")
	    nd_set_type(node, NODE_MATCH);
	}
	else if (node->nd_lit == Qtrue ||
		 node->nd_lit == Qfalse) {
	    /* booleans are OK, e.g., while true */
	}
	else {
	    SWITCH_BY_COND_TYPE(type, warning, "")
	}
      default:
	break;
    }
    return node;
}

static NODE*
cond(struct parser_params *p, NODE *node, const YYLTYPE *loc)
{
    if (node == 0) return 0;
    return cond0(p, node, COND_IN_COND, loc);
}

static NODE*
method_cond(struct parser_params *p, NODE *node, const YYLTYPE *loc)
{
    if (node == 0) return 0;
    return cond0(p, node, COND_IN_OP, loc);
}

static NODE*
new_if(struct parser_params *p, NODE *cc, NODE *left, NODE *right, const YYLTYPE *loc)
{
    if (!cc) return right;
    cc = cond0(p, cc, COND_IN_COND, loc);
    return newline_node(NEW_IF(cc, left, right, loc));
}

static NODE*
new_unless(struct parser_params *p, NODE *cc, NODE *left, NODE *right, const YYLTYPE *loc)
{
    if (!cc) return right;
    cc = cond0(p, cc, COND_IN_COND, loc);
    return newline_node(NEW_UNLESS(cc, left, right, loc));
}

static NODE*
logop(struct parser_params *p, ID id, NODE *left, NODE *right,
	  const YYLTYPE *op_loc, const YYLTYPE *loc)
{
    enum node_type type = id == idAND || id == idANDOP ? NODE_AND : NODE_OR;
    NODE *op;
    value_expr(left);
    if (left && (enum node_type)nd_type(left) == type) {
	NODE *node = left, *second;
	while ((second = node->nd_2nd) != 0 && (enum node_type)nd_type(second) == type) {
	    node = second;
	}
	node->nd_2nd = NEW_NODE(type, second, right, 0, loc);
	nd_set_line(node->nd_2nd, op_loc->beg_pos.lineno);
	left->nd_loc.end_pos = loc->end_pos;
	return left;
    }
    op = NEW_NODE(type, left, right, 0, loc);
    nd_set_line(op, op_loc->beg_pos.lineno);
    return op;
}

static void
no_blockarg(struct parser_params *p, NODE *node)
{
    if (node && nd_type(node) == NODE_BLOCK_PASS) {
	compile_error(p, "block argument should not be given");
    }
}

static NODE *
ret_args(struct parser_params *p, NODE *node)
{
    if (node) {
	no_blockarg(p, node);
	if (nd_type(node) == NODE_LIST) {
	    if (node->nd_next == 0) {
		node = node->nd_head;
	    }
	    else {
		nd_set_type(node, NODE_VALUES);
	    }
	}
    }
    return node;
}

static NODE *
new_yield(struct parser_params *p, NODE *node, const YYLTYPE *loc)
{
    if (node) no_blockarg(p, node);

    return NEW_YIELD(node, loc);
}

static VALUE
negate_lit(struct parser_params *p, VALUE lit)
{
    if (FIXNUM_P(lit)) {
	return LONG2FIX(-FIX2LONG(lit));
    }
    if (SPECIAL_CONST_P(lit)) {
#if USE_FLONUM
	if (FLONUM_P(lit)) {
	    return DBL2NUM(-RFLOAT_VALUE(lit));
	}
#endif
	goto unknown;
    }
    switch (BUILTIN_TYPE(lit)) {
      case T_BIGNUM:
	BIGNUM_NEGATE(lit);
	lit = rb_big_norm(lit);
	break;
      case T_RATIONAL:
	RRATIONAL_SET_NUM(lit, negate_lit(p, RRATIONAL(lit)->num));
	break;
      case T_COMPLEX:
	RCOMPLEX_SET_REAL(lit, negate_lit(p, RCOMPLEX(lit)->real));
	RCOMPLEX_SET_IMAG(lit, negate_lit(p, RCOMPLEX(lit)->imag));
	break;
      case T_FLOAT:
	RFLOAT(lit)->float_value = -RFLOAT_VALUE(lit);
	break;
      unknown:
      default:
	rb_parser_fatal(p, "unknown literal type (%s) passed to negate_lit",
			rb_builtin_class_name(lit));
	break;
    }
    return lit;
}

static NODE *
arg_blk_pass(NODE *node1, NODE *node2)
{
    if (node2) {
        if (!node1) return node2;
	node2->nd_head = node1;
	nd_set_first_lineno(node2, nd_first_lineno(node1));
	nd_set_first_column(node2, nd_first_column(node1));
	return node2;
    }
    return node1;
}

static bool
args_info_empty_p(struct rb_args_info *args)
{
    if (args->pre_args_num) return false;
    if (args->post_args_num) return false;
    if (args->rest_arg) return false;
    if (args->opt_args) return false;
    if (args->block_arg) return false;
    if (args->kw_args) return false;
    if (args->kw_rest_arg) return false;
    return true;
}

static NODE*
new_args(struct parser_params *p, NODE *pre_args, NODE *opt_args, ID rest_arg, NODE *post_args, NODE *tail, const YYLTYPE *loc)
{
    int saved_line = p->ruby_sourceline;
    struct rb_args_info *args = tail->nd_ainfo;

    args->pre_args_num   = pre_args ? rb_long2int(pre_args->nd_plen) : 0;
    args->pre_init       = pre_args ? pre_args->nd_next : 0;

    args->post_args_num  = post_args ? rb_long2int(post_args->nd_plen) : 0;
    args->post_init      = post_args ? post_args->nd_next : 0;
    args->first_post_arg = post_args ? post_args->nd_pid : 0;

    args->rest_arg       = rest_arg;

    args->opt_args       = opt_args;

    args->ruby2_keywords = rest_arg == idFWD_REST;

    p->ruby_sourceline = saved_line;
    nd_set_loc(tail, loc);

    return tail;
}

static NODE*
new_args_tail(struct parser_params *p, NODE *kw_args, ID kw_rest_arg, ID block, const YYLTYPE *loc)
{
    int saved_line = p->ruby_sourceline;
    NODE *node;
    VALUE tmpbuf = rb_imemo_tmpbuf_auto_free_pointer();
    struct rb_args_info *args = ZALLOC(struct rb_args_info);
    rb_imemo_tmpbuf_set_ptr(tmpbuf, args);
    args->imemo = tmpbuf;
    node = NEW_NODE(NODE_ARGS, 0, 0, args, &NULL_LOC);
    RB_OBJ_WRITTEN(p->ast, Qnil, tmpbuf);
    if (p->error_p) return node;

    args->block_arg      = block;
    args->kw_args        = kw_args;

    if (kw_args) {
	/*
	 * def foo(k1: 1, kr1:, k2: 2, **krest, &b)
	 * variable order: k1, kr1, k2, &b, internal_id, krest
	 * #=> <reorder>
	 * variable order: kr1, k1, k2, internal_id, krest, &b
	 */
	ID kw_bits = internal_id(p), *required_kw_vars, *kw_vars;
	struct vtable *vtargs = p->lvtbl->args;
	NODE *kwn = kw_args;

	vtable_pop(vtargs, !!block + !!kw_rest_arg);
	required_kw_vars = kw_vars = &vtargs->tbl[vtargs->pos];
	while (kwn) {
	    if (!NODE_REQUIRED_KEYWORD_P(kwn->nd_body))
		--kw_vars;
	    --required_kw_vars;
	    kwn = kwn->nd_next;
	}

	for (kwn = kw_args; kwn; kwn = kwn->nd_next) {
	    ID vid = kwn->nd_body->nd_vid;
	    if (NODE_REQUIRED_KEYWORD_P(kwn->nd_body)) {
		*required_kw_vars++ = vid;
	    }
	    else {
		*kw_vars++ = vid;
	    }
	}

	arg_var(p, kw_bits);
	if (kw_rest_arg) arg_var(p, kw_rest_arg);
	if (block) arg_var(p, block);

	args->kw_rest_arg = NEW_DVAR(kw_rest_arg, loc);
	args->kw_rest_arg->nd_cflag = kw_bits;
    }
    else if (kw_rest_arg == idNil) {
	args->no_kwarg = 1;
    }
    else if (kw_rest_arg) {
	args->kw_rest_arg = NEW_DVAR(kw_rest_arg, loc);
    }

    p->ruby_sourceline = saved_line;
    return node;
}

static NODE *
args_with_numbered(struct parser_params *p, NODE *args, int max_numparam)
{
    if (max_numparam > NO_PARAM) {
	if (!args) args = new_args_tail(p, 0, 0, 0, 0);
	args->nd_ainfo->pre_args_num = max_numparam;
    }
    return args;
}

static NODE*
new_array_pattern(struct parser_params *p, NODE *constant, NODE *pre_arg, NODE *aryptn, const YYLTYPE *loc)
{
    struct rb_ary_pattern_info *apinfo = aryptn->nd_apinfo;

    aryptn->nd_pconst = constant;

    if (pre_arg) {
	NODE *pre_args = NEW_LIST(pre_arg, loc);
	if (apinfo->pre_args) {
	    apinfo->pre_args = list_concat(pre_args, apinfo->pre_args);
	}
	else {
	    apinfo->pre_args = pre_args;
	}
    }
    return aryptn;
}

static NODE*
new_array_pattern_tail(struct parser_params *p, NODE *pre_args, int has_rest, ID rest_arg, NODE *post_args, const YYLTYPE *loc)
{
    int saved_line = p->ruby_sourceline;
    NODE *node;
    VALUE tmpbuf = rb_imemo_tmpbuf_auto_free_pointer();
    struct rb_ary_pattern_info *apinfo = ZALLOC(struct rb_ary_pattern_info);
    rb_imemo_tmpbuf_set_ptr(tmpbuf, apinfo);
    node = NEW_NODE(NODE_ARYPTN, 0, 0, apinfo, loc);
    apinfo->imemo = tmpbuf;
    RB_OBJ_WRITTEN(p->ast, Qnil, tmpbuf);

    apinfo->pre_args = pre_args;

    if (has_rest) {
	if (rest_arg) {
	    apinfo->rest_arg = assignable(p, rest_arg, 0, loc);
	}
	else {
	    apinfo->rest_arg = NODE_SPECIAL_NO_NAME_REST;
	}
    }
    else {
	apinfo->rest_arg = NULL;
    }

    apinfo->post_args = post_args;

    p->ruby_sourceline = saved_line;
    return node;
}

static NODE*
new_hash_pattern(struct parser_params *p, NODE *constant, NODE *hshptn, const YYLTYPE *loc)
{
    hshptn->nd_pconst = constant;
    return hshptn;
}

static NODE*
new_hash_pattern_tail(struct parser_params *p, NODE *kw_args, ID kw_rest_arg, const YYLTYPE *loc)
{
    int saved_line = p->ruby_sourceline;
    NODE *node, *kw_rest_arg_node;

    if (kw_rest_arg == idNil) {
	kw_rest_arg_node = NODE_SPECIAL_NO_REST_KEYWORD;
    }
    else if (kw_rest_arg) {
	kw_rest_arg_node = assignable(p, kw_rest_arg, 0, loc);
    }
    else {
	kw_rest_arg_node = NULL;
    }

    node = NEW_NODE(NODE_HSHPTN, 0, kw_args, kw_rest_arg_node, loc);

    p->ruby_sourceline = saved_line;
    return node;
}

static NODE*
dsym_node(struct parser_params *p, NODE *node, const YYLTYPE *loc)
{
    VALUE lit;

    if (!node) {
	return NEW_LIT(ID2SYM(idNULL), loc);
    }

    switch (nd_type(node)) {
      case NODE_DSTR:
	nd_set_type(node, NODE_DSYM);
	nd_set_loc(node, loc);
	break;
      case NODE_STR:
	lit = node->nd_lit;
	RB_OBJ_WRITTEN(p->ast, Qnil, node->nd_lit = ID2SYM(rb_intern_str(lit)));
	nd_set_type(node, NODE_LIT);
	nd_set_loc(node, loc);
	break;
      default:
	node = NEW_NODE(NODE_DSYM, Qnil, 1, NEW_LIST(node, loc), loc);
	break;
    }
    return node;
}

static int
append_literal_keys(st_data_t k, st_data_t v, st_data_t h)
{
    NODE *node = (NODE *)v;
    NODE **result = (NODE **)h;
    node->nd_alen = 2;
    node->nd_next->nd_end = node->nd_next;
    node->nd_next->nd_next = 0;
    if (*result)
	list_concat(*result, node);
    else
	*result = node;
    return ST_CONTINUE;
}

static NODE *
remove_duplicate_keys(struct parser_params *p, NODE *hash)
{
    st_table *literal_keys = st_init_numtable_with_size(hash->nd_alen / 2);
    NODE *result = 0;
    rb_code_location_t loc = hash->nd_loc;
    while (hash && hash->nd_head && hash->nd_next) {
	NODE *head = hash->nd_head;
	NODE *value = hash->nd_next;
	NODE *next = value->nd_next;
	VALUE key = (VALUE)head;
	st_data_t data;
	if (nd_type(head) == NODE_LIT &&
	    st_lookup(literal_keys, (key = head->nd_lit), &data)) {
	    rb_compile_warn(p->ruby_sourcefile, nd_line((NODE *)data),
			    "key %+"PRIsVALUE" is duplicated and overwritten on line %d",
			    head->nd_lit, nd_line(head));
	    head = ((NODE *)data)->nd_next;
	    head->nd_head = block_append(p, head->nd_head, value->nd_head);
	}
	else {
	    st_insert(literal_keys, (st_data_t)key, (st_data_t)hash);
	}
	hash = next;
    }
    st_foreach(literal_keys, append_literal_keys, (st_data_t)&result);
    st_free_table(literal_keys);
    if (hash) {
	if (!result) result = hash;
	else list_concat(result, hash);
    }
    result->nd_loc = loc;
    return result;
}

static NODE *
new_hash(struct parser_params *p, NODE *hash, const YYLTYPE *loc)
{
    if (hash) hash = remove_duplicate_keys(p, hash);
    return NEW_HASH(hash, loc);
}

static void
error_duplicate_pattern_variable(struct parser_params *p, ID id, const YYLTYPE *loc)
{
    if (is_private_local_id(id)) {
	return;
    }
    if (st_is_member(p->pvtbl, id)) {
	yyerror1(loc, "duplicated variable name");
    }
    else {
	st_insert(p->pvtbl, (st_data_t)id, 0);
    }
}

static void
error_duplicate_keys(struct parser_params *p, NODE *hash)
{
    st_table *literal_keys = st_init_numtable_with_size(hash->nd_alen / 2);
    while (hash && hash->nd_head && hash->nd_next) {
	NODE *head = hash->nd_head;
	NODE *next = hash->nd_next->nd_next;
	VALUE key = (VALUE)head;
	if (nd_type(head) != NODE_LIT) {
	    yyerror1(&head->nd_loc, "key must be symbol literal");
	}
	if (st_is_member(literal_keys, (key = head->nd_lit))) {
	    yyerror1(&head->nd_loc, "duplicated key name");
	}
	else {
	    st_insert(literal_keys, (st_data_t)key, (st_data_t)hash);
	}
	hash = next;
    }
    st_free_table(literal_keys);
    return;
}

static NODE *
new_unique_key_hash(struct parser_params *p, NODE *hash, const YYLTYPE *loc)
{
    if (hash) {
        error_duplicate_keys(p, hash);
    }
    return NEW_HASH(hash, loc);
}
#endif /* !RIPPER */

#ifndef RIPPER
static NODE *
new_op_assign(struct parser_params *p, NODE *lhs, ID op, NODE *rhs, const YYLTYPE *loc)
{
    NODE *asgn;

    if (lhs) {
	ID vid = lhs->nd_vid;
	YYLTYPE lhs_loc = lhs->nd_loc;
	if (op == tOROP) {
	    lhs->nd_value = rhs;
	    nd_set_loc(lhs, loc);
	    asgn = NEW_OP_ASGN_OR(gettable(p, vid, &lhs_loc), lhs, loc);
	    if (is_notop_id(vid)) {
		switch (id_type(vid)) {
		  case ID_GLOBAL:
		  case ID_INSTANCE:
		  case ID_CLASS:
		    asgn->nd_aid = vid;
		}
	    }
	}
	else if (op == tANDOP) {
	    lhs->nd_value = rhs;
	    nd_set_loc(lhs, loc);
	    asgn = NEW_OP_ASGN_AND(gettable(p, vid, &lhs_loc), lhs, loc);
	}
	else {
	    asgn = lhs;
	    asgn->nd_value = NEW_CALL(gettable(p, vid, &lhs_loc), op, NEW_LIST(rhs, &rhs->nd_loc), loc);
	    nd_set_loc(asgn, loc);
	}
    }
    else {
	asgn = NEW_BEGIN(0, loc);
    }
    return asgn;
}

static NODE *
new_ary_op_assign(struct parser_params *p, NODE *ary,
		  NODE *args, ID op, NODE *rhs, const YYLTYPE *args_loc, const YYLTYPE *loc)
{
    NODE *asgn;

    args = make_list(args, args_loc);
    if (nd_type(args) == NODE_BLOCK_PASS) {
	args = NEW_ARGSCAT(args, rhs, loc);
    }
    else {
	args = arg_concat(p, args, rhs, loc);
    }
    asgn = NEW_OP_ASGN1(ary, op, args, loc);
    fixpos(asgn, ary);
    return asgn;
}

static NODE *
new_attr_op_assign(struct parser_params *p, NODE *lhs,
		   ID atype, ID attr, ID op, NODE *rhs, const YYLTYPE *loc)
{
    NODE *asgn;

    asgn = NEW_OP_ASGN2(lhs, CALL_Q_P(atype), attr, op, rhs, loc);
    fixpos(asgn, lhs);
    return asgn;
}

static NODE *
new_const_op_assign(struct parser_params *p, NODE *lhs, ID op, NODE *rhs, const YYLTYPE *loc)
{
    NODE *asgn;

    if (lhs) {
	asgn = NEW_OP_CDECL(lhs, op, rhs, loc);
    }
    else {
	asgn = NEW_BEGIN(0, loc);
    }
    fixpos(asgn, lhs);
    return asgn;
}

static NODE *
const_decl(struct parser_params *p, NODE *path, const YYLTYPE *loc)
{
    if (p->in_def) {
	yyerror1(loc, "dynamic constant assignment");
    }
    return NEW_CDECL(0, 0, (path), loc);
}
#else
static VALUE
const_decl(struct parser_params *p, VALUE path)
{
    if (p->in_def) {
	path = dispatch1(assign_error, path);
	ripper_error(p);
    }
    return path;
}

static VALUE
assign_error(struct parser_params *p, VALUE a)
{
    a = dispatch1(assign_error, a);
    ripper_error(p);
    return a;
}

static VALUE
var_field(struct parser_params *p, VALUE a)
{
    return ripper_new_yylval(p, get_id(a), dispatch1(var_field, a), 0);
}
#endif

#ifndef RIPPER
static NODE *
new_bodystmt(struct parser_params *p, NODE *head, NODE *rescue, NODE *rescue_else, NODE *ensure, const YYLTYPE *loc)
{
    NODE *result = head;
    if (rescue) {
        NODE *tmp = rescue_else ? rescue_else : rescue;
        YYLTYPE rescue_loc = code_loc_gen(&head->nd_loc, &tmp->nd_loc);

        result = NEW_RESCUE(head, rescue, rescue_else, &rescue_loc);
        nd_set_line(result, rescue->nd_loc.beg_pos.lineno);
    }
    else if (rescue_else) {
        result = block_append(p, result, rescue_else);
    }
    if (ensure) {
        result = NEW_ENSURE(result, ensure, loc);
    }
    fixpos(result, head);
    return result;
}
#endif

static void
warn_unused_var(struct parser_params *p, struct local_vars *local)
{
    int i, cnt;
    ID *v, *u;

    if (!local->used) return;
    v = local->vars->tbl;
    u = local->used->tbl;
    cnt = local->used->pos;
    if (cnt != local->vars->pos) {
	rb_parser_fatal(p, "local->used->pos != local->vars->pos");
    }
    for (i = 0; i < cnt; ++i) {
	if (!v[i] || (u[i] & LVAR_USED)) continue;
	if (is_private_local_id(v[i])) continue;
	rb_warn1L((int)u[i], "assigned but unused variable - %"PRIsWARN, rb_id2str(v[i]));
    }
}

static void
local_push(struct parser_params *p, int toplevel_scope)
{
    struct local_vars *local;
    int inherits_dvars = toplevel_scope && compile_for_eval;
    int warn_unused_vars = RTEST(ruby_verbose);

    local = ALLOC(struct local_vars);
    local->prev = p->lvtbl;
    local->args = vtable_alloc(0);
    local->vars = vtable_alloc(inherits_dvars ? DVARS_INHERIT : DVARS_TOPSCOPE);
#ifndef RIPPER
    if (toplevel_scope && compile_for_eval) warn_unused_vars = 0;
    if (toplevel_scope && e_option_supplied(p)) warn_unused_vars = 0;
    local->numparam.outer = 0;
    local->numparam.inner = 0;
    local->numparam.current = 0;
#endif
    local->used = warn_unused_vars ? vtable_alloc(0) : 0;

# if WARN_PAST_SCOPE
    local->past = 0;
# endif
    CMDARG_PUSH(0);
    COND_PUSH(0);
    p->lvtbl = local;
}

static void
local_pop(struct parser_params *p)
{
    struct local_vars *local = p->lvtbl->prev;
    if (p->lvtbl->used) {
	warn_unused_var(p, p->lvtbl);
	vtable_free(p->lvtbl->used);
    }
# if WARN_PAST_SCOPE
    while (p->lvtbl->past) {
	struct vtable *past = p->lvtbl->past;
	p->lvtbl->past = past->prev;
	vtable_free(past);
    }
# endif
    vtable_free(p->lvtbl->args);
    vtable_free(p->lvtbl->vars);
    CMDARG_POP();
    COND_POP();
    ruby_sized_xfree(p->lvtbl, sizeof(*p->lvtbl));
    p->lvtbl = local;
}

#ifndef RIPPER
static ID*
local_tbl(struct parser_params *p)
{
    int cnt_args = vtable_size(p->lvtbl->args);
    int cnt_vars = vtable_size(p->lvtbl->vars);
    int cnt = cnt_args + cnt_vars;
    int i, j;
    ID *buf;
    VALUE tbl = 0;

    if (cnt <= 0) return 0;
    tbl = rb_imemo_tmpbuf_auto_free_pointer();
    buf = ALLOC_N(ID, cnt + 2);
    rb_imemo_tmpbuf_set_ptr(tbl, buf);
    MEMCPY(buf+1, p->lvtbl->args->tbl, ID, cnt_args);
    /* remove IDs duplicated to warn shadowing */
    for (i = 0, j = cnt_args+1; i < cnt_vars; ++i) {
	ID id = p->lvtbl->vars->tbl[i];
	if (!vtable_included(p->lvtbl->args, id)) {
	    buf[j++] = id;
	}
    }
    if (--j < cnt) {
	REALLOC_N(buf, ID, (cnt = j) + 2);
	rb_imemo_tmpbuf_set_ptr(tbl, buf);
    }
    buf[0] = cnt;
    buf[cnt + 1] = (ID)tbl;
    RB_OBJ_WRITTEN(p->ast, Qnil, tbl);

    return buf;
}

static NODE*
node_newnode_with_locals(struct parser_params *p, enum node_type type, VALUE a1, VALUE a2, const rb_code_location_t *loc)
{
    ID *a0;
    NODE *n;

    a0 = local_tbl(p);
    n = NEW_NODE(type, a0, a1, a2, loc);
    return n;
}

#endif

static void
arg_var(struct parser_params *p, ID id)
{
    vtable_add(p->lvtbl->args, id);
}

static void
local_var(struct parser_params *p, ID id)
{
    if (NUMPARAM_ID_P(id)) {
	rb_warn1("`_%d' is used as numbered parameter",
		 WARN_I(NUMPARAM_ID_TO_IDX(id)));
    }
    vtable_add(p->lvtbl->vars, id);
    if (p->lvtbl->used) {
	vtable_add(p->lvtbl->used, (ID)p->ruby_sourceline);
    }
}

static int
local_id_ref(struct parser_params *p, ID id, ID **vidrefp)
{
    struct vtable *vars, *args, *used;

    vars = p->lvtbl->vars;
    args = p->lvtbl->args;
    used = p->lvtbl->used;

    while (vars && !DVARS_TERMINAL_P(vars->prev)) {
	vars = vars->prev;
	args = args->prev;
	if (used) used = used->prev;
    }

    if (vars && vars->prev == DVARS_INHERIT) {
	return rb_local_defined(id, p->parent_iseq);
    }
    else if (vtable_included(args, id)) {
	return 1;
    }
    else {
	int i = vtable_included(vars, id);
	if (i && used && vidrefp) *vidrefp = &used->tbl[i-1];
	return i != 0;
    }
}

static int
local_id(struct parser_params *p, ID id)
{
    return local_id_ref(p, id, NULL);
}

static NODE *
numparam_push(struct parser_params *p)
{
#ifndef RIPPER
    struct local_vars *local = p->lvtbl;
    NODE *inner = local->numparam.inner;
    if (!local->numparam.outer) {
	local->numparam.outer = local->numparam.current;
    }
    local->numparam.inner = 0;
    local->numparam.current = 0;
    return inner;
#else
    return 0;
#endif
}

static void
numparam_pop(struct parser_params *p, NODE *prev_inner)
{
#ifndef RIPPER
    struct local_vars *local = p->lvtbl;
    if (prev_inner) {
	/* prefer first one */
	local->numparam.inner = prev_inner;
    }
    else if (local->numparam.current) {
	/* current and inner are exclusive */
	local->numparam.inner = local->numparam.current;
    }
    if (p->max_numparam > NO_PARAM) {
	/* current and outer are exclusive */
	local->numparam.current = local->numparam.outer;
	local->numparam.outer = 0;
    }
    else {
	/* no numbered parameter */
	local->numparam.current = 0;
    }
#endif
}

static const struct vtable *
dyna_push(struct parser_params *p)
{
    p->lvtbl->args = vtable_alloc(p->lvtbl->args);
    p->lvtbl->vars = vtable_alloc(p->lvtbl->vars);
    if (p->lvtbl->used) {
	p->lvtbl->used = vtable_alloc(p->lvtbl->used);
    }
    return p->lvtbl->args;
}

static void
dyna_pop_vtable(struct parser_params *p, struct vtable **vtblp)
{
    struct vtable *tmp = *vtblp;
    *vtblp = tmp->prev;
# if WARN_PAST_SCOPE
    if (p->past_scope_enabled) {
	tmp->prev = p->lvtbl->past;
	p->lvtbl->past = tmp;
	return;
    }
# endif
    vtable_free(tmp);
}

static void
dyna_pop_1(struct parser_params *p)
{
    struct vtable *tmp;

    if ((tmp = p->lvtbl->used) != 0) {
	warn_unused_var(p, p->lvtbl);
	p->lvtbl->used = p->lvtbl->used->prev;
	vtable_free(tmp);
    }
    dyna_pop_vtable(p, &p->lvtbl->args);
    dyna_pop_vtable(p, &p->lvtbl->vars);
}

static void
dyna_pop(struct parser_params *p, const struct vtable *lvargs)
{
    while (p->lvtbl->args != lvargs) {
	dyna_pop_1(p);
	if (!p->lvtbl->args) {
	    struct local_vars *local = p->lvtbl->prev;
	    ruby_sized_xfree(p->lvtbl, sizeof(*p->lvtbl));
	    p->lvtbl = local;
	}
    }
    dyna_pop_1(p);
}

static int
dyna_in_block(struct parser_params *p)
{
    return !DVARS_TERMINAL_P(p->lvtbl->vars) && p->lvtbl->vars->prev != DVARS_TOPSCOPE;
}

static int
dvar_defined_ref(struct parser_params *p, ID id, ID **vidrefp)
{
    struct vtable *vars, *args, *used;
    int i;

    args = p->lvtbl->args;
    vars = p->lvtbl->vars;
    used = p->lvtbl->used;

    while (!DVARS_TERMINAL_P(vars)) {
	if (vtable_included(args, id)) {
	    return 1;
	}
	if ((i = vtable_included(vars, id)) != 0) {
	    if (used && vidrefp) *vidrefp = &used->tbl[i-1];
	    return 1;
	}
	args = args->prev;
	vars = vars->prev;
	if (!vidrefp) used = 0;
	if (used) used = used->prev;
    }

    if (vars == DVARS_INHERIT) {
        return rb_dvar_defined(id, p->parent_iseq);
    }

    return 0;
}

static int
dvar_defined(struct parser_params *p, ID id)
{
    return dvar_defined_ref(p, id, NULL);
}

static int
dvar_curr(struct parser_params *p, ID id)
{
    return (vtable_included(p->lvtbl->args, id) ||
	    vtable_included(p->lvtbl->vars, id));
}

static void
reg_fragment_enc_error(struct parser_params* p, VALUE str, int c)
{
    compile_error(p,
        "regexp encoding option '%c' differs from source encoding '%s'",
        c, rb_enc_name(rb_enc_get(str)));
}

#ifndef RIPPER
int
rb_reg_fragment_setenc(struct parser_params* p, VALUE str, int options)
{
    int c = RE_OPTION_ENCODING_IDX(options);

    if (c) {
	int opt, idx;
	rb_char_to_option_kcode(c, &opt, &idx);
	if (idx != ENCODING_GET(str) &&
	    rb_enc_str_coderange(str) != ENC_CODERANGE_7BIT) {
            goto error;
	}
	ENCODING_SET(str, idx);
    }
    else if (RE_OPTION_ENCODING_NONE(options)) {
        if (!ENCODING_IS_ASCII8BIT(str) &&
            rb_enc_str_coderange(str) != ENC_CODERANGE_7BIT) {
            c = 'n';
            goto error;
        }
	rb_enc_associate(str, rb_ascii8bit_encoding());
    }
    else if (p->enc == rb_usascii_encoding()) {
	if (rb_enc_str_coderange(str) != ENC_CODERANGE_7BIT) {
	    /* raise in re.c */
	    rb_enc_associate(str, rb_usascii_encoding());
	}
	else {
	    rb_enc_associate(str, rb_ascii8bit_encoding());
	}
    }
    return 0;

  error:
    return c;
}

static void
reg_fragment_setenc(struct parser_params* p, VALUE str, int options)
{
    int c = rb_reg_fragment_setenc(p, str, options);
    if (c) reg_fragment_enc_error(p, str, c);
}

static int
reg_fragment_check(struct parser_params* p, VALUE str, int options)
{
    VALUE err;
    reg_fragment_setenc(p, str, options);
    err = rb_reg_check_preprocess(str);
    if (err != Qnil) {
        err = rb_obj_as_string(err);
        compile_error(p, "%"PRIsVALUE, err);
	return 0;
    }
    return 1;
}

typedef struct {
    struct parser_params* parser;
    rb_encoding *enc;
    NODE *succ_block;
    const YYLTYPE *loc;
} reg_named_capture_assign_t;

static int
reg_named_capture_assign_iter(const OnigUChar *name, const OnigUChar *name_end,
          int back_num, int *back_refs, OnigRegex regex, void *arg0)
{
    reg_named_capture_assign_t *arg = (reg_named_capture_assign_t*)arg0;
    struct parser_params* p = arg->parser;
    rb_encoding *enc = arg->enc;
    long len = name_end - name;
    const char *s = (const char *)name;
    ID var;
    NODE *node, *succ;

    if (!len) return ST_CONTINUE;
    if (len < MAX_WORD_LENGTH && rb_reserved_word(s, (int)len))
        return ST_CONTINUE;
    if (rb_enc_symname_type(s, len, enc, (1U<<ID_LOCAL)) != ID_LOCAL)
        return ST_CONTINUE;

    var = intern_cstr(s, len, enc);
    node = node_assign(p, assignable(p, var, 0, arg->loc), NEW_LIT(ID2SYM(var), arg->loc), arg->loc);
    succ = arg->succ_block;
    if (!succ) succ = NEW_BEGIN(0, arg->loc);
    succ = block_append(p, succ, node);
    arg->succ_block = succ;
    return ST_CONTINUE;
}

static NODE *
reg_named_capture_assign(struct parser_params* p, VALUE regexp, const YYLTYPE *loc)
{
    reg_named_capture_assign_t arg;

    arg.parser = p;
    arg.enc = rb_enc_get(regexp);
    arg.succ_block = 0;
    arg.loc = loc;
    onig_foreach_name(RREGEXP_PTR(regexp), reg_named_capture_assign_iter, &arg);

    if (!arg.succ_block) return 0;
    return arg.succ_block->nd_next;
}

static VALUE
parser_reg_compile(struct parser_params* p, VALUE str, int options)
{
    reg_fragment_setenc(p, str, options);
    return rb_parser_reg_compile(p, str, options);
}

VALUE
rb_parser_reg_compile(struct parser_params* p, VALUE str, int options)
{
    return rb_reg_compile(str, options & RE_OPTION_MASK, p->ruby_sourcefile, p->ruby_sourceline);
}

static VALUE
reg_compile(struct parser_params* p, VALUE str, int options)
{
    VALUE re;
    VALUE err;

    err = rb_errinfo();
    re = parser_reg_compile(p, str, options);
    if (NIL_P(re)) {
	VALUE m = rb_attr_get(rb_errinfo(), idMesg);
	rb_set_errinfo(err);
	compile_error(p, "%"PRIsVALUE, m);
	return Qnil;
    }
    return re;
}
#else
static VALUE
parser_reg_compile(struct parser_params* p, VALUE str, int options, VALUE *errmsg)
{
    VALUE err = rb_errinfo();
    VALUE re;
    int c = rb_reg_fragment_setenc(p, str, options);
    if (c) reg_fragment_enc_error(p, str, c);
    re = rb_parser_reg_compile(p, str, options);
    if (NIL_P(re)) {
	*errmsg = rb_attr_get(rb_errinfo(), idMesg);
	rb_set_errinfo(err);
    }
    return re;
}
#endif

#ifndef RIPPER
void
rb_parser_set_options(VALUE vparser, int print, int loop, int chomp, int split)
{
    struct parser_params *p;
    TypedData_Get_Struct(vparser, struct parser_params, &parser_data_type, p);
    p->do_print = print;
    p->do_loop = loop;
    p->do_chomp = chomp;
    p->do_split = split;
}

void
rb_parser_warn_location(VALUE vparser, int warn)
{
    struct parser_params *p;
    TypedData_Get_Struct(vparser, struct parser_params, &parser_data_type, p);
    p->warn_location = warn;
}

static NODE *
parser_append_options(struct parser_params *p, NODE *node)
{
    static const YYLTYPE default_location = {{1, 0}, {1, 0}};
    const YYLTYPE *const LOC = &default_location;

    if (p->do_print) {
	NODE *print = NEW_FCALL(rb_intern("print"),
				NEW_LIST(NEW_GVAR(idLASTLINE, LOC), LOC),
				LOC);
	node = block_append(p, node, print);
    }

    if (p->do_loop) {
	if (p->do_split) {
	    NODE *args = NEW_LIST(NEW_GVAR(rb_intern("$;"), LOC), LOC);
	    NODE *split = NEW_GASGN(rb_intern("$F"),
				    NEW_CALL(NEW_GVAR(idLASTLINE, LOC),
					     rb_intern("split"), args, LOC),
				    LOC);
	    node = block_append(p, split, node);
	}
	if (p->do_chomp) {
	    NODE *chomp = NEW_CALL(NEW_GVAR(idLASTLINE, LOC),
				   rb_intern("chomp!"), 0, LOC);
	    node = block_append(p, chomp, node);
	}

	node = NEW_WHILE(NEW_VCALL(idGets, LOC), node, 1, LOC);
    }

    return node;
}

void
rb_init_parse(void)
{
    /* just to suppress unused-function warnings */
    (void)nodetype;
    (void)nodeline;
}

static ID
internal_id(struct parser_params *p)
{
    const ID max_id = RB_ID_SERIAL_MAX & ~0xffff;
    ID id = (ID)vtable_size(p->lvtbl->args) + (ID)vtable_size(p->lvtbl->vars);
    id = max_id - id;
    return ID_STATIC_SYM | ID_INTERNAL | (id << ID_SCOPE_SHIFT);
}
#endif /* !RIPPER */

static void
parser_initialize(struct parser_params *p)
{
    /* note: we rely on TypedData_Make_Struct to set most fields to 0 */
    p->command_start = TRUE;
    p->ruby_sourcefile_string = Qnil;
    p->lex.lpar_beg = -1; /* make lambda_beginning_p() == FALSE at first */
    p->node_id = 0;
#ifdef RIPPER
    p->delayed.token = Qnil;
    p->result = Qnil;
    p->parsing_thread = Qnil;
#else
    p->error_buffer = Qfalse;
#endif
    p->debug_buffer = Qnil;
    p->debug_output = rb_stdout;
    p->enc = rb_utf8_encoding();
}

#ifdef RIPPER
#define parser_mark ripper_parser_mark
#define parser_free ripper_parser_free
#endif

static void
parser_mark(void *ptr)
{
    struct parser_params *p = (struct parser_params*)ptr;

    rb_gc_mark(p->lex.input);
    rb_gc_mark(p->lex.prevline);
    rb_gc_mark(p->lex.lastline);
    rb_gc_mark(p->lex.nextline);
    rb_gc_mark(p->ruby_sourcefile_string);
    rb_gc_mark((VALUE)p->lex.strterm);
    rb_gc_mark((VALUE)p->ast);
    rb_gc_mark(p->case_labels);
#ifndef RIPPER
    rb_gc_mark(p->debug_lines);
    rb_gc_mark(p->compile_option);
    rb_gc_mark(p->error_buffer);
#else
    rb_gc_mark(p->delayed.token);
    rb_gc_mark(p->value);
    rb_gc_mark(p->result);
    rb_gc_mark(p->parsing_thread);
#endif
    rb_gc_mark(p->debug_buffer);
    rb_gc_mark(p->debug_output);
#ifdef YYMALLOC
    rb_gc_mark((VALUE)p->heap);
#endif
}

static void
parser_free(void *ptr)
{
    struct parser_params *p = (struct parser_params*)ptr;
    struct local_vars *local, *prev;

    if (p->tokenbuf) {
        ruby_sized_xfree(p->tokenbuf, p->toksiz);
    }
    for (local = p->lvtbl; local; local = prev) {
	if (local->vars) xfree(local->vars);
	prev = local->prev;
	xfree(local);
    }
    {
	token_info *ptinfo;
	while ((ptinfo = p->token_info) != 0) {
	    p->token_info = ptinfo->next;
	    xfree(ptinfo);
	}
    }
    xfree(ptr);
}

static size_t
parser_memsize(const void *ptr)
{
    struct parser_params *p = (struct parser_params*)ptr;
    struct local_vars *local;
    size_t size = sizeof(*p);

    size += p->toksiz;
    for (local = p->lvtbl; local; local = local->prev) {
	size += sizeof(*local);
	if (local->vars) size += local->vars->capa * sizeof(ID);
    }
    return size;
}

static const rb_data_type_t parser_data_type = {
#ifndef RIPPER
    "parser",
#else
    "ripper",
#endif
    {
	parser_mark,
	parser_free,
	parser_memsize,
    },
    0, 0, RUBY_TYPED_FREE_IMMEDIATELY
};

#ifndef RIPPER
#undef rb_reserved_word

const struct kwtable *
rb_reserved_word(const char *str, unsigned int len)
{
    return reserved_word(str, len);
}

VALUE
rb_parser_new(void)
{
    struct parser_params *p;
    VALUE parser = TypedData_Make_Struct(0, struct parser_params,
					 &parser_data_type, p);
    parser_initialize(p);
    return parser;
}

VALUE
rb_parser_set_context(VALUE vparser, const struct rb_iseq_struct *base, int main)
{
    struct parser_params *p;

    TypedData_Get_Struct(vparser, struct parser_params, &parser_data_type, p);
    p->error_buffer = main ? Qfalse : Qnil;
    p->parent_iseq = base;
    return vparser;
}
#endif

#ifdef RIPPER
#define rb_parser_end_seen_p ripper_parser_end_seen_p
#define rb_parser_encoding ripper_parser_encoding
#define rb_parser_get_yydebug ripper_parser_get_yydebug
#define rb_parser_set_yydebug ripper_parser_set_yydebug
#define rb_parser_get_debug_output ripper_parser_get_debug_output
#define rb_parser_set_debug_output ripper_parser_set_debug_output
static VALUE ripper_parser_end_seen_p(VALUE vparser);
static VALUE ripper_parser_encoding(VALUE vparser);
static VALUE ripper_parser_get_yydebug(VALUE self);
static VALUE ripper_parser_set_yydebug(VALUE self, VALUE flag);
static VALUE ripper_parser_get_debug_output(VALUE self);
static VALUE ripper_parser_set_debug_output(VALUE self, VALUE output);

/*
 *  call-seq:
 *    ripper.error?   -> Boolean
 *
 *  Return true if parsed source has errors.
 */
static VALUE
ripper_error_p(VALUE vparser)
{
    struct parser_params *p;

    TypedData_Get_Struct(vparser, struct parser_params, &parser_data_type, p);
    return p->error_p ? Qtrue : Qfalse;
}
#endif

/*
 *  call-seq:
 *    ripper.end_seen?   -> Boolean
 *
 *  Return true if parsed source ended by +\_\_END\_\_+.
 */
VALUE
rb_parser_end_seen_p(VALUE vparser)
{
    struct parser_params *p;

    TypedData_Get_Struct(vparser, struct parser_params, &parser_data_type, p);
    return p->ruby__end__seen ? Qtrue : Qfalse;
}

/*
 *  call-seq:
 *    ripper.encoding   -> encoding
 *
 *  Return encoding of the source.
 */
VALUE
rb_parser_encoding(VALUE vparser)
{
    struct parser_params *p;

    TypedData_Get_Struct(vparser, struct parser_params, &parser_data_type, p);
    return rb_enc_from_encoding(p->enc);
}

#ifdef RIPPER
/*
 *  call-seq:
 *    ripper.yydebug   -> true or false
 *
 *  Get yydebug.
 */
VALUE
rb_parser_get_yydebug(VALUE self)
{
    struct parser_params *p;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    return p->debug ? Qtrue : Qfalse;
}
#endif

/*
 *  call-seq:
 *    ripper.yydebug = flag
 *
 *  Set yydebug.
 */
VALUE
rb_parser_set_yydebug(VALUE self, VALUE flag)
{
    struct parser_params *p;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    p->debug = RTEST(flag);
    return flag;
}

/*
 *  call-seq:
 *    ripper.debug_output   -> obj
 *
 *  Get debug output.
 */
VALUE
rb_parser_get_debug_output(VALUE self)
{
    struct parser_params *p;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    return p->debug_output;
}

/*
 *  call-seq:
 *    ripper.debug_output = obj
 *
 *  Set debug output.
 */
VALUE
rb_parser_set_debug_output(VALUE self, VALUE output)
{
    struct parser_params *p;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    return p->debug_output = output;
}

#ifndef RIPPER
#ifdef YYMALLOC
#define HEAPCNT(n, size) ((n) * (size) / sizeof(YYSTYPE))
/* Keep the order; NEWHEAP then xmalloc and ADD2HEAP to get rid of
 * potential memory leak */
#define NEWHEAP() rb_imemo_tmpbuf_parser_heap(0, p->heap, 0)
#define ADD2HEAP(new, cnt, ptr) ((p->heap = (new))->ptr = (ptr), \
			   (new)->cnt = (cnt), (ptr))

void *
rb_parser_malloc(struct parser_params *p, size_t size)
{
    size_t cnt = HEAPCNT(1, size);
    rb_imemo_tmpbuf_t *n = NEWHEAP();
    void *ptr = xmalloc(size);

    return ADD2HEAP(n, cnt, ptr);
}

void *
rb_parser_calloc(struct parser_params *p, size_t nelem, size_t size)
{
    size_t cnt = HEAPCNT(nelem, size);
    rb_imemo_tmpbuf_t *n = NEWHEAP();
    void *ptr = xcalloc(nelem, size);

    return ADD2HEAP(n, cnt, ptr);
}

void *
rb_parser_realloc(struct parser_params *p, void *ptr, size_t size)
{
    rb_imemo_tmpbuf_t *n;
    size_t cnt = HEAPCNT(1, size);

    if (ptr && (n = p->heap) != NULL) {
	do {
	    if (n->ptr == ptr) {
		n->ptr = ptr = xrealloc(ptr, size);
		if (n->cnt) n->cnt = cnt;
		return ptr;
	    }
	} while ((n = n->next) != NULL);
    }
    n = NEWHEAP();
    ptr = xrealloc(ptr, size);
    return ADD2HEAP(n, cnt, ptr);
}

void
rb_parser_free(struct parser_params *p, void *ptr)
{
    rb_imemo_tmpbuf_t **prev = &p->heap, *n;

    while ((n = *prev) != NULL) {
	if (n->ptr == ptr) {
	    *prev = n->next;
	    rb_gc_force_recycle((VALUE)n);
	    break;
	}
	prev = &n->next;
    }
    xfree(ptr);
}
#endif

void
rb_parser_printf(struct parser_params *p, const char *fmt, ...)
{
    va_list ap;
    VALUE mesg = p->debug_buffer;

    if (NIL_P(mesg)) p->debug_buffer = mesg = rb_str_new(0, 0);
    va_start(ap, fmt);
    rb_str_vcatf(mesg, fmt, ap);
    va_end(ap);
    if (RSTRING_END(mesg)[-1] == '\n') {
	rb_io_write(p->debug_output, mesg);
	p->debug_buffer = Qnil;
    }
}

static void
parser_compile_error(struct parser_params *p, const char *fmt, ...)
{
    va_list ap;

    rb_io_flush(p->debug_output);
    p->error_p = 1;
    va_start(ap, fmt);
    p->error_buffer =
	rb_syntax_error_append(p->error_buffer,
			       p->ruby_sourcefile_string,
			       p->ruby_sourceline,
			       rb_long2int(p->lex.pcur - p->lex.pbeg),
			       p->enc, fmt, ap);
    va_end(ap);
}

static size_t
count_char(const char *str, int c)
{
    int n = 0;
    while (str[n] == c) ++n;
    return n;
}

/*
 * strip enclosing double-quotes, same as the default yytnamerr except
 * for that single-quotes matching back-quotes do not stop stripping.
 *
 *  "\"`class' keyword\"" => "`class' keyword"
 */
RUBY_FUNC_EXPORTED size_t
rb_yytnamerr(struct parser_params *p, char *yyres, const char *yystr)
{
    YYUSE(p);
    if (*yystr == '"') {
	size_t yyn = 0, bquote = 0;
	const char *yyp = yystr;

	while (*++yyp) {
	    switch (*yyp) {
	      case '`':
		if (!bquote) {
		    bquote = count_char(yyp+1, '`') + 1;
		    if (yyres) memcpy(&yyres[yyn], yyp, bquote);
		    yyn += bquote;
		    yyp += bquote - 1;
		    break;
		}
		goto default_char;

	      case '\'':
		if (bquote && count_char(yyp+1, '\'') + 1 == bquote) {
		    if (yyres) memcpy(yyres + yyn, yyp, bquote);
		    yyn += bquote;
		    yyp += bquote - 1;
		    bquote = 0;
		    break;
		}
		if (yyp[1] && yyp[1] != '\'' && yyp[2] == '\'') {
		    if (yyres) memcpy(yyres + yyn, yyp, 3);
		    yyn += 3;
		    yyp += 2;
		    break;
		}
		goto do_not_strip_quotes;

	      case ',':
		goto do_not_strip_quotes;

	      case '\\':
		if (*++yyp != '\\')
		    goto do_not_strip_quotes;
		/* Fall through.  */
	      default_char:
	      default:
		if (yyres)
		    yyres[yyn] = *yyp;
		yyn++;
		break;

	      case '"':
	      case '\0':
		if (yyres)
		    yyres[yyn] = '\0';
		return yyn;
	    }
	}
      do_not_strip_quotes: ;
    }

    if (!yyres) return strlen(yystr);

    return (YYSIZE_T)(yystpcpy(yyres, yystr) - yyres);
}
#endif

#ifdef RIPPER
#ifdef RIPPER_DEBUG
/* :nodoc: */
static VALUE
ripper_validate_object(VALUE self, VALUE x)
{
    if (x == Qfalse) return x;
    if (x == Qtrue) return x;
    if (x == Qnil) return x;
    if (x == Qundef)
	rb_raise(rb_eArgError, "Qundef given");
    if (FIXNUM_P(x)) return x;
    if (SYMBOL_P(x)) return x;
    switch (BUILTIN_TYPE(x)) {
      case T_STRING:
      case T_OBJECT:
      case T_ARRAY:
      case T_BIGNUM:
      case T_FLOAT:
      case T_COMPLEX:
      case T_RATIONAL:
	break;
      case T_NODE:
	if (nd_type((NODE *)x) != NODE_RIPPER) {
	    rb_raise(rb_eArgError, "NODE given: %p", (void *)x);
	}
	x = ((NODE *)x)->nd_rval;
	break;
      default:
	rb_raise(rb_eArgError, "wrong type of ruby object: %p (%s)",
		 (void *)x, rb_obj_classname(x));
    }
    if (!RBASIC_CLASS(x)) {
	rb_raise(rb_eArgError, "hidden ruby object: %p (%s)",
		 (void *)x, rb_builtin_type_name(TYPE(x)));
    }
    return x;
}
#endif

#define validate(x) ((x) = get_value(x))

static VALUE
ripper_dispatch0(struct parser_params *p, ID mid)
{
    return rb_funcall(p->value, mid, 0);
}

static VALUE
ripper_dispatch1(struct parser_params *p, ID mid, VALUE a)
{
    validate(a);
    return rb_funcall(p->value, mid, 1, a);
}

static VALUE
ripper_dispatch2(struct parser_params *p, ID mid, VALUE a, VALUE b)
{
    validate(a);
    validate(b);
    return rb_funcall(p->value, mid, 2, a, b);
}

static VALUE
ripper_dispatch3(struct parser_params *p, ID mid, VALUE a, VALUE b, VALUE c)
{
    validate(a);
    validate(b);
    validate(c);
    return rb_funcall(p->value, mid, 3, a, b, c);
}

static VALUE
ripper_dispatch4(struct parser_params *p, ID mid, VALUE a, VALUE b, VALUE c, VALUE d)
{
    validate(a);
    validate(b);
    validate(c);
    validate(d);
    return rb_funcall(p->value, mid, 4, a, b, c, d);
}

static VALUE
ripper_dispatch5(struct parser_params *p, ID mid, VALUE a, VALUE b, VALUE c, VALUE d, VALUE e)
{
    validate(a);
    validate(b);
    validate(c);
    validate(d);
    validate(e);
    return rb_funcall(p->value, mid, 5, a, b, c, d, e);
}

static VALUE
ripper_dispatch7(struct parser_params *p, ID mid, VALUE a, VALUE b, VALUE c, VALUE d, VALUE e, VALUE f, VALUE g)
{
    validate(a);
    validate(b);
    validate(c);
    validate(d);
    validate(e);
    validate(f);
    validate(g);
    return rb_funcall(p->value, mid, 7, a, b, c, d, e, f, g);
}

static ID
ripper_get_id(VALUE v)
{
    NODE *nd;
    if (!RB_TYPE_P(v, T_NODE)) return 0;
    nd = (NODE *)v;
    if (nd_type(nd) != NODE_RIPPER) return 0;
    return nd->nd_vid;
}

static VALUE
ripper_get_value(VALUE v)
{
    NODE *nd;
    if (v == Qundef) return Qnil;
    if (!RB_TYPE_P(v, T_NODE)) return v;
    nd = (NODE *)v;
    if (nd_type(nd) != NODE_RIPPER) return Qnil;
    return nd->nd_rval;
}

static void
ripper_error(struct parser_params *p)
{
    p->error_p = TRUE;
}

static void
ripper_compile_error(struct parser_params *p, const char *fmt, ...)
{
    VALUE str;
    va_list args;

    va_start(args, fmt);
    str = rb_vsprintf(fmt, args);
    va_end(args);
    rb_funcall(p->value, rb_intern("compile_error"), 1, str);
    ripper_error(p);
}

static VALUE
ripper_lex_get_generic(struct parser_params *p, VALUE src)
{
    VALUE line = rb_funcallv_public(src, id_gets, 0, 0);
    if (!NIL_P(line) && !RB_TYPE_P(line, T_STRING)) {
	rb_raise(rb_eTypeError,
		 "gets returned %"PRIsVALUE" (expected String or nil)",
		 rb_obj_class(line));
    }
    return line;
}

static VALUE
ripper_lex_io_get(struct parser_params *p, VALUE src)
{
    return rb_io_gets(src);
}

static VALUE
ripper_s_allocate(VALUE klass)
{
    struct parser_params *p;
    VALUE self = TypedData_Make_Struct(klass, struct parser_params,
				       &parser_data_type, p);
    p->value = self;
    return self;
}

#define ripper_initialized_p(r) ((r)->lex.input != 0)

/*
 *  call-seq:
 *    Ripper.new(src, filename="(ripper)", lineno=1) -> ripper
 *
 *  Create a new Ripper object.
 *  _src_ must be a String, an IO, or an Object which has #gets method.
 *
 *  This method does not starts parsing.
 *  See also Ripper#parse and Ripper.parse.
 */
static VALUE
ripper_initialize(int argc, VALUE *argv, VALUE self)
{
    struct parser_params *p;
    VALUE src, fname, lineno;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    rb_scan_args(argc, argv, "12", &src, &fname, &lineno);
    if (RB_TYPE_P(src, T_FILE)) {
        p->lex.gets = ripper_lex_io_get;
    }
    else if (rb_respond_to(src, id_gets)) {
        p->lex.gets = ripper_lex_get_generic;
    }
    else {
        StringValue(src);
        p->lex.gets = lex_get_str;
    }
    p->lex.input = src;
    p->eofp = 0;
    if (NIL_P(fname)) {
        fname = STR_NEW2("(ripper)");
	OBJ_FREEZE(fname);
    }
    else {
	StringValueCStr(fname);
	fname = rb_str_new_frozen(fname);
    }
    parser_initialize(p);

    p->ruby_sourcefile_string = fname;
    p->ruby_sourcefile = RSTRING_PTR(fname);
    p->ruby_sourceline = NIL_P(lineno) ? 0 : NUM2INT(lineno) - 1;

    return Qnil;
}

static VALUE
ripper_parse0(VALUE parser_v)
{
    struct parser_params *p;

    TypedData_Get_Struct(parser_v, struct parser_params, &parser_data_type, p);
    parser_prepare(p);
    p->ast = rb_ast_new();
    ripper_yyparse((void*)p);
    rb_ast_dispose(p->ast);
    p->ast = 0;
    return p->result;
}

static VALUE
ripper_ensure(VALUE parser_v)
{
    struct parser_params *p;

    TypedData_Get_Struct(parser_v, struct parser_params, &parser_data_type, p);
    p->parsing_thread = Qnil;
    return Qnil;
}

/*
 *  call-seq:
 *    ripper.parse
 *
 *  Start parsing and returns the value of the root action.
 */
static VALUE
ripper_parse(VALUE self)
{
    struct parser_params *p;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    if (!ripper_initialized_p(p)) {
        rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    if (!NIL_P(p->parsing_thread)) {
        if (p->parsing_thread == rb_thread_current())
            rb_raise(rb_eArgError, "Ripper#parse is not reentrant");
        else
            rb_raise(rb_eArgError, "Ripper#parse is not multithread-safe");
    }
    p->parsing_thread = rb_thread_current();
    rb_ensure(ripper_parse0, self, ripper_ensure, self);

    return p->result;
}

/*
 *  call-seq:
 *    ripper.column   -> Integer
 *
 *  Return column number of current parsing line.
 *  This number starts from 0.
 */
static VALUE
ripper_column(VALUE self)
{
    struct parser_params *p;
    long col;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    if (!ripper_initialized_p(p)) {
        rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    if (NIL_P(p->parsing_thread)) return Qnil;
    col = p->lex.ptok - p->lex.pbeg;
    return LONG2NUM(col);
}

/*
 *  call-seq:
 *    ripper.filename   -> String
 *
 *  Return current parsing filename.
 */
static VALUE
ripper_filename(VALUE self)
{
    struct parser_params *p;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    if (!ripper_initialized_p(p)) {
        rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    return p->ruby_sourcefile_string;
}

/*
 *  call-seq:
 *    ripper.lineno   -> Integer
 *
 *  Return line number of current parsing line.
 *  This number starts from 1.
 */
static VALUE
ripper_lineno(VALUE self)
{
    struct parser_params *p;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    if (!ripper_initialized_p(p)) {
        rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    if (NIL_P(p->parsing_thread)) return Qnil;
    return INT2NUM(p->ruby_sourceline);
}

/*
 *  call-seq:
 *    ripper.state   -> Integer
 *
 *  Return scanner state of current token.
 */
static VALUE
ripper_state(VALUE self)
{
    struct parser_params *p;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    if (!ripper_initialized_p(p)) {
	rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    if (NIL_P(p->parsing_thread)) return Qnil;
    return INT2NUM(p->lex.state);
}

/*
 *  call-seq:
 *    ripper.token   -> String
 *
 *  Return the current token string.
 */
static VALUE
ripper_token(VALUE self)
{
    struct parser_params *p;
    long pos, len;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    if (!ripper_initialized_p(p)) {
        rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    if (NIL_P(p->parsing_thread)) return Qnil;
    pos = p->lex.ptok - p->lex.pbeg;
    len = p->lex.pcur - p->lex.ptok;
    return rb_str_subseq(p->lex.lastline, pos, len);
}

#ifdef RIPPER_DEBUG
/* :nodoc: */
static VALUE
ripper_assert_Qundef(VALUE self, VALUE obj, VALUE msg)
{
    StringValue(msg);
    if (obj == Qundef) {
        rb_raise(rb_eArgError, "%"PRIsVALUE, msg);
    }
    return Qnil;
}

/* :nodoc: */
static VALUE
ripper_value(VALUE self, VALUE obj)
{
    return ULONG2NUM(obj);
}
#endif

/*
 *  call-seq:
 *    Ripper.lex_state_name(integer)   -> string
 *
 *  Returns a string representation of lex_state.
 */
static VALUE
ripper_lex_state_name(VALUE self, VALUE state)
{
    return rb_parser_lex_state_name(NUM2INT(state));
}

void
Init_ripper(void)
{
    ripper_init_eventids1();
    ripper_init_eventids2();
    id_warn = rb_intern_const("warn");
    id_warning = rb_intern_const("warning");
    id_gets = rb_intern_const("gets");
    id_assoc = rb_intern_const("=>");

    (void)yystpcpy; /* may not used in newer bison */

    InitVM(ripper);
}

void
InitVM_ripper(void)
{
    VALUE Ripper;

    Ripper = rb_define_class("Ripper", rb_cObject);
    /* version of Ripper */
    rb_define_const(Ripper, "Version", rb_usascii_str_new2(RIPPER_VERSION));
    rb_define_alloc_func(Ripper, ripper_s_allocate);
    rb_define_method(Ripper, "initialize", ripper_initialize, -1);
    rb_define_method(Ripper, "parse", ripper_parse, 0);
    rb_define_method(Ripper, "column", ripper_column, 0);
    rb_define_method(Ripper, "filename", ripper_filename, 0);
    rb_define_method(Ripper, "lineno", ripper_lineno, 0);
    rb_define_method(Ripper, "state", ripper_state, 0);
    rb_define_method(Ripper, "token", ripper_token, 0);
    rb_define_method(Ripper, "end_seen?", rb_parser_end_seen_p, 0);
    rb_define_method(Ripper, "encoding", rb_parser_encoding, 0);
    rb_define_method(Ripper, "yydebug", rb_parser_get_yydebug, 0);
    rb_define_method(Ripper, "yydebug=", rb_parser_set_yydebug, 1);
    rb_define_method(Ripper, "debug_output", rb_parser_get_debug_output, 0);
    rb_define_method(Ripper, "debug_output=", rb_parser_set_debug_output, 1);
    rb_define_method(Ripper, "error?", ripper_error_p, 0);
#ifdef RIPPER_DEBUG
    rb_define_method(Ripper, "assert_Qundef", ripper_assert_Qundef, 2);
    rb_define_method(Ripper, "rawVALUE", ripper_value, 1);
    rb_define_method(Ripper, "validate_object", ripper_validate_object, 1);
#endif

    rb_define_singleton_method(Ripper, "dedent_string", parser_dedent_string, 2);
    rb_define_private_method(Ripper, "dedent_string", parser_dedent_string, 2);

    rb_define_singleton_method(Ripper, "lex_state_name", ripper_lex_state_name, 1);

    /* ignore newline, +/- is a sign. */
    rb_define_const(Ripper, "EXPR_BEG", INT2NUM(EXPR_BEG));
    /* newline significant, +/- is an operator. */
    rb_define_const(Ripper, "EXPR_END", INT2NUM(EXPR_END));
    /* ditto, and unbound braces. */
    rb_define_const(Ripper, "EXPR_ENDARG", INT2NUM(EXPR_ENDARG));
    /* ditto, and unbound braces. */
    rb_define_const(Ripper, "EXPR_ENDFN", INT2NUM(EXPR_ENDFN));
    /* newline significant, +/- is an operator. */
    rb_define_const(Ripper, "EXPR_ARG", INT2NUM(EXPR_ARG));
    /* newline significant, +/- is an operator. */
    rb_define_const(Ripper, "EXPR_CMDARG", INT2NUM(EXPR_CMDARG));
    /* newline significant, +/- is an operator. */
    rb_define_const(Ripper, "EXPR_MID", INT2NUM(EXPR_MID));
    /* ignore newline, no reserved words. */
    rb_define_const(Ripper, "EXPR_FNAME", INT2NUM(EXPR_FNAME));
    /* right after `.' or `::', no reserved words. */
    rb_define_const(Ripper, "EXPR_DOT", INT2NUM(EXPR_DOT));
    /* immediate after `class', no here document. */
    rb_define_const(Ripper, "EXPR_CLASS", INT2NUM(EXPR_CLASS));
    /* flag bit, label is allowed. */
    rb_define_const(Ripper, "EXPR_LABEL", INT2NUM(EXPR_LABEL));
    /* flag bit, just after a label. */
    rb_define_const(Ripper, "EXPR_LABELED", INT2NUM(EXPR_LABELED));
    /* symbol literal as FNAME. */
    rb_define_const(Ripper, "EXPR_FITEM", INT2NUM(EXPR_FITEM));
    /* equals to +EXPR_BEG+ */
    rb_define_const(Ripper, "EXPR_VALUE", INT2NUM(EXPR_VALUE));
    /* equals to <tt>(EXPR_BEG | EXPR_MID | EXPR_CLASS)</tt> */
    rb_define_const(Ripper, "EXPR_BEG_ANY", INT2NUM(EXPR_BEG_ANY));
    /* equals to <tt>(EXPR_ARG | EXPR_CMDARG)</tt> */
    rb_define_const(Ripper, "EXPR_ARG_ANY", INT2NUM(EXPR_ARG_ANY));
    /* equals to <tt>(EXPR_END | EXPR_ENDARG | EXPR_ENDFN)</tt> */
    rb_define_const(Ripper, "EXPR_END_ANY", INT2NUM(EXPR_END_ANY));
    /* equals to +0+ */
    rb_define_const(Ripper, "EXPR_NONE", INT2NUM(EXPR_NONE));

    ripper_init_eventids1_table(Ripper);
    ripper_init_eventids2_table(Ripper);

# if 0
    /* Hack to let RDoc document SCRIPT_LINES__ */

    /*
     * When a Hash is assigned to +SCRIPT_LINES__+ the contents of files loaded
     * after the assignment will be added as an Array of lines with the file
     * name as the key.
     */
    rb_define_global_const("SCRIPT_LINES__", Qnil);
#endif

}
#endif /* RIPPER */

/*
 * Local variables:
 * mode: c
 * c-file-style: "ruby"
 * End:
 */

