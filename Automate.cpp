#include "Automate.h"

#include "Lexer.h"
#include "Symbole.h"
#include "Etat.h"
#include "EtatImpl.h"

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

int Automate::lecture()
{
	pileEtats.top()->transition(*this, lexer->getNext());
	return this->pileSymboles.top()->eval();
}

void Automate::decalage(Symbole * s, int etat){
	Etat * ptEtat;
	switch(etat){
		case 1:
			ptEtat = new E1();
		break;
		case 2:
			ptEtat = new E2();
		break;
		case 3:
			ptEtat = new E3();
		break;
		case 4:
			ptEtat = new E4();
		break;
		case 5:
			ptEtat = new E5();
		break;
		case 6:
			ptEtat = new E6();
		break;
		case 7:
			ptEtat = new E7();
		break;
		case 8:
			ptEtat = new E8();
		break;
		case 9:
			ptEtat = new E9();
		break;
	}
	
	this->pileEtats.push(ptEtat);
	this->pileSymboles.push(s);
	ptEtat->transition(*this, lexer->getNext());
}

void Automate::accepter(){
	//fini = true;
}
		
void Automate::reduction(int n, Symbole * s){
		for(int i = 0; i < n; n++){
			delete(pileEtats.top());
			pileEtats.pop();
		}
		pileEtats.top()->transition(*this,s);
}



