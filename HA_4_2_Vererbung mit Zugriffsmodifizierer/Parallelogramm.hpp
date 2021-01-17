#pragma once
#include <iostream>
class Parallelogramm {

private:
	double a;
	double b;
	double winkel;

public:
	//Ctor
	Parallelogramm(double _a, double _b, double _winkel);

	//Methoden
	void setA(double newA);
	double getA();
	void setB(double newB);
	double getB();
	void setWinkel(double newW);
	double getWinkel();
	void print();
};