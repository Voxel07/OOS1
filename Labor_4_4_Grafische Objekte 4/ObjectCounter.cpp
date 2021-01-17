#include"ObjectCounter.hpp"

extern bool debugConstructor;

int ObjectCounter::id_count = 1;
int ObjectCounter::number = 0;
int ObjectCounter::maxId = 1;


ObjectCounter::ObjectCounter() :id(id_count)
{
	//if (debugConstructor) { std::cout << "Konstruktor der Klasse ObjectCounter, Objekt:" << ObjectCounter::getId() << std::endl; }
	id_count++;
	number++;
	
	if (id_count > maxId) { maxId = id_count; }
}

ObjectCounter::~ObjectCounter()
{
	//if (debugConstructor) { std::cout << "Destruktor der Klasse ObjectCounter, Objekt:" << ObjectCounter::getId() << std::endl; }
	number--;
}

int ObjectCounter::getId() {
	return id;
}
int ObjectCounter::getMaxId(){
	return maxId;
}
int ObjectCounter::getNumber() {
	return number;
}


