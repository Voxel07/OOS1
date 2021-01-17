#include "Fahrzeug.hpp"

int Fahrzeug::id = 10000;
double Fahrzeug::summeKm = 0;

//ctor
Fahrzeug::Fahrzeug(MyString kz):m_vin(id)
{
	id++;
	m_kz = kz.c_str();
}
//dtor
Fahrzeug::~Fahrzeug() {
	summeKm -= this->m_km;
}

//Methoden
void Fahrzeug::fahren (double km) {
	m_km += round(10*km)/10;
	summeKm += round(10 * km) / 10;
}
double Fahrzeug::getSummeKm(){
	return round(100*summeKm)/100;
}

//Operatoren
std::ostream &operator<<(std::ostream& stream, Fahrzeug& a)
{
	stream <<"Kz = "<< a.m_kz <<" VIN = "<<a.m_vin <<" km = "<<a.m_km<<std::endl;
	return stream;
}