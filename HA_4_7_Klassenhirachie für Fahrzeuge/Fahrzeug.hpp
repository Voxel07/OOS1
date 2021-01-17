#pragma once
#include <string>
#include <iostream>
class Fahrzeug {
private:

	double m_laenge, m_breite, m_hoehe, m_Hoechstgeschwindigkeit;
	std::string m_bezeichnung;
	int m_sitzPlaetze;


public:
	//Ctor
	Fahrzeug(std::string bezeichnung, double laenge,double breite,double hoehe,double TopS,int sitzPlaetze);

	//Methoden
	std::string getBezeichnung();
	double getLaenge();
	double getBreite();
	double getHoehe();
	double getHoechstG();
	int getSitzPlaetze();
	void setSitzPlaezte(int neuS);
	void setBezeichnung(std::string neuBz);
	void setLaenge(double neuL);
	void setBreite(double neuB);
	void setHoehe(double neuH);
	void setHoechstG(double neuHG);

	void print();


};