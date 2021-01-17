#include "Motorbot.hpp"


Motorbot::Motorbot(std::string bezeichnung, double laenge, double breite, double hoehe, double TopS, int sitzPlaetze, double tiefgang, double segelF, double leistung)
	:Segelbot(bezeichnung, laenge, breite, hoehe, TopS, sitzPlaetze,tiefgang,segelF),m_Motorleistung(leistung)
{

}

void Motorbot::print()
{
	Segelbot::print();
	std::cout << "Motorleistung: \t\t" << m_Motorleistung << " kW" << std::endl;
}