#ifndef ETAT_H
#define ETAT_H

#include <string>

class Symbole;
class Automate;

class Etat {

    public:
    	inline Etat(Symbole* s) : symbole(s) {} 
		virtual inline ~Etat() {}
		virtual void transition(Automate automate, Symbole symbole) = 0;

    private:
		Symbole* symbole;
};

#endif //ETAT_H
