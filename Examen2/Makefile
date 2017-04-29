# Fichero flex a compilar (sin extensión)
SOURCE=FernandezGonzalez-GonzalezFernandez

$(SOURCE): lex.yy.c 
	gcc -o $@ $^ -lfl

lex.yy.c: $(SOURCE).l
	flex $<

clean:
	rm lex.yy.c
