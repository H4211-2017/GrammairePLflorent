#ifndef EXPR_H
#define EXPR_H

#include "Symbole.h"

class Expr : public Symbole {

    public:
    	inline Expr() : Symbole(EXPR) {}
    	inline Expr(Ident id) : Symbole(id) {}
		virtual inline ~Expr() {}
		
		virtual int eval() = 0;

    private:
};

#endif //EXPR_H
