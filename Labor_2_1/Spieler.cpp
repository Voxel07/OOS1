#include "Spieler.hpp"

Spieler::Spieler(const MyString& _spieler)
	: name(_spieler)
{
}
Spieler::Spieler(const char _cArray[])
	: name(_cArray)
{
}
Position Spieler::getPos()
{
	return pos;
}
void Spieler::setPos(const Position& neuPos)
{
	pos = neuPos;
}
void Spieler::setRichtung(Richtung dir) 
{
	pos.r = dir;
}
int Spieler::getMuenzen()const 
{
	return muenzen;
}
void Spieler::plusMuenzen()
{
	muenzen ++;
}
//name.at(4) = 2;
Spieler& Spieler::schritt(Labyrinth& aktLab)
{
	pos.schritt(aktLab);
	return *this;
}

// Schrittrichtung automatisch wählen lassen
void Spieler::orientieren(Labyrinth & lab) {
	Position postmp = pos;
	// Eine von 4 Richtungen auswählen
	int rint = rand() % 4;
	postmp.r = Richtung(rint);
	while ((lab.getZeichenAnPos(postmp)) == MAUER) { 
	
		rint = rand() % 4;
		postmp.r = Richtung(rint);
	}
	pos.r = Richtung(rint);
}
