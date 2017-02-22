CC=g++
CFLAGS=-g -std=c++11# -DLOG_DEBUG
LFLAGS=

SRC=Automate.cpp Etat.cpp ExprBin.cpp ExprMult.cpp ExprPlus.cpp Lexer.cpp main.cpp Nombre.cpp
OBJ=$(SRC:.cpp=.o)
LIBS = 
PROG=LALR

export BIN_DIR CC CFLAGS

.PHONY: all
all: $(PROG)

$(PROG): $(OBJ)
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
Etat.o: Etat.h
ExprBin.o: ExprBin.h Expr.h Symbole.h
ExprMult.o: ExprMult.h ExprBin.h Expr.h Symbole.h
ExprPlus.o: ExprPlus.h ExprBin.h Expr.h Symbole.h
Lexer.o: Lexer.h SymboleTerm.h Symbole.h Nombre.h Expr.h
main.o: Automate.h
Nombre.o: Nombre.h Expr.h Symbole.h
