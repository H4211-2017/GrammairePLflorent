#ifndef NOMBRE_H
#define NOMBRE_H

#include "Expr.h"

class Nombre : public Expr {

    public:
    	inline Nombre(int aVal) : Expr(NOMBRE), val(aVal) {}
    	 
		virtual inline ~Nombre() {}
		
		virtual int eval();

    private:
		int val;
};

#endif //NOMBRE_H
