#include "Automate.h"

using namespace std;

int main() {
	string expression = "5+2";
	Automate automate(expression);	
	automate.lecture();
	return 0;
}
