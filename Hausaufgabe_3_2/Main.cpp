//Aufgabe: HA 3.2
//Von: Matthias Schneider
//Beginn: 15.5.19 || 12.00
//Bearbeitet am: 19.5 12.30
//Bearbeitungzeit: 10min
#include "Kunde.hpp"
#include <iostream>

using namespace std;

int main()
{
	Kunde K1;
	K1.kaufe(4.56);
	
	K1.print();
	Kunde K2("Günter", "Esslingen", 50);
	K2.print();
	
	Kunde K3(K2);
	K2.kaufe(3.45);
	K3.print();
	K2.print();
	cout << "Heiko Strinkt!!";
	return 1;
}