#include <iostream> // Für cin / cout
#include <clocale> // damit äöü richtig dargestellt werden
using namespace std; // spart std:: vor den ausgaben

void elementeSubtrahieren(int array[], int element1, int element2)
{
	int differenz = 0;
	differenz = array[element1] - array[element2];
	cout << "\nDie Differenz zwischen Element: " << element1<<"("<<array[element1]<<")" << " und " << element2 << "(" << array[element2] << ")" << " beträgt: "<<differenz<< endl;
}
int main(void)
{
	// Lokalitätseinstellungen der installierten Umgebung aktivieren
	setlocale(LC_ALL, "");
	cout << "Locale ist: " << setlocale(LC_ALL, NULL) << endl;

	//Variablen

	int array [5];
	cout << "Geben Sie 5 Ganzzahlen z.b.: 0,1,2 ein "<<endl;

	for (int i = 0; i < 5; i++)
	{
		cin >> array[i];
	}

	cout << "\nEingegebene Werte "<<endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Pos: " << i << "Wert: " << array[i] << endl;
	}

	cout << "\nElemente um 1 erhöhen" <<endl;
	
	for (int i = 0; i < 5; i++)
	{
		array[i] += 1;

		cout << "Pos: " << i << "\tWert: " << array[i] << endl;
	}

	int summe = 0;

	for (int i = 0; i <5;i++)
	{
		summe += array[i];
	}

	cout << "\nMittelwert der Arrayelemente:\t" << summe / 5<<endl;

	int eingabe1=0, eingabe2=0;

	cout << "Welche Elemente möchten sie Subtrahieren ?"<<endl;
	cin >> eingabe1;
	cin >> eingabe2;
	if (eingabe1 <= 4 && eingabe1 >= 0 && eingabe2 <= 4 && eingabe2 >= 0)
	{
		elementeSubtrahieren(array, eingabe1, eingabe2);
	}
	else cout << "Auswahl außerhalb des Arrays";

	return 0;

}

