#pragma once
#include "Position.hpp"
#include "MyString.hpp"
#include "Labyrinth.hpp"
#include "Spieler.hpp"

class PacMan {
	Labyrinth * lab;          // Labyrinth f�r das Spiel
	Spieler * s;              // Spieler, der das Spiel spielt
	Spieler * g[kAnzGeister]; // Geister, die den Spieler jagen
	int schritte;             // Anzahl der Spielschritte
	int muenzen;              // Anzahl der M�nzen im Labyrinth
public:
	// Konstruktor
	PacMan(Labyrinth & l, Spieler & sp, Spieler gArr[],
		int anzGeister);
	// Einen Schritt im Spiel ausf�hren
	void schritt();
	// Spiel spielen
	void spielen();
};

