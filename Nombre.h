#ifndef NOMBRE_H
#define NOMBRE_H

#include "Expr.h"

class Nombre : public Expr {

    public:
    	Nombre(int aVal); 
 
	virtual  ~Nombre();
		
	virtual int eval();

    private:
	int val;
};

#endif //NOMBRE_H
