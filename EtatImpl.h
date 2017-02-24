#ifndef ETATIMPL_H
#define ETATIMPL_H

#include "Etat.h"

#include "Symbole.h"
#include "Automate.h"

class E0 : public Etat{

    public:
    	inline E0(Symbole s):Etat(s){};
		virtual ~Etat();
		virtual void transition(Automate &automate, Symbole * symbole);

    private:
};

class E1 : public Etat{
	public:
		inline E1(Symbole s):Etat(s){}
		virtual ~Etat();
		virtual void transition(Automate &automate, Symbole * symbole);
};
class E2 : public Etat{
	public:
		inline E2(Symbole s):Etat(s){}
		virtual ~Etat();
		virtual void transition(Automate &automate, Symbole * symbole);
};

class E3 : public Etat{
	public:
		inline E3(Symbole s):Etat(s){}
		virtual ~Etat();
		virtual void transition(Automate &automate, Symbole * symbole);
};

class E4 : public Etat{
	public:
		inline E4(Symbole s):Etat(s){}
		virtual ~Etat();
		virtual void transition(Automate &automate, Symbole * symbole);
};

class E5 : public Etat{
	public:
		inline E5(Symbole s):Etat(s){}
		virtual ~Etat();
		virtual void transition(Automate &automate, Symbole * symbole);
};

class E6 : public Etat{
	public:
		inline E6(Symbole s):Etat(s){}
		virtual ~Etat();
		virtual void transition(Automate &automate, Symbole * symbole);
};

class E7 : public Etat{
	public:
		inline E7(Symbole s):Etat(s){}
		virtual ~Etat();
		virtual void transition(Automate &automate, Symbole * symbole);
};

class E8 : public Etat{
	public:
		inline E8(Symbole s):Etat(s){}
		virtual ~Etat();
		virtual void transition(Automate &automate, Symbole * symbole);
};

class E9 : public Etat{
	public:
		inline E9(Symbole s):Etat(s){}
		virtual ~Etat();
		virtual void transition(Automate &automate, Symbole * symbole);
};
#endif //ETATIMPL_H
