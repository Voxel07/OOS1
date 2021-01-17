#include "Labyrinth.hpp"
#include "Position.hpp"
#include <conio.h> 

//usings
using namespace std;

// Labyrinth als Textdatei speichern
void Labyrinth::exportDatei(char * dateiname) {
	ofstream datei(dateiname);
	if (!datei) {
		cerr << "Kann Datei nicht oeffnen" << endl;
	}
	for (int i = 0; i < labZeilen; i++) {
		//datei << lab.at(i).at(j);
		datei << lab[i];
	}
	datei.close();
}
// Labyrinth als Textdatei einlesen
void Labyrinth::importDatei(char * dateiname) {
	ifstream datei(dateiname);
	if (!datei) {
		cerr << "Kann Datei nicht oeffnen" << endl;
	}
	for (int i = 0; i < labZeilen; i++) {
		datei.getline(lab[i], labSpalten + 2);
		lab[i][labSpalten] = NL;
		lab[i][labSpalten + 1] = EOS;
	}
	datei.close();
}

void Labyrinth::initialisieren()
{
	for (int i = 0; i < labZeilen; i++)
	{
		for (int j = 0; j < labSpalten + 2; j++)
		{
			lab[i][j] = MAUER;

		}
		lab[i][11] = NL;
		lab[i][12] = EOS;
	}
	for (auto& zeile : lab) { 
		cout << zeile;
	}
}

void Labyrinth::drucken() {
	// console frei machen
	system("cls");
	// labyrinth ausgeben
	for (int i = 0; i < labZeilen; i++)
	{
		for (int j = 0; j < labSpalten + 2; j++)
		{
			cout << lab[i][j];
		}
	}
}

// hilfsfunktion max
int Labyrinth::max(int x, int y) {
	return (x <= y) ? y : x;
}
// hilfsfunktion min
int Labyrinth::min(int x, int y) {
	return (x <= y) ? x : y;
}
// durch herumlaufen werden wege im labyrinth erzeugt
// ascii-wert der tasten: oben 72, links 75, rechts 77, unten 80
void Labyrinth::erzeugen() 
{
	char c = 'x';
	int posx = labSpalten / 2;
	int posy = labZeilen / 2;
	lab[posy][posx] = ICH;
	drucken();
	while (c != 'q') {
		drucken();
		cout << "laufen mit pfeiltasten. beenden mit q." << endl;
		lab[posy][posx] = WEG;
		c = _getch();
		switch (int(c)) {
			// oben
		case 72: posy = max(1, posy - 1); break;
			// links
		case 75: posx = max(1, posx - 1); break;
			// rechts
		case 77: posx = min(labSpalten - 2, posx + 1); break;
			// unten
		case 80: posy = min(labZeilen - 2, posy + 1); break;
			// q = quit
		case 113: break;
		}
		lab[posy][posx] = ICH;
	}
}

void Labyrinth::legeMuenzen()
{
	for (size_t i = 0; i < labZeilen; i++)
	{
		for (size_t j = 0; j < labSpalten; j++)
		{
			if (lab[i][j] == WEG)
			{
				lab[i][j] = MUENZEN;
				setAnzMuenzen();
			}
		}
	}
}

void Labyrinth::zeichneChar(char c, Position pos) {
	lab[pos.posx][pos.posy] = c;
}
void Labyrinth::zeichneChar(char c, Position posalt, Position posneu) {
	lab[posalt.posx][posalt.posy] = WEG;
	zeichneChar(c, posneu);
}
bool Labyrinth::istMuenzeAnPos(Position pos) {
	
	if (getZeichenAnPos(pos) == MUENZEN)
	{
		return true;
	}
	return false;
}





char Labyrinth::getZeichenAnPos(Position _pos)
{
		return lab[_pos.posx][_pos.posy];
}

size_t Labyrinth::getZeilen() {
	return labZeilen;
}
size_t Labyrinth::getSpalten() {
	return labSpalten;
}
size_t Labyrinth::getAnzGeister() {
	return labAnzGeister;
}
size_t Labyrinth::getMuenzen() {
	return labAnzMuenze;
}
void Labyrinth::setAnzMuenzen() {
	labAnzMuenze++;
}

