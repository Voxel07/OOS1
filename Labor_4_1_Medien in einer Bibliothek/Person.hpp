// Person.hpp
#pragma once

#include <string>
#include <iostream>

// Klasse f�r alle Personen, die Medien ausleihen k�nnen
class Person {
	// Name der Person
	std::string name;
	// Dauer in Tagen, die die Person ein Medium ausleihen darf
	// wird von den abgelieteten Klassen festgelegt
	int ausleihdauer;
public:
	// Standardkonstruktor
	Person(std::string name, int dauer = 0);
	// den Namen zur�ckliefern
	std::string getName() const;
	// die Ausliehdauer zur�ckliefern
	int getAusleihdauer() const;
	// die Person auf der Konsole ausgeben
	void print() const;
};


