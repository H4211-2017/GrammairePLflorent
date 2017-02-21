#include "Lexer.h"

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
		symbole = new SymboleTerm(Ident::FINFICHIER);
	}
	else
	{
		switch (expression[position])
		{
			case '+':				
				symbole = new SymboleTerm(Ident::PLUS);
				break;
				
			case '*':			
				symbole = new SymboleTerm(Ident::MULT);
				break;
			
			case '(':			
				symbole = new SymboleTerm(Ident::OUVREPAR);
				break;
				
			case ')':			
				symbole = new SymboleTerm(Ident::FERMEPAR);
				break;
				
			case >'0':
			case <'9':
				symbole = new Nombre(concatNombre());
				break;	
			
			default :			
				symbole = getNext(); //recurcivite pour avancer jusqu'au prochain caractere connu
				break;
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


