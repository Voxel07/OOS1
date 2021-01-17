#ifndef Spieler_HPP
#define Spieler_HPP

#include "MyString.hpp"
#include "Position.hpp"
#include "Labyrinth.hpp"


class Spieler
{
private:
	//a)
	MyString name;
	//b)
	Position pos;
	//c)
	std::size_t muenzen = 0; //Punktzahl


public:
//Ctor
	//d)
	Spieler(const MyString& _spieler);
	Spieler(const char _cArray[]);

//Methoden
	//e)
	Position getPos();
	void setPos(const Position& neuPos);
	//f)
	void setRichtung(Richtung dir);
	//g)
	int getMuenzen()const;
	//h)
	void plusMuenzen();
	//i)-->funktioniert noch nicht 
	Spieler&schritt(Labyrinth& aktLab);
	//j)
	// Schrittrichtung automatisch wählen lassen
	void orientieren(Labyrinth & lab);
};

#endif