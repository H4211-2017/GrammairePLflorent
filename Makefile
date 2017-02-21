CC=g++
CFLAGS=-g -std=c++11# -DLOG_DEBUG
LFLAGS=

SRC  := Automate.cpp Lexer.cpp main.cpp
OBJ := $(SRC:%.cpp=%.o)
LIBS = 
PROG=LALR

export BIN_DIR CC CFLAGS

.PHONY: all
all: $(PROG)

$(PROG): $(OBJ) subdir
	$(CC) $(LFLAGS) -o $(PROG) $(OBJ) $(LIBS)

%.o: %.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

	
.PHONY:depend
depend:
	makedepend -- $(CFLAGS) -- $(SRC) 2>&1 /dev/null

.PHONY:clean
clean:
	rm -f $(PROG) $(OBJ) *.bak
# DO NOT DELETE

Automate.o: Automate.h Lexer.h Symbole.h Etat.h
Lexer.o: Lexer.h SymboleTerm.h Symbole.h Nombre.h Expr.h
main.o: Automate.h
