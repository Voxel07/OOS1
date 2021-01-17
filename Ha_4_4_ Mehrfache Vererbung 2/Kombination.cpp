#include "Kombination.hpp"

Kombination::Kombination(std::string _name, double _gewicht, double _volumenG, double _volumenK)
					:Gefrierschrank(_volumenG,_name,_gewicht),Kuehlschrank(_volumenK)
{
	
}

void Kombination::print() {
	
	
	std::cout << "Geraetename = "<< Gefrierschrank::getName() << std::endl;
	std::cout << "Gewicht \t = "   << Gefrierschrank::getGewicht()<<" kg"<< std::endl;
	std::cout << "GefrierVolumen\t = " << Gefrierschrank::getVolumen() << " L" << std::endl;
	std::cout << "KuehlVolumen\t = " << Kuehlschrank::getVolumen() << " L" << std::endl;

}