#ifndef ETATIMPL_H
#define ETATIMPL_H

#include "Etat.h"

public Symbole;
public Automate;

class E0 {

    public:
    	E0(string &name);
		virtual ~Etat();
		virtual void transition(Automate automate, Symbole symbole) = 0;

    private:
};

#endif //ETATIMPL_H
