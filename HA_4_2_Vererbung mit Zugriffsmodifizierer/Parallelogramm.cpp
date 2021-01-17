#include "Parallelogramm.hpp"

Parallelogramm::Parallelogramm(double _a, double _b, double _winkel):a(_a),b(_b),winkel(_winkel) {

}

void Parallelogramm::setA(double newA) {
	a = newA;
}
double Parallelogramm::getA() {
	return a;
}
void Parallelogramm::setB(double newB) {
	b = newB;
}
double Parallelogramm::getB() {
	return b;
}
void Parallelogramm::setWinkel(double newW) {
	winkel = newW;
}
double Parallelogramm::getWinkel() {
	return winkel;
}
void Parallelogramm::print() {
	std::cout << "Seitenlaenge a: " << a <<"\t\t"<< "Seitenlaenge b: " << b << "\t\t" << "Winkel:" << winkel << std::endl;
}