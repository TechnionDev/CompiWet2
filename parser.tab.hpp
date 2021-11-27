/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     VOID = 258,
     INT = 259,
     BYTE = 260,
     B = 261,
     BOOL = 262,
     CONST = 263,
     LPAREN = 264,
     RPAREN = 265,
     LBRACE = 266,
     RBRACE = 267,
     NOT = 268,
     MULT = 269,
     DIV = 270,
     PLUS = 271,
     MINUS = 272,
     LESS = 273,
     GREATER = 274,
     LESSEQ = 275,
     GREATEREQ = 276,
     EQ = 277,
     NOTEQ = 278,
     AND = 279,
     OR = 280,
     TRUE = 281,
     FALSE = 282,
     RETURN = 283,
     IF = 284,
     ELSE = 285,
     WHILE = 286,
     BREAK = 287,
     CONTINUE = 288,
     SC = 289,
     COMMA = 290,
     ASSIGN = 291,
     ID = 292,
     NUM = 293,
     STRING = 294
   };
#endif
/* Tokens.  */
#define VOID 258
#define INT 259
#define BYTE 260
#define B 261
#define BOOL 262
#define CONST 263
#define LPAREN 264
#define RPAREN 265
#define LBRACE 266
#define RBRACE 267
#define NOT 268
#define MULT 269
#define DIV 270
#define PLUS 271
#define MINUS 272
#define LESS 273
#define GREATER 274
#define LESSEQ 275
#define GREATEREQ 276
#define EQ 277
#define NOTEQ 278
#define AND 279
#define OR 280
#define TRUE 281
#define FALSE 282
#define RETURN 283
#define IF 284
#define ELSE 285
#define WHILE 286
#define BREAK 287
#define CONTINUE 288
#define SC 289
#define COMMA 290
#define ASSIGN 291
#define ID 292
#define NUM 293
#define STRING 294




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

