#ifndef SYMBOLETERM_H
#define SYMBOLETERM_H

#include "Symbole.h"

class SymboleTerm : public Symbole {

    public:
    	inline SymboleTerm(Ident id) : Symbole(id) {}
	virtual inline ~SymboleTerm() {}

    private:
};

#endif //SYMBOLETERM_H
