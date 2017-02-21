#ifndef EXPRPLUS_H
#define EXPRPLUS_H

#include "ExprBin.h"

class ExprPlus : public ExprBin {

    public:
		inline ExprPlus(Expr * exprGauche, Expr * exprDroite) : ExprBin(Expr * exprGauche, Expr * exprDroite) {}
		virtual inline ~ExprPlus() {}
		
		virtual int eval();
		
    private:
};

#endif //EXPRPLUS_H
