#pragma once
#include <iostream>

class Elektrogeraete {
private:

	int watt;

public:
	//Ctor
	Elektrogeraete(int _watt); 
	//Methoden

	void setWatt(double newW);
	int getWatt();
	void print();
};