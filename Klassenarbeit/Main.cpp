//
//#include <string>
//#include <iostream>
//#include <sstream>
//#include <vector>
//using namespace std;
//
//class Person {
//	string name, vorname;
//	string ausweisNummer;
//public:
//	Person(string vorname, string name, string ausweisNummer) {
//		this->vorname = vorname;
//		this->name = name;
//		this->ausweisNummer = ausweisNummer;
//	}
//};
//
////Aufgabe 7
//class Zweirad {
//private:
//	const string hersteller;
//	const int zweiradNr;
//	Person* ausleiher;
//public:
//	void verleihenAn(Person* ref) {
//		this->ausleiher = ref;
//	}
//	void zurueckGebracht() {
//		this->ausleiher = nullptr;
//	}
//	bool verleihbar() {
//		return (this->ausleiher == nullptr);
//	}
//	Zweirad(string _hersteller, int _zweiradNr) : hersteller(_hersteller), zweiradNr(_zweiradNr), ausleiher(nullptr) {
//
//	}
//
//	string tostring() {
//		stringstream str;
//		str << hersteller << ": " << zweiradNr;
//		return str.str();
//	}
//};
//
//class Fahrrad : public Zweirad {
//private:
//	int groesse;
//public:
//	Fahrrad(string _hersteller, int _zweiradNr, int _groesse) : Zweirad(_hersteller, _zweiradNr), groesse(_groesse) {}
//
//	string tostring() {
//		stringstream str;
//		str << Zweirad::tostring() << " : " << groesse;
//		return str.str();
//	}
//};
//
////Aufgabe 8
//class Zweiradverleih {
//private:
//	vector<Zweirad> arr;
//	int gr, anz;
//
//public:
//	Zweiradverleih(int gr, int _anz = 0) : anz(_anz) {
//		arr.resize(gr);
//	}
//	void zweiradAufnehmen(Zweirad const& z) {
//		arr.push_back(z);
//	}
//};
//
//void main() {
//	Zweiradverleih a(10, 0);
//}
//

#include "Fahrzeug.hpp"
#include <iostream>

using namespace std;

int main()
{
	Motor m1("Benzin");
	Motor m2("Diesel", 10000);
	Fahrzeug f1(&m1);
	Fahrzeug f2(&m2);

	//m1 += 150;
	//std::cout << m1;
	//f1.fahren(100);
	
	f1.print();
	//f2.print();

	f1.tauscheMotor(m2);
	f1.print();

	f1.fahren(99);
	f1.print();
	f2.print();
	

	
	

	return 1;
}
