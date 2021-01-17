#pragma once

#include "Fahrzeug.hpp"
class Auto : public Fahrzeug {
private:

	int m_Motorleistung, m_anzReifen;

public:
	//Ctor
	Auto(std::string bezeichnung, double laenge, double breite, double hoehe, double TopS, int sitzPlaetze, int leistung ,int anzReifen);

	//Methoden
	int getMotorleistung();
	int getAnzReifen();
	void setMotorleistung(int neuM);
	void setAnzReifen(int neuR);

	void print();



};