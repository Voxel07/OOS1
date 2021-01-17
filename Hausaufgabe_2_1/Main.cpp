// Main für Hausaufgabe 2
#include "Labyrinth.hpp"
#include "Position.hpp"

int main() 
{
	Labyrinth lab(11,11,100,25);

	lab.drucken();
	lab.erzeugen();
	lab.drucken();
	
	char Dateiname[] =  "lab.txt" ;//Pfusch

	lab.exportDatei(Dateiname);
	
	Labyrinth lab2;
	lab2.importDatei(Dateiname);
	lab2.drucken();
	lab2.legeMuenzen();
	lab2.drucken();
	char Dateiname2[] = "la2.txt";
	lab2.exportDatei(Dateiname2);
}




