#ifndef EXPRBIN_H
#define EXPRBIN_H

#include "Expr.h"

class ExprBin : public Expr {

    public:
    	inline ExprBin(Expr * exprGauche, Expr * exprDroite) : Expr(), gauche(exprGauche), droite(exprDroite) {}
    	/**
    	 * Contrat : exprGauche et exprDroite doivent etre contruits
    	 * avant d'etre passes en parametre du contructeur
    	 */
    	 
		virtual inline ~ExprBin() {}
		
    protected:
		Expr * gauche;
		Expr * droite;
		
	private:
};

#endif //EXPRBIN_H

