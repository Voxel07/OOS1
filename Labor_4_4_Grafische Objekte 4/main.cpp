#include <iostream>
#include "Circle.hpp"
#include "Polygonline.hpp"
#include "DrawingObject.hpp"
#include "ObjectCounter.hpp"
#include "DrawingObject.hpp"
#include "OneDimObject.hpp"
using namespace std;

 bool debugConstructor = true;


// Hauptprogramm
int main(void)
{
	

	cout << "Anzahl der Objekte: " << DrawingObject::getNumber();
	cout << endl;
	Point p1;//Objekt 1
	cout << "p1 ObjectId: " << p1.getId() << " " << p1 << endl;
	Point p2(1,1); //Objekt 2 
	cout << "p2 ObjectId: " << p2.getId() << " " << p2 << endl;
	Circle c1(p1,3); //Objekt 3 + Objekt 4
	cout << "c1 ObjectId: " << c1.getId() << " " << c1 << endl;
	Polygonline l1(p1);//Objekt 5 + Objekt 6 + Objekt 7 (Point wird zu Plg element) Soll er danach gelöscht werden ?
	cout << "l1 ObjectId: " << l1.getId() << " " << l1 << endl;
	cout << "Anzahl der Objekte: " << c1.getNumber() << endl;
	
}
