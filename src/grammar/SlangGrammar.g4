grammar SlangGrammar;

// Use when separating lexer and parser grammars:
//options {
//    tokenVocab = 'libs/SlangLexer';
//}

// Lexer Grammar

PROGSTART: '<SLANG>';
PROGEND: '</SLANG>';

LPAREN: '(';
RPAREN: ')';
LCURLYBR: '{';
RCURLYBR: '}';
LSQBR: '[';
RSQBR: ']';

PLUS: '+';
MINUS: '-';
DIVIDE: '/';
MULT: '*';
EQUAL: '=';

LT: '<';
GT: '>';
LTEQ: '<=';
GTEQ: '>=';
COMP: '==';
COMPNOTEQ: '!=';

MARKERCOMMULTILINESTART: '\\\\*';
MARKERCOMMULTILINEEND: '*\\\\';
MARKERCOMSINGLELINE: ('\\\\-' | 'binod');
COMMENT : MARKERCOMSINGLELINE ~[\r\n]* '\r'? '\n' -> skip ;

LOGICALAND: ('and' | '&&');
LOGICALOR: ('or' | '||');
LOGICALXOR: ('strictor' | '||!');
LOGICALNOT: ('no' | '!!');

TRUE: ('true' | 'yes' | 'True' | 'TRUE');
FALSE: ('false' | 'nope' | 'False' | 'FALSE');

BINAND: '&';
BINOR: '|';
BINXOR: '|!';
BINNOT: '!';

RIGHTARROW: '->';

IF: 'if';
ELSE: 'else';
FUNCDEF: 'introducing';
VARDEF: 'define';
COLON: ':';
STATEMENTEND: ';';
WHILE: 'while';
RETURN: 'return';

INTTYPE: 'int';
STRINGTYPE: 'string';
BOOLTYPE: 'booly';
VOIDTYPE: 'void';
NULLVALUE: 'null';

DECINT: [0-9]+;
IDENTIFIER: [_a-zA-Z][_a-zA-Z0-9]+;
STRING: '"' ('\\"'|.)*? '"';
COMMA: ',';

NEWLINE: ('\r'? '\n' | '\r' | '\n')+ -> skip;
TAB: ('t' | '    ' | '        ') -> skip;
WHITESPACE: ' ' -> skip;

OTHER: .;


// Parser Grammar

program: EOF
        | PROGSTART PROGEND
        | PROGSTART statements PROGEND
        | statements EOF;

statements: (statement | compoundStmt | funcDef | commentMultiline)+;
commentMultiline: MARKERCOMMULTILINESTART .*? MARKERCOMMULTILINEEND;

statement: (declStmt | assignStmt | declAssignStmt | functionCall | returnStmt) STATEMENTEND;

returnStmt: RETURN expr | RETURN;

assignStmt: IDENTIFIER EQUAL expr;

expr: expr DIVIDE expr
    | expr MULT expr
    | expr PLUS expr
    | expr MINUS expr
    | LPAREN expr RPAREN
    | MINUS expr
    | booleanExpr
    | IDENTIFIER | DECINT | STRING | functionCall;

declStmt: VARDEF IDENTIFIER COLON typeName;
typeName: INTTYPE | STRINGTYPE | VOIDTYPE | BOOLTYPE;

declAssignStmt: VARDEF IDENTIFIER COLON typeName EQUAL expr;

block: LCURLYBR RCURLYBR
     | LCURLYBR statements RCURLYBR;

ifStmt: IF LPAREN booleanExpr RPAREN block
      | IF LPAREN booleanExpr RPAREN block ELSE block
      | IF LPAREN IDENTIFIER RPAREN block
      | IF LPAREN IDENTIFIER RPAREN block ELSE block;

whileStmt: WHILE LPAREN booleanExpr RPAREN block
         | WHILE LPAREN IDENTIFIER RPAREN block;

booleanExpr: booleanExpr LOGICALOR booleanExpr
           | booleanExpr LOGICALAND booleanExpr
           | booleanExpr LOGICALXOR booleanExpr
           | LOGICALNOT booleanExpr
           | (IDENTIFIER | DECINT) (relOp | compOp) (IDENTIFIER | DECINT)
           | TRUE
           | FALSE;

compOp: (COMP | COMPNOTEQ);

relOp: (LT | GT | LTEQ | GTEQ);

compoundStmt: (block | ifStmt | whileStmt);

funcDef: (FUNCDEF IDENTIFIER block
       | FUNCDEF IDENTIFIER LPAREN RPAREN block
       | FUNCDEF IDENTIFIER LPAREN funcArgList RPAREN block) (STATEMENTEND)?
       | (FUNCDEF IDENTIFIER block
       | FUNCDEF IDENTIFIER LPAREN RPAREN block
       | FUNCDEF IDENTIFIER LPAREN funcArgList RPAREN block) RIGHTARROW typeName (STATEMENTEND)?;

funcArgList: argParam
           | (argParam COMMA)+ argParam;
argParam: IDENTIFIER COLON typeName;

callArgList: expr
           | (expr COMMA)+ expr;
functionCall: LPAREN RPAREN RIGHTARROW IDENTIFIER
            | LPAREN callArgList RPAREN RIGHTARROW IDENTIFIER;