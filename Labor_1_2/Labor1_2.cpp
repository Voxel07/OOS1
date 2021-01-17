#include <iostream>
#include <clocale>
using namespace std;

int main(void)
{
	int anzahl = 0;
	setlocale(LC_ALL, "");
	cout << "Wie viele Zahlen möchten sie Einlesen"<<endl;
	cin >> anzahl; 

	int *array = new int [anzahl];

	for (int i = 0; i < anzahl; i++)
	{
		cin >> array[i];
	}

	for (int i = 0; i < anzahl; i++)
	{
		cout <<"Pos:"<< i <<"wert:"<< array[i]<<endl;
	}

	int durchschnitt = 0;
	int summe = 0;
	for (int i = 0; i < anzahl;i++)
	{
		summe += array[i];

		durchschnitt = summe / anzahl;
		
	}
	cout << "Der Durschnitt ist" << durchschnitt << endl;
	//cout << "Die Summe ist" << summe << endl;

	return 0;
}