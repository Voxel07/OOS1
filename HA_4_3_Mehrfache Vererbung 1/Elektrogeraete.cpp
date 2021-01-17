#include "Elektrogeraete.hpp"

Elektrogeraete::Elektrogeraete(int _watt) : watt(_watt) {

}

void Elektrogeraete::setWatt(double newW) {
	watt = newW;
}
int Elektrogeraete::getWatt() {
	return watt;
}

void Elektrogeraete::print() {
	std::cout << "Leistungsaufnahem: " << watt<<"W"<< std::endl;
}