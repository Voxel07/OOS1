#pragma once
#include "Auto.hpp"
#include "Segelbot.hpp"

class Schwimmwagen :public Auto {
private:
	double m_tiefgang;

public:
	//Ctor
	Schwimmwagen(std::string bezeichnung, double laenge, double breite, double hoehe, double TopS, int sitzPlaetze, int leistung, int anzReifen,double tiefgang);

	//Methoden
	void print();
};