#pragma once
#include "MyString.hpp"
//#include <math.h>
#include <cmath>
class Fahrzeug
{

private:
	//static
	static int id;
	static double summeKm;
	//Variablen
	MyString m_kz;
	int m_vin;
	double m_km;
	unsigned int i;

public:
	Fahrzeug(MyString kz);
	~Fahrzeug();
	//Methoden
	void fahren(double km);
	double getSummeKm();

	//Operatoren
	friend std::ostream &operator << (std::ostream& stream, Fahrzeug& a);
	
	
};