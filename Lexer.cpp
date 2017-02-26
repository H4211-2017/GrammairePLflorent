#include "Lexer.h"
#include "Symbole.h"
#include <cstdlib>

#include "SymboleTerm.h"
#include "Nombre.h"

using namespace std;

// on avance dans l'expression une fois q'on analyse le c
Symbole * Lexer::getNext()
{
	Symbole * symbole = NULL;
	
	if (position >= expression.length())
	{
		symbole = new SymboleTerm(FINFICHIER);
	}
	else
	{
		char carac = expression[position];
		if(carac == '+'){
			symbole = new SymboleTerm(PLUS);
		}
		else if(carac == '*'){
			symbole = new SymboleTerm(MULT);
		}
		else if(carac == '('){				
			symbole = new SymboleTerm(OUVREPAR);
		
		}
		else if(carac == ')'){
			symbole = new SymboleTerm(FERMEPAR);
		}
		else if(carac >= '0' && carac <= '9'){
			symbole = new Nombre(concatNombre());
		}
		else {
			symbole = getNext();
		}
		
		
	}
	
	return symbole;
}

int Lexer::concatNombre()
{
	string nbreStr = "";
	while(expression[position] < '9' && expression[position] > '0')
	{
		nbreStr += expression[position];
		position++;
	}
	
	position--; // pour permettre la factorisation de position++ dans switch
	
	return atoi(nbreStr.c_str());
}


