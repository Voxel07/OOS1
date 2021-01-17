#include "Student.hpp"

Student::Student(std::string _name, int _matNr)
	:Person(_name,1),matNr(_matNr)
{
	
}
void Student::print() const{
	Person::print();
	std::cout << "Matrikelnummer: " << matNr<< std::endl;
}
