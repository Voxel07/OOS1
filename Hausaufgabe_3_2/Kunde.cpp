#include"Kunde.hpp"


int Kunde::anzahl = 0;

//Ctor

Kunde::Kunde(const char* _name,const char *_ort, int _alter):name(_name),ort(_ort),id(anzahl+100){
	anzahl++;
	alter = new int(_alter);
	this->alter = alter;
}

Kunde::Kunde(const Kunde& org){ //deepcopie
	Kunde * neu = new Kunde(org.name, org.ort, *org.alter);
	neu->umsatz = org.umsatz;
	*this = *neu;
}

Kunde::~Kunde() {
	anzahl--;
	delete alter;
}
//Methoden

void Kunde::print() {
	std::cout << "Kunde " << name << " aus " << ort << "(ID = " << id << ", " << *alter << " Jahre) hatte " << transaktion <<" Transaktion(en) und " << umsatz << " Euro Umsatz" << std::endl;
}
void Kunde::kaufe(double u){
	umsatz += u;
	transaktion++;
}
int Kunde::getAnzahl(){
	return anzahl;
}