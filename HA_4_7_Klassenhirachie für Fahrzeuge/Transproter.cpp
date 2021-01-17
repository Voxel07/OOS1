#include "Transporter.hpp"

Transporter::Transporter(std::string bezeichnung, double laenge, double breite, double hoehe, double TopS, int sitzPlaetze, int leistung, int anzReifen, double ladeF) 
	:Auto(bezeichnung, laenge, breite, hoehe, TopS, sitzPlaetze, leistung, anzReifen),m_ladeflaeche(ladeF)
{

}

void Transporter::print() {
	Auto::print();
	std::cout << "Ladefläche: \t\t" << m_ladeflaeche << " m²" << std::endl;
}