#include "Schwimmwagen.hpp"

Schwimmwagen::Schwimmwagen(std::string bezeichnung, double laenge, double breite, double hoehe, double TopS, int sitzPlaetze, int leistung, int anzReifen, double tiefgang)
	:Auto(bezeichnung, laenge, breite, hoehe, TopS, sitzPlaetze, leistung, anzReifen),m_tiefgang(tiefgang)
{
	
}

void Schwimmwagen::print() 
{
	Auto::print();
	std::cout << "Tiefgang: \t\t" << m_tiefgang<<"m"<< std::endl;

}