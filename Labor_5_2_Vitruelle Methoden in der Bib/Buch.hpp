// Buch.hpp
#pragma once

#include "Medium.hpp"

// Klasse für die Bücher als Spezialisierung von Medium
class Buch :public Medium{
	// Autor(en) des Buches
	std::string autor;
public:
	// Standardkonstruktor
	Buch(std::string t = "", std::string a = "", std::string v = "", int jahr = 0);
	// das Buch auf der Konsole ausgeben
	void print() const;
	Buch* clone()const override;
};
