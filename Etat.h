#ifndef ETAT_H
#define ETAT_H

#include <string>

class Symbole;
class Automate;

class Etat {

    public:
		inline Etat(){}
		virtual inline ~Etat() {}
		virtual void transition(Automate &automate, Symbole * symbole);

    private:
};

#endif //ETAT_H
