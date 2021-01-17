#pragma once
#include "MyString.hpp"
//#include <math.h>
#include <cmath>
class Fahrzeug
{
private:
	MyString m_kz;
	static int id;
	int m_vin;
	double m_km;


public:
	Fahrzeug(MyString kz);

	//Methoden
	void fahren(double km);

	//Operatoren
	friend std::ostream &operator << (std::ostream& stream, Fahrzeug& a);
	
	
};