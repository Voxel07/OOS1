//Alle Variablen
/*
Länge
Breite
Höhe
Motorleistung
Höchstgeschwindigkeit
Tiefgang
Segelfläche
Bezeichnung
*/
#pragma once
#include "Fahrzeug.hpp"
#include "Auto.hpp"
#include "Segelbot.hpp"
#include "Schwimmwagen.hpp"
#include "Motorbot.hpp"
#include "Transporter.hpp"

#include <clocale>

int main()
{
	setlocale(LC_ALL, "");

	Fahrzeug f1("Fahrzeug", 100.5, 12.6, 5.3, 500, 4);
	f1.print();
	
	std::cout << "--------------------------------------------------" << std::endl;

	Auto a1("Maybach Excelero", 6.3, 4.2, 3.3, 338.4, 2, 459, 4);
	a1.print();

	std::cout << "--------------------------------------------------" << std::endl;

	Segelbot s1("MS Gutrun", 150, 45, 35, 14, 65, 25, 75);
	s1.print();
	
	std::cout << "--------------------------------------------------" << std::endl;

	Schwimmwagen sw1("VW Typ 166", 4, 2.5, 1.5, 45, 3, 85, 4, 1.5);
	sw1.print();

	std::cout << "--------------------------------------------------" << std::endl;

	Motorbot m1("TUTUBRUMBRUM", 150.4, 45.3, 28.9, 25, 654, 15, 14, 864.35);
	m1.print();

	std::cout << "--------------------------------------------------" << std::endl;

	Transporter t1("Elefant27", 12.3, 5, 4, 95, 3, 279, 6, 150.842);
	t1.print();

	return 1;
}