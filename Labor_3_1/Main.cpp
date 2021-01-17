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

	cout << f1.getSummeKm()<<endl;
	cout << f2.getSummeKm()<<endl;
	
	f1.~Fahrzeug();//Böse darf man nicht Löschen 
	//Destruktor nur durch verlassen des Gültigkeitsbereiches testen 

	cout << f2.getSummeKm()<<endl;
	f2.~Fahrzeug();
	
	Fahrzeug f3("TEST");
	cout << f3.getSummeKm()<<endl;
	return 0;
}

/* Ausgabe soll:

Kz = ES - H 123 VIN = 1 km = 0.0
Kz = ES - H 123 VIN = 1 km = 101.5
Kz = ES - M 4711 VIN = 2 km = 10.6

*/