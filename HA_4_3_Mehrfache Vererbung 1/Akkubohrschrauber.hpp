#pragma once
#include "Akkubohrer.hpp"
#include "Akkuschrauber.hpp"

class Akkubohrschrauber :public Akkuschrauber, public Akkubohrer{

private:

public:
	//Ctor
	Akkubohrschrauber(int _wattS, int _wattB);

	//Methoden
	void print();
};