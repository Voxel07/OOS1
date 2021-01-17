#include "Fahrzeug.hpp"

Fahrzeug::Fahrzeug(std::string bezeichnung, double laenge, double breite, double hoehe, double TopS, int sitzPlaetze)
	:m_bezeichnung(bezeichnung),m_laenge(laenge),m_breite(breite),m_hoehe(hoehe),m_Hoechstgeschwindigkeit(TopS),m_sitzPlaetze(sitzPlaetze)
{}
std::string Fahrzeug::getBezeichnung() {
	return m_bezeichnung;
}

double Fahrzeug::getLaenge() {
	return m_laenge;
}
double Fahrzeug::getBreite() {
	return m_breite;
}
double Fahrzeug::getHoehe() {
	return m_hoehe;
}
double Fahrzeug::getHoechstG() {
	return m_Hoechstgeschwindigkeit;
}
int Fahrzeug::getSitzPlaetze() {
	return m_sitzPlaetze;
}
void Fahrzeug::setSitzPlaezte(int neuS) {
	m_sitzPlaetze = neuS;
}
void Fahrzeug::setBezeichnung(std::string neuBz) {
	m_bezeichnung = neuBz;
}
void Fahrzeug::setLaenge(double neuL) {
	m_laenge = neuL;
}
void Fahrzeug::setBreite(double neuB) {
	m_breite = neuB;
}
void Fahrzeug::setHoehe(double neuH) {
	m_hoehe = neuH;
}
void Fahrzeug::setHoechstG(double neuHG) {
	m_Hoechstgeschwindigkeit = neuHG;
}

void Fahrzeug::print() {
	std::cout << "Bezeichung: \t\t" << m_bezeichnung << std::endl;
	std::cout << "Abmasse: \t\t" << m_laenge << "l x " << m_breite << "b x " << m_hoehe << "h " << std::endl;
	std::cout << "Hoechstgeschwindigkeit: " << m_Hoechstgeschwindigkeit<<" kmh" << std::endl;
	std::cout << "Sitplätze: \t\t" << m_sitzPlaetze << std::endl;
	
}