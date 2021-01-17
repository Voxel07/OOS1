//#include "Haushaltsgereat.hpp"
#include "Gefrierschrank.hpp"
int main ()
{

Haushaltsgeraet g("Hallo",23.5);
std::cout << "Hier wird das Haushaltsgerät ausgegeben" << std::endl;
g.print();

Gefrierschrank k;
Gefrierschrank p(10, "Peter", 500);
std::cout << "Hier wird der Gefrierschrank ausgegeben" << std::endl;
k.print();
p.print();



return 1;
}