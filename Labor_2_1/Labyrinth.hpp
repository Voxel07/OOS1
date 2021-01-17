#ifndef LABYRINTH_HPP
#define LABYRINTH_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Position.hpp"

/* Größe muss zur Compielzeit festgelgt sein.
array<string,4> namen {{"Name1","Name2","Name3","Name4"}};
*/
//#include <vector>
/* Kann dynamisch geändert werden

1Dim
vector<int> zeile {100,200,300};
zeile[0] = [100][200][300]

2Dim
vector<vector<int,3>2> feld
feld[0] = [1][2][3]
feld[1]	= [4][5][6]

vector<vector<int>> feld {	{1,2,3},
							{4,5,6} };
*/

//Public Variablen
const size_t kZeilen = 11;
const size_t kSpalten = 11;
const size_t kAnzGeister = 3;

enum symbole {
	MAUER = '#', WEG = ' ', MUENZEN = ':', NL = '\n',
	EOS = '\0', ICH = 'x', GEIST = 'g'
};

class Labyrinth

{
private:
	//a)
	size_t labZeilen;
	size_t labSpalten;
	//b)
	size_t labAnzGeister;

	char aktZeichen;
	size_t labAnzMuenze; 
	char lab[kZeilen][kSpalten + 2];

public:
	
	//constructor 
	Labyrinth(int _labZeilen, int _labSpalten, int _labGeister, int _muenzen)
	{
		labZeilen = _labZeilen;
		labSpalten = _labSpalten;
		labAnzGeister = _labGeister;
		labAnzMuenze = _muenzen;
		initialisieren();
	}
	//g) Standartwerte setzen. In diesem Fall die aus den Konstanten.
	Labyrinth()
	{
		labZeilen = kZeilen;
		labSpalten = kSpalten;
		labAnzGeister = kAnzGeister;
		labAnzMuenze = 0;
		initialisieren();
	}

public:
	void exportDatei(const char * dateiname);
	void importDatei(const char * dateiname);
	void initialisieren();
	void drucken();
	void legeMuenzen();
	void erzeugen();

	//h)
	size_t getZeilen();
	size_t getSpalten();
	size_t getAnzGeister();
	size_t getMuenzen();
	void setAnzMuenzen();

	//k)
	char getZeichenAnPos(Position _pos); //verwenden von const & (referenz)
	void zeichneChar(char c, Position pos);
	void zeichneChar(char c, Position posalt, Position posneu);
	bool istMuenzeAnPos(Position pos);

};
#endif