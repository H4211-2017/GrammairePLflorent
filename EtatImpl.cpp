#include "EtatImpl.h"
#include "Automate.h"
#include "Symbole.h"

void E0::transition(Automate &a, Symbole * s){
	switch(*s){
		case EXPR:
			a.decalage(s,1);
		break;
		case NOMBRE :
			a.decalage(s,3);
		break;
		case FERMEPAR:
			a.decalage(s,2);
		break;
	}
}

void E1::transition(Automate &a, Symbole * s){
	switch(*s){
		case PLUS:
			a.decalage(s,4);
		break;
		case MULT:
			a.decalage(s,5);
		break;
		case FINFICHIER:
			a.accepter();
		break;
	}
}

void E2::transition(Automate &a, Symbole *s){
	switch(*s){
		case NOMBRE:
			a.decalage(s,3);
		break;
		case OUVREPAR:
			a.decalage(s,2);
		break;
		case EXPR:
			a.decalage(s,6);
		break;
	}
}

void E3::transition(Automate &a, Symbole *s){
	switch(*s){
		case PLUS:
			a.reduction(5,s);
		break;
		case MULT:
			a.reduction(5,s);
		break;
		case FERMEPAR:
			a.reduction(5,s);
		break;
		case FINFICHIER:
			a.reduction(5,s);
		break;
	}
}

void E4::transition(Automate &a, Symbole *s){
	switch(*s){
		case NOMBRE:
			a.decalage(s,3);
		break;
		case OUVREPAR:
			a.decalage(s,2);
		break;
		case EXPR:
			a.decalage(s,7);
		break;
	}
}

void E5::transition(Automate &a, Symbole *s){
	switch(*s){
		case NOMBRE:
			a.decalage(s,3);
		break;
		case OUVREPAR:
			a.decalage(s,2);
		break;
		case EXPR:
			a.decalage(s,8);
		break;
	}
}

void E6::transition(Automate &a, Symbole *s){
	switch(*s){
		case PLUS:
			a.decalage(s,4);
		break;
		case MULT:
			a.decalage(s,5);
		break;
		case FERMEPAR:
			a.decalage(s,9);
		break;
	}
}

void E7::transition(Automate &a, Symbole *s){
	switch(*s){
		case PLUS:
			a.reduction(2,s);
		break;
		case MULT:
			a.decalage(s,5);
		break;
		case FERMEPAR:
			a.reduction(2,s);
		break;
		case FINFICHIER:
			a.reduction(2,s);
		break;
	}
}

void E8::transition(Automate &a, Symbole *s){
	switch(*s){
		case PLUS:
			a.reduction(3,s);
		break;
		case MULT:
			a.reduction(3,s);
		break;
		case FERMEPAR:
			a.reduction(3,s);
		break;
		case FINFICHIER:
			a.reduction(3,s);
		break;
	}
}

void E9::transition(Automate &a, Symbole *s){
	switch(*s){
		case PLUS:
			a.reduction(4,s);
		break;
		case MULT:
			a.reduction(4,s);
		break;
		case FERMEPAR:
			a.reduction(4,s);
		break;
		case FINFICHIER:
			a.reduction(4,s);
		break;
	}
}
