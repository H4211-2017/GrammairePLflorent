#ifndef AUTOMATE_H
#define AUTOMATE_H

#include <stack>
#include <string>

#include "Etat.h"
#include "Lexer.h"

class Automate {

    public:
		Automate(std::string &expression);
		virtual ~Automate();
		int lecture();
		void decalage(Symbole * s, int etat);
		void reduction(int n, Symbole * s);
		void accepter();

    private:
		std::stack<Symbole *> pileSymboles;
		std::stack<Etat *> pileEtats;
		Lexer * lexer;
};

#endif //AUTOMATE_H
