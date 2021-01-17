#pragma once
#include "Auto.hpp"

class Transporter :public Auto {
private:
	double m_ladeflaeche;

public:
	Transporter(std::string bezeichnung, double laenge, double breite, double hoehe, double TopS, int sitzPlaetze, int leistung, int anzReifen, double ladeF);


	void print();
};
