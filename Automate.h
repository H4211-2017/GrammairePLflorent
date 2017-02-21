#ifndef AUTOMATE_H
#define AUTOMATE_H

#include <stack>
#include <string>

class Symbole;
class Etat;
class Lexer;

class Automate {

    public:
		Automate(std::string &expression);
		virtual ~Automate();
		void lecture();

    private:
		std::stack<Symbole *> pileSymboles;
		std::stack<Etat *> pileEtats;
		Lexer * lexer;
};

#endif //AUTOMATE_H
