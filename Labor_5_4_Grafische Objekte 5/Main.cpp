#include <iostream>
#include "DrawingObject.hpp"
#include "Rectangle.hpp"
#include "Polygonline.hpp"
#include "Circle.hpp"
#include "MyException.hpp"
#include <clocale>
using namespace std;

bool debugConstructor = false;
int ObjectCounter::id_count = 1;
int ObjectCounter::number = 0;
int ObjectCounter::maxId = 1;


int main()
{
		/*int a = 1;
	double b = 2.2;
	char c = 'c';
	cout << "Eingabe:";
	cin >> b;
	
	std::cout << typeid(a).name() << std::endl;
	std::cout << typeid(b).name() << std::endl;
	std::cout << typeid(c).name() << std::endl;
	
	if (typeid(a) == typeid(int)) { std::cout << "geht" << std::endl; }*/
	


	setlocale(LC_ALL, "");
	/*Point p1(1,1);
	Point p2(2,2);
	Rectangle r1(p1,p2);
	Rectangle r2("[(1.4, 1.45), (2.12, 2.4)]");
	r1.print(true);
	cout << r1<<endl;
	r2.print(true);
	cout << r2 << endl;*/

	DrawingObject* objects[20];
	int anzahl = 0;  
	cout << "Wieviele Objekte wollen Sie einlesen?" << endl;
	cout << "Anzahl: ";
	cin >> anzahl;
	cout << "Syntax übersicht :" << endl << "Point:\t\t (x,y) " <<endl<< "Circle:\t\t <(x|y),r> " <<endl<< "Rectangle:\t [(x1,y1), (x2,y2)] " << endl;
	cout << "Bitte Objekte eingeben: " << endl;
	// Objekte einlesen
		for (int i = 0; i < anzahl; i++)
		{
			cout << endl << "Objekt" << i + 1 << ": ";
			// einzelnes Objekt einlesen
			string eingabe;
			cin >> eingabe;
			switch (eingabe[0])
			{
				case '(':
					try { objects[i] = new Point(eingabe); }
					catch (MyException &fehler)	{ fehler.print(); i--;}					
						break;				
				case '<':
					try { objects[i] = new Circle(eingabe); }
					catch (MyException& fehler) { fehler.print(); i--; }
					break;		
				case'|':
					try { objects[i] = new Polygonline(eingabe); }
					catch (MyException& fehler) { fehler.print(); i--; }
					break;	
				case'[':
					try { objects[i] = new Rectangle(eingabe); }
					catch (MyException& fehler) { fehler.print(); i--; }
					break;
				default: cout << "Keine gültige Eingabe" << endl; i--;
			}
		}
	// Objekte ausgeben
	for (int i = 0; i < anzahl; i++)
	{
		objects[i]->print(true);
	}
	return 0;
}