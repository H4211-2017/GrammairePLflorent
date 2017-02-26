#ifndef ETATIMPL0_H
#define ETATIMPL0_H

#include "Etat.h"

class Etat;
class Automate;
class Symbole;

class E0 : public Etat{

    public:
    	inline E0():Etat(){}
		virtual ~E0(){}
		virtual void transition(Automate &automate, Symbole * symbole);

    private:
};

class E1 : public Etat{
	public:
		inline E1():Etat(){}
		inline virtual ~E1(){}
		virtual void transition(Automate &automate, Symbole * symbole);
	private:
};
class E2 : public Etat{
	public:
		inline E2():Etat(){}
		inline virtual ~E2(){}
		virtual void transition(Automate &automate, Symbole * symbole);
	private:
};

class E3 : public Etat{
	public:
		inline E3():Etat(){}
		inline virtual ~E3(){}
		virtual void transition(Automate &automate, Symbole * symbole);
	private:
};

class E4 : public Etat{
	public:
		inline E4():Etat(){}
		inline virtual ~E4(){}
		virtual void transition(Automate &automate, Symbole * symbole);
	private:
};

class E5 : public Etat{
	public:
		inline E5():Etat(){}
		inline virtual ~E5(){}
		virtual void transition(Automate &automate, Symbole * symbole);
	private:
};

class E6 : public Etat{
	public:
		inline E6():Etat(){}
		inline virtual ~E6(){}
		virtual void transition(Automate &automate, Symbole * symbole);
	private:
};

class E7 : public Etat{
	public:
		inline E7():Etat(){}
		inline virtual ~E7(){}
		virtual void transition(Automate &automate, Symbole * symbole);
	private:
};

class E8 : public Etat{
	public:
		inline E8():Etat(){}
		inline virtual ~E8(){}
		virtual void transition(Automate &automate, Symbole * symbole);
	private:
};

class E9 : public Etat{
	public:
		inline E9():Etat(){}
		inline virtual ~E9(){}
		virtual void transition(Automate &automate, Symbole * symbole);
	private:
};

#endif //ETATIMPL_H
