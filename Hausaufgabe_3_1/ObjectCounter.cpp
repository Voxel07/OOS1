#include"ObjectCounter.hpp"


ObjectCounter::ObjectCounter() :id(id_count)
{
	id_count++;
	number++;
	if (id_count > maxId) { maxId = id_count; }
}

ObjectCounter::~ObjectCounter()
{
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


