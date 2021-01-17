#include"Buch.hpp"

Buch::Buch(std::string t, std::string a, std::string v, int jahr)
	:Medium(t,v,jahr),autor(a)
{
	
}

void Buch::print() const{
	Medium::print();
	std::cout << "Autor:\t\t " << autor << std::endl;
}

Buch* Buch::clone() const
{
	Buch* kopie = new Buch(*this);
	return kopie;
}
