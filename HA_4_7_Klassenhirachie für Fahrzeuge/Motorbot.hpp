#pragma once
#include "Segelbot.hpp"

class Motorbot :public Segelbot {

private:
	double m_Motorleistung;

public:
	//Ctor
	Motorbot(std::string bezeichnung, double laenge, double breite, double hoehe, double TopS, int sitzPlaetze, double tiefgang, double segelF, double leistung);


	void print();

};
