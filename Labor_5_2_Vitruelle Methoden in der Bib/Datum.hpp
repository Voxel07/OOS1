// Datum.hpp
#pragma once
#include <string>
#include <sstream>
#include <iostream>

// Klasse Datum, �hnlich zu der in der �bung der Vorlesung
class Datum {
	// Elemente eines Datums
	int tag, monat, jahr;

public:
	// Standardkonstruktor
	Datum(int = 0, int = 0, int = 0);
	// Konvertierkonstruktor f�r String
	Datum(const std::string &);
	// Konvertierkonstruktor f�r C-String
	Datum(const char *);
	// Operator + addiert eine Anzahl von Tagen zum Datum hinzu
	Datum operator+(int tage);
	// Ausgabeoperator <<, Ausgabe in dem Format tt.mm.jjjj
	friend std::ostream & operator<<(std::ostream &, const Datum &);
};


