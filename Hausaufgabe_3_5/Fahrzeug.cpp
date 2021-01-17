#include "Fahrzeug.hpp"

int Fahrzeug::id = 10000;

Fahrzeug::Fahrzeug(MyString kz):m_vin(id)
{
	id++;
	m_kz = kz.c_str();
}

//Methoden
void Fahrzeug::fahren (double km) {
	m_km += round(10*km)/10;

}

//Operatoren
std::ostream &operator<<(std::ostream& stream, Fahrzeug& a)
{
	stream <<"Kz = "<< a.m_kz <<" VIN = "<<a.m_vin <<" km = "<<a.m_km<<std::endl;
	return stream;
}