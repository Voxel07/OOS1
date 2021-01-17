#include "Auto.hpp"

Auto::Auto(std::string bezeichnung, double laenge, double breite, double hoehe, double TopS, int sitzPlaetze, int leistung, int anzReifen)
	:Fahrzeug(bezeichnung, laenge, breite, hoehe, TopS, sitzPlaetze), m_Motorleistung(leistung), m_anzReifen(anzReifen)
{}

int Auto::getMotorleistung() {
	return m_Motorleistung;
}
int Auto::getAnzReifen() {
	return m_anzReifen;
}
void Auto::setMotorleistung(int neuM) {
	m_Motorleistung = neuM;
}
void Auto::setAnzReifen(int neuR) {
	m_anzReifen = neuR;
}

void Auto::print() {
	Fahrzeug::print();
	std::cout << "Motorleistung: \t\t" << m_Motorleistung<<" kW" << std::endl;
	std::cout << "Anzahl Reifen: \t\t" << m_anzReifen << std::endl;
}