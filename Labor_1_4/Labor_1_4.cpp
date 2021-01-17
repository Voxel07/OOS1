/*
Spiel Tsching, Tschang, Tschong
Regeln:
Es gibt zwei Spieler: der Programmierer und der Computer.
Beide Spieler waehlen gleichzeitig eines der drei Objekte
Stein, Schere und Papier. Beide können das gleiche Objekt wählen.
Der Spieler, der das mächtigere Objekt gewählt hat gewinnt.
SCHERE kann einen STEIN nicht zerschneiden, d.h. STEIN ist
mächtiger als SCHERE. PAPIER wickelt STEIN ein, d.h. PAPIER ist
mächtiger als STEIN. SCHERE zerschneidet PAPIER, d. h. SCHERE
ist maechtiger als PAPIER
*/

#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <random>

using namespace std;
// Aufzählungstyp für Stein etc.
enum objectType { STEIN, SCHERE, PAPIER };
// Struktur für einen Spieler bestehend aus Name und Wahl
// des Spielers
struct player {
	char * name;
	objectType choice;
};
// Variable für den Namen des Spielers
char name[15];
// Name des Spielers eingeben
char * enterName(char str[])
{
	cout << "Bitte geben sie ihren Spielernamen ein: ";
	cin >> str;
	return str;
}
// Den Computer zufällig waehlen lassen.
// Nutzen Sie srand(...) und rand().
objectType randomChoice()
{
	random_device rd;
	mt19937 generator(rd());
	uniform_int_distribution<> verteilung(0, 2);
	int zahl = verteilung(generator);
	objectType ssp = (objectType)zahl;
	return ssp;
}
// Die Wahl von STEIN etc. als String zurückgeben lassen
//char * object2str(objectType o)
//{
//}
// Einen Text mit dem Namen des Spielers und seiner Wahl ausgeben
void showPlayer(player p)
{
	cout << "Spielername: " << p.name << "\tAttacke: " << (objectType)p.choice << endl;
}
// Die Wahl des Spielers abfragen
objectType enterChoice()
{
	int zahl;
	cout << "wählen sie zwischen Stein=1 Schere=2 Papier=3:";
	cin >> zahl;
	objectType choice = objectType(zahl - 1);
	switch (choice) {
	case STEIN: return STEIN; break;
	case SCHERE: return SCHERE; break;
	case PAPIER: return PAPIER; break;
	default: cout << "Nicht deffinierter Wert" << endl; enterChoice(); break;
	}
}
 //Die Wahl bestimmen, die gewonnen hat
objectType winningObject(objectType obj1, objectType obj2)
{
	if (obj1 == STEIN && obj2 == PAPIER) return obj2;
	if (obj1 == STEIN && obj2 == SCHERE) return obj2;
	if (obj1 == SCHERE && obj2 == PAPIER) return obj2;
	if (obj1 == SCHERE && obj2 == STEIN) return obj2;
	if (obj1 == PAPIER && obj2 == PAPIER) return obj2;
	if (obj1 == PAPIER && obj2 == STEIN) return obj2;


}
void showWinner(player p1, player p2)
{
	if (p1.choice == p2.choice)	cout << "Unentschieden";
	else {
		if (p1.choice == STEIN && p2.choice == PAPIER) cout << "Gewonnen hat Spieler " << p2.name;
		if (p1.choice == SCHERE && p2.choice == STEIN) cout << "Gewonnen hat Spieler " << p2.name;
		if (p1.choice == PAPIER && p2.choice == SCHERE) cout << "Gewonnen hat Spieler " << p2.name;
		else cout << "Gewonnen hat Spieler " << p1.name;
	}
}
int main()
{
	//char name1[] = "Computer";
	player player1, player2;
	//player1.name = name1;
	player1.name = (char *)"Computer";
	player1.choice = randomChoice();
	cout << "Der Computer hat sein Wahl getroffen." << endl;
	player2.name = enterName(name);
	player2.choice = enterChoice();
	showPlayer(player1);
	showPlayer(player2);
	showWinner(player1, player2);
}
