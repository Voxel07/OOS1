#include"Dozent.hpp"

Dozent::Dozent(std::string _name, int _prfrNr) 
	:Person(_name,3),prfrNr(_prfrNr)
{
	
}
void Dozent::print() const{
	Person::print();
	std::cout << "Prüfernummer: " << prfrNr << std::endl;
}