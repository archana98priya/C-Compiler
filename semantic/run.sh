lex c1.l
yacc p1.y -d
gcc y.tab.c
./a.out