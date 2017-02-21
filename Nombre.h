#ifndef NOMBRE_H
#define NOMBRE_H

#include "Expr.h"

class Nombre : public Expr {

    public:
    	inline Nombre(int aVal) : Expr(NOMBRE), aVal(val) {}
    	 
		virtual inline ~Nombre() {}
		
		virtual double eval();

    private:
		int val;
};

#endif //NOMBRE_H
