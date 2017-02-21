#include "ExprMult.h"

int ExprMult::eval()
{
	return gauche.eval() * droite.eval();
}
