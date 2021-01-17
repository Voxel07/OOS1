#include <iostream>

using namespace std;

int main(void)
{
	int i = 1;
	int & j = i;
	int * ptr;
	ptr = &i;
	cout << "Groesse von i: " << sizeof(i) << endl; //4
	cout << "Groesse von j: " << sizeof(j) << endl; //4
	cout << "Groesse von ptr: " << sizeof(ptr) << endl; //4
	cout << boolalpha; // ?
	cout << "Die Adressen von i und j sind gleich: ";
	cout << (&i == &j) << endl; // Ja
	cout << "Die Adressen von j und *ptr sind gleich: ";
	cout << (&j == &(*ptr)) << endl; // Nein |->JA<- Richtig
	cout << "Die Adressen von j und ptr sind gleich: ";
	cout << (int(&j) == int(&ptr)) << endl; // Nein

	return 0;
}