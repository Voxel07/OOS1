//Aufgabe: HA 3.3
//Von: Matthias Schneider
//Beginn: 15.5.19 || 12.15
//Bearbeitet am:
//Bearbeitungzeit: 5min

#include <iostream>
#include "MyString.hpp"

using namespace std;

int main() {
	MyString s1("Eins ");
	MyString s2("Zwei ");
	MyString s3("Drei ");
	MyString s4("NIX");
	//MyString Pfusch;
	//s1.append(s2).append(s3);
	//s1.append(s2.append(3));
	s4 = s1 + s2 + s3; //+ tut nicht ....
	s2 = s1;
	cout << "Sind s1 und s2 gleich? "<< boolalpha << (s1 == s2) << endl;// == tut

	cout << s1 << endl; //tut
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;

	return 0;
	
}