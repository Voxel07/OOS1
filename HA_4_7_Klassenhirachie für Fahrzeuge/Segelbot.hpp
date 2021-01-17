#pragma once
#include "Fahrzeug.hpp"
class Segelbot :public Fahrzeug {

private:

	double m_teifgang, m_segelflaeche;


public:
	//Ctor
	Segelbot(std::string bezeichnung, double laenge, double breite, double hoehe, double TopS, int sitzPlaetze, double tiefgang, double segelF);

	//Methoden
	double getTiefgang();
	double getSegelFlaeche();
	void setTiefgange(double neuT);
	void setSegelFlaeche(double neuSF);
	
	void print();

};