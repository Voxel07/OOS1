#include "Akkubohrschrauber.hpp"

Akkubohrschrauber::Akkubohrschrauber(int _wattS, int _wattB) : Akkuschrauber(_wattS), Akkubohrer(_wattB)
{

}
void Akkubohrschrauber::print() {
	
	std::cout << "Leistungsaufnahme als Bohrer: ";
	Akkubohrer::print();
	
	std::cout << "Leistungsaufnahme als Schrauber: ";
	Akkuschrauber::print();
}
