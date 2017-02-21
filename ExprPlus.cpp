#include "ExprPlus.h"

int ExprPlus::eval()
{
	return gauche.eval() + droite.eval();
}
