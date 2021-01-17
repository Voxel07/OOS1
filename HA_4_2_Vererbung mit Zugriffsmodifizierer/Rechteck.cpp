#include "Rechteck.hpp"

Rechteck::Rechteck(double _a, double _b, double _Winkel) :Parallelogramm(_a,_b,_Winkel) {

}

void Rechteck::print() {
	Parallelogramm::print();
}
void Rechteck::setA(double newA) {
	Parallelogramm::setA(newA);
}
double Rechteck::getWinkel() {
	return Parallelogramm::getWinkel();
}
void Rechteck::setWinkel(double newW) {
	Parallelogramm::setWinkel(newW);
}