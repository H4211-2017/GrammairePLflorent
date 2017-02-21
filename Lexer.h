#ifndef LEXER_H
#define LEXER_H

#include <string>

class Symbole;

class Lexer {

    public:
    	inline Lexer(std::string &aExpression) : expression(aExpression), position(0) {}
		virtual inline ~Lexer() {}
		
		Symbole * getNext();

    private:
		int concatNombre();
		
		std::string expression;
		int position;
};

#endif //LEXER_H
