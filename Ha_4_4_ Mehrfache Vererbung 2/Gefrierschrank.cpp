#include "Gefrierschrank.hpp"

Gefrierschrank::Gefrierschrank(double _volumen):Haushaltsgeraet("Default2",999),volumen(_volumen)
{

}
Gefrierschrank::Gefrierschrank(double _volumen, std::string _name,double _gewicht): Haushaltsgeraet(_name, _gewicht), volumen(_volumen)
{

}

void Gefrierschrank::setVolumen(double _volumen) {
	volumen = _volumen;
}
double Gefrierschrank::getVolumen() {
	return volumen;
}

void Gefrierschrank::print() {
	 Haushaltsgeraet::print();
	 std::cout<<"Volumen: "<< volumen <<" L "<< std::endl;

}