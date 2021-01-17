#include "DVD.hpp"

DVD::DVD(std::string t, std::string v, int j, int d) 
	:Medium(t, v, j),dauer(d)
{

}

void DVD::print() const{
	Medium::print();
	std::cout << "Dauer:\t\t " << dauer << std::endl;
}

DVD* DVD::clone() const
{
	DVD* kopie = new DVD(*this);
	return kopie;

}