#include "Fahrzeug.hpp"
#include <iostream>


//a
Fahrzeug::Fahrzeug(){
	m_motor = new Motor("EMotor");
}
//b
Fahrzeug::Fahrzeug(Motor * quelle) {
	m_motor = quelle;
	//m_motor = new Motor(quelle); 
}
//c
Fahrzeug::Fahrzeug(Fahrzeug* quelle) {
	m_motor = quelle->m_motor;
//	memcpy(m_motor, quelle.m_motor, sizeof(*quelle.m_motor));
	quelle->m_motor = nullptr;
}
//d
void Fahrzeug::fahren(int km) {
	if (m_motor != nullptr)
	{
		*m_motor += km;
	}
	else
		throw("Kein Motor vorhanden.");
	
}
//e
void /*Motor*/ Fahrzeug::tauscheMotor(Motor & quelle) {
	//Motor tmp(*this->m_motor);
	this->m_motor = &quelle;
	//memcpy(m_motor, m_motor, sizeof(quelle));
	
	//return tmp;
}
void Fahrzeug::print() {
	std::cout << *m_motor;

}

