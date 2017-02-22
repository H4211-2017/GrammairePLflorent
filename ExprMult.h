#ifndef EXPRMULT_H
#define EXPRMULT_H

#include "ExprBin.h"

class ExprMult : public ExprBin {

    public:
		inline ExprMult(Expr * exprGauche, Expr * exprDroite) : ExprBin(exprGauche,exprDroite) {}
		virtual inline ~ExprMult() {}
		
		virtual int eval();
		
    private:
};

#endif //EXPRMULT_H

