#pragma once
#include "Motor.hpp"


class Fahrzeug{
private:

	Motor* m_motor = nullptr;


public:
	//a
	Fahrzeug();
	//b
	Fahrzeug(Motor * quelle);
	//c
	Fahrzeug(Fahrzeug* quelle);
	//d
	void fahren(int km);
	//e
	void /*Motor*/ tauscheMotor(Motor  & quelle);
	//zusatz
	void print();

};