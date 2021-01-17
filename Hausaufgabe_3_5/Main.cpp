//Aufgabe 3.5
//Von Matthias Schneider 
//Begin 20.5.2019 16.00
//Bearbeitet:

#include "Fahrzeug.hpp"


using namespace std;

int main() {
	Fahrzeug f1("ES - H 123");
	cout << f1 << endl;
	f1.fahren(101.5);
	cout << f1 << endl;
	Fahrzeug f2("ES - M 4711");
	f2.fahren(10.57);
	cout << f2 << endl;
	return 0;
}

/* Ausgabe soll:

Kz = ES - H 123 VIN = 1 km = 0.0
Kz = ES - H 123 VIN = 1 km = 101.5
Kz = ES - M 4711 VIN = 2 km = 10.6

*/