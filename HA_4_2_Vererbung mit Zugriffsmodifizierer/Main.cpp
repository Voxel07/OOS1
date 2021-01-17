#include "Parallelogramm.hpp"
#include "Rechteck.hpp"
#include <iostream>

using namespace std;


int main() {
	Parallelogramm p(10, 20, 45);
	Rechteck r(40, 50);
	p.print();
	p.setA(15);
	p.setWinkel(50);
	p.print();
	r.print();
	r.setA(45);
	r.setWinkel(15);
	if (r.getWinkel() != 90.0) 
	{
		cout << "Das ist doch kein Rechteck!" << endl;
	}
	r.print(); return 0;
}