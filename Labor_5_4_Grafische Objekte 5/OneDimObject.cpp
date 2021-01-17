#include "OneDimObject.hpp"

extern bool debugConstructor;

OneDimObject::OneDimObject() {
	//if (debugConstructor) { std::cout << "Konstruktor der Klasse OneDimObject, Objekt:" << ObjectCounter::getId() << std::endl; }
}
OneDimObject::~OneDimObject() {
	//if (debugConstructor) { std::cout << "Destruktor der Klasse OneDimObject, Objekt:" << ObjectCounter::getId() << std::endl; }
}