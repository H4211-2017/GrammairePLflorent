#ifndef SYMBOLE_H
#define SYMBOLE_H

typedef enum Ident:int
{
	NOMBRE,
	MULT,
	PLUS,
	FERMEPAR,
	OUVREPAR,
	EXPR,
	FINFICHIER
} Ident;

class Symbole {

    public:
    	Symbole(Ident id);
		virtual ~Symbole();
		inline operator int() const { return ident; } //ce que renvoit un symbole lorsque cast sur int.
		virtual int eval();

	protected:
		Ident ident;
		
    private:
};

#endif //SYMBOLE_H
