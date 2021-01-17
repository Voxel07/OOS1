// Bibliothek.hpp
#pragma once

#include "Buch.hpp"
#include "DVD.hpp"
#include "Person.hpp"
#include "Datum.hpp"




class Bibliothek {
	
	int anz;
	const int maxAnz;
	Medium ** medien;
public:

	// Standardkonstruktor
	Bibliothek(int maxAnz = 1000);
	// Destruktor
	~Bibliothek();

	
	//void mediumBeschaffen(Buch &);
	//void mediumBeschaffen(DVD &);
	void mediumBeschaffen(Medium&);

	// die im Titel das Suchwort enthalten
	void mediumSuchen(std::string suchwort);
	// im Medium mit der Nummer nr, die Person p als Ausleiher
	// eintragen mit von-Datum d und bis-Datum d+p.ausleihdauer
	void mediumAusleihen(int nr, Person & p, Datum d);
	// alle Medien in der Konsole ausgeben
	void print() const;
};
