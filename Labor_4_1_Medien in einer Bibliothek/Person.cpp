#include "Person.hpp"


Person::Person(std::string _name, int _dauer)
	:name(_name),ausleihdauer(_dauer)
{
	
}
std::string Person::getName()const{
	return name;
}
int Person::getAusleihdauer()const{
	return ausleihdauer;
}
void Person::print()const{
	std::cout << "Name: " << name << std::endl << "Ausleihdauer: " << ausleihdauer << std::endl;
}