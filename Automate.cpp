#include "Automate.h"

#include "Lexer.h"
#include "Symbole.h"
#include "Etat.h"

using namespace std;

Automate::Automate(string &expression)
{
	lexer = new Lexer(expression);
}

Automate::~Automate()
{
	delete lexer;
	
	while(!pileSymboles.empty())
	{
        delete pileSymboles.top();
		pileSymboles.pop();
	}
	
	while(!pileEtats.empty())
	{
		delete pileEtats.top();
		pileEtats.pop();
	}
}

void Automate::lecture()
{
	
}


