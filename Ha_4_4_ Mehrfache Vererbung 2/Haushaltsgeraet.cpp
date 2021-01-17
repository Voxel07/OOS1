#include "Haushaltsgereat.hpp"

//Ctor
Haushaltsgeraet::Haushaltsgeraet(std::string _name, double _gewicht):name(_name), gewicht(_gewicht)
{}

//Methoden
std::string Haushaltsgeraet::getName() {
	return name;
}
double Haushaltsgeraet::getGewicht()
{
	return gewicht;
}
void Haushaltsgeraet::setGewicht(double newWeight) {
	gewicht = newWeight;
}
void Haushaltsgeraet::print()
{
	std::cout << "Geraetename"<<"\t"<<"= " << name << std::endl;
	std::cout << "Gewicht"<<"\t\t" << "= " << gewicht << std::endl;
}