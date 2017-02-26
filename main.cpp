#include "Automate.h"
#include<iostream>
using namespace std;

int main() {
	string expression = "5+2";
	Automate automate(expression);	
	cout<<automate.lecture();
	return 0;
}
