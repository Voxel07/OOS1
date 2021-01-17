// Medium.hpp
#pragma once

#include <string>
#include <iostream>
#include "Datum.hpp"
#include "Person.hpp"

// Klasse f�r die Medien, die in der Bibliothek ausgeliehen werden 
// k�nnen
class Medium {
	// Titel des Mediums
	const std::string titel;
	// Verlag, der das Medium herausgibt
	const std::string verlag;
	// Jahr, in dem das Medium ver�ffentlicht wurde
	const int jahr;
	// Typ des Mediums (z.B. Buch, DVD, ...)
	// wird von den abgeleiteten Klassen festgelegt
	const std::string typ;
	// ausgeliehen von
	Person * ausleiher;
	// ausgeliehen am 
	Datum von;
	// ausgeliehen bis
	Datum bis;

public:
	// Konstruktor
	Medium(std::string t = "", std::string v = "", int j = 0,
		std::string typ = "undef");
	// Titel zur�ckliefern
	std::string getTitel() const;
	// Typ zur�ckliefern
	std::string getTyp() const;
	// Ausleiher zur�ckliefern
	Person * getAusleiher() const;
	// das Mediuem "ausleihen", d.h. Person p, von und bis eintragen
	void ausleihen(Person & p, Datum von, Datum bis);
	// Medium in der Konsole ausgeben
	void print() const;

};
