#pragma once
#include "Segelbot.hpp"
Segelbot::Segelbot(std::string bezeichnung, double laenge, double breite, double hoehe, double TopS, int sitzPlaetze, double tiefgang, double segelF)
	:Fahrzeug(bezeichnung, laenge,breite, hoehe,TopS, sitzPlaetze),m_teifgang(tiefgang),m_segelflaeche(segelF)
{

}

double Segelbot::getTiefgang() {
	return m_teifgang;
}
double Segelbot::getSegelFlaeche() {
	return m_segelflaeche;
}
void Segelbot::setTiefgange(double neuT) {
	m_teifgang = neuT;
}
void Segelbot::setSegelFlaeche(double neuSF) {
	m_segelflaeche = neuSF;
}

void Segelbot::print() {
	Fahrzeug::print();
	std::cout << "Tiefgang: \t\t" << m_teifgang <<" m"<< std::endl;
	std::cout << "Segelfleche: \t\t" << m_segelflaeche <<" m²"<< std::endl;
}
