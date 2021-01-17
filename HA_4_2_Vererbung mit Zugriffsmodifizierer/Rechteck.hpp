#pragma once
#include "Parallelogramm.hpp"
class Rechteck :protected Parallelogramm 
{

public:
	//Ctor
	Rechteck(double _a, double _b, double _Winkel = 90);
	//Methoden
	void print();
	void setA(double newA);
	double getWinkel();
	void setWinkel(double newW);

};