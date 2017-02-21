#ifndef ETAT_H
#define ETAT_H

#include <string>

class Symbole;
class Automate;

class Etat {

    public:
    	inline Etat(std::string &name) : nom(name) {} 
		virtual inline ~Etat() {}
		virtual void transition(Automate automate, Symbole symbole) = 0;

    private:
		std::string nom;
};

#endif //ETAT_H
