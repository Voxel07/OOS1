#include "DVD.hpp"

DVD::DVD(std::string t, std::string v, int j, int d) 
	:Medium(t, v, j, "DVD"),dauer(d)
{

}

void DVD::print() const{
	Medium::print();
	std::cout << "Dauer:\t\t " << dauer << std::endl;
}