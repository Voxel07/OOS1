#include "DrawingObject.hpp"

extern bool debugConstructor;

DrawingObject::DrawingObject() {
	if (debugConstructor) { std::cout << "Konstruktor der Klasse DrawingObject, Objekt:" << ObjectCounter::getId() << std::endl; }
}
DrawingObject::~DrawingObject() {
	if (debugConstructor) { std::cout << "Destruktor der Klasse DrawingObject, Objekt:" << ObjectCounter::getId() << std::endl; }
}

int DrawingObject::getNumber() {
	return ObjectCounter::getNumber();
}