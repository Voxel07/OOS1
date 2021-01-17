// Medium.hpp
#pragma once

#include <string>
#include <iostream>
#include "Datum.hpp"
#include "Person.hpp"

// Klasse für die Medien, die in der Bibliothek ausgeliehen werden 
// können
class Medium {
	const std::string titel;
	const std::string verlag;
	const int jahr;
	
	//const std::string typ;
	
	Person * ausleiher;
	Datum von;
	Datum bis;

public:
	// Konstruktor
	Medium(std::string t = "", std::string v = "", int j = 0);
	
	//Methoden
	std::string getTitel() const;
	//std::string getTyp() const;

	Person * getAusleiher() const;
	void ausleihen(Person & p, Datum von, Datum bis);
	virtual void print() const;
	virtual Medium* clone() const = 0;

};
