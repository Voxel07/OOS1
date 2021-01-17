// Person.hpp
#pragma once

#include <string>
#include <iostream>

// Klasse für alle Personen, die Medien ausleihen können
class Person {
	// Name der Person
	std::string name;
	// Dauer in Tagen, die die Person ein Medium ausleihen darf
	// wird von den abgelieteten Klassen festgelegt
	int ausleihdauer;
public:
	// Standardkonstruktor
	Person(std::string name, int dauer = 0);
	// den Namen zurückliefern
	std::string getName() const;
	// die Ausliehdauer zurückliefern
	int getAusleihdauer() const;
	// die Person auf der Konsole ausgeben
	void print() const;
};


