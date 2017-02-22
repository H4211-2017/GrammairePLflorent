#include "Nombre.h"

Nombre::~Nombre(){}

Nombre::Nombre(int aVal) : Expr(NOMBRE){
	val = aVal;
}

int Nombre::eval()
{
	return val;
}


