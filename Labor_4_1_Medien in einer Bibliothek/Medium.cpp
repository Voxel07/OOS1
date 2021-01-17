#include "Medium.hpp"


Medium::Medium(std::string t, std::string v, int j, std::string typ)
	:titel(t),verlag(v),jahr(j),typ(typ)
{
	ausleiher = nullptr;
}

std::string Medium::getTitel() const{
	return titel;
}

std::string Medium::getTyp() const{
	return typ;
}

Person * Medium::getAusleiher() const{
	return ausleiher;
}

void Medium::ausleihen(Person & p, Datum _von, Datum _bis){
	ausleiher = &p;
	von = _von;
	bis = _bis;
}

void Medium::print() const{
	std::cout << "-------------------------------" << std::endl;
	std::cout << typ << std::endl;
	std::cout << "Titel:\t\t " << titel << std::endl;
	std::cout << "Verlag:\t\t " << verlag << std::endl;
	std::cout << "Jahr:\t\t " << jahr << std::endl;
	

	if (ausleiher != nullptr)
	{
		std::cout <<"Ausleiher:\t " <<ausleiher->getName()<<" von "<<von<<" bis "<<bis<< std::endl;
	}
	else
	{
		std::cout << "Ausleiher:\t " << "Kein" << std::endl;
	}
}