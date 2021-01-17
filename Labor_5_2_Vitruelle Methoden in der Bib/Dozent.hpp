// Dozent.hpp
#pragma once

#include "Person.hpp"

// Klasse Dozent als Spezialisierung von Person
class Dozent:public Person {
	// Prüfernummer des Dozenten
	int prfrNr;
public:
	// Standardkosntruktor
	Dozent(std::string name, int prfrNr);
	// Dozenten auf der Konsole ausgeben
	void print() const;
};
