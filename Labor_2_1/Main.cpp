// Main für Hausaufgabe 2
#include "Labyrinth.hpp"
#include "Position.hpp"
#include "MyString.hpp"
#include "Spieler.hpp"
#include "PacMan.hpp"

const bool kErzeugen = false;

int main() {
	Labyrinth lab;
	if (kErzeugen) {
		lab.erzeugen();
		lab.exportDatei("lab.txt");
	}
	else {
		lab.importDatei("lab.txt");
		lab.legeMuenzen();
		//Spieler b(MyString("Hello"));
		Spieler s("Demo");
		Spieler g[kAnzGeister] = { Spieler("Geist 1"),
								   Spieler("Geist 2"),
								   Spieler("Geist 3") };
		PacMan pm(lab, s, g, kAnzGeister);
		pm.spielen();
	}
}



