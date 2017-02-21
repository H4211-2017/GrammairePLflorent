#ifndef SYMBOLE_H
#define SYMBOLE_H

typedef enum Ident
{
	NOMBRE,
	MULT,
	PLUS,
	FERMEPAR,
	OUVREPAR,
	EXPR,
	FINFICHER
} Ident;

class Symbole {

    public:
    	inline Symbole(Ident id) : ident(id) {}
		virtual inline ~Symbole() {}
		inline operator Ident() const { return ident; }

	protected:
		Ident ident;
		
    private:
};

#endif //SYMBOLE_H
