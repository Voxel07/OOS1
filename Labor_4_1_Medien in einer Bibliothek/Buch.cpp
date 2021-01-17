#include"Buch.hpp"

Buch::Buch(std::string t, std::string a, std::string v, int jahr)
	:Medium(t,v,jahr,"Buch"),autor(a)
{
	
}


void Buch::print() const{
	Medium::print();
	std::cout << "Autor:\t\t " << autor << std::endl;
}