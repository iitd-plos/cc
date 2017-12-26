c: c.tab.c c.lex.c
	g++ c.tab.c c.lex.c -lm -ll -lfl -o $@

c.tab.c c.tab.h: c.y
	bison -o c.tab.c -d c.y

c.lex.c: c.l c.tab.h
	flex -o c.lex.c -l c.l

clean::
	rm -f c.tab.c c.tab.h c.lex.c c c.output
