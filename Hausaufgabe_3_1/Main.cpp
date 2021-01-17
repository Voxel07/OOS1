//Aufgabe: HA 3.1
//Von: Matthias Schneider
//Beginn: 15.5.19 || 10.40
//Bearbeitet am:
//Bearbeitungzeit: 45min

#include "ObjectCounter.hpp"
#include <iostream>
using namespace std;

//Default Werte für static Variablen

int ObjectCounter::id_count = 6000;
int ObjectCounter::maxId = 0;
int ObjectCounter::number = 0;

int main()
{
	ObjectCounter Obj1;
	cout << "Obj1 ID = " << Obj1.getId() <<" Anz.Objekte: "<<Obj1.getNumber()<< endl;
	ObjectCounter Obj2;
	cout << "Obj2 ID = " << Obj2.getId() <<" Anz.Objekte: " << Obj2.getNumber()<< endl;
	ObjectCounter Obj3;
	cout << "Obj3 ID = " << Obj3.getId() <<" Anz.Objekte: " << Obj3.getNumber() << endl;
	cout << "Obj 1 geloescht"<<endl;
	Obj1.~ObjectCounter();
	ObjectCounter Obj4;
	cout << "Obj4 ID = " << Obj4.getId() <<" Anz.Objekte: " << Obj4.getNumber() << endl;
	
		return 1;
}