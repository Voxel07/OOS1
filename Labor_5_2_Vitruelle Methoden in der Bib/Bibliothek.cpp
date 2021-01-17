#include "Bibliothek.hpp"


Bibliothek::Bibliothek(int max):maxAnz(max),anz(0) 
{
	medien = new Medium * [maxAnz];
}
Bibliothek::~Bibliothek() {
	delete medien;
}
//void Bibliothek::mediumBeschaffen( Buch &buch)
//{
//	if (anz < maxAnz)
//	{
//
//		medien[anz] = &buch;
//		anz++;
//	}
//	else
//	{
//		std::cout << "Die Bibliothek ist voll!";
//	}
//}
//void Bibliothek::mediumBeschaffen(DVD& dvd) 
//{
//	if (anz < maxAnz) 
//	{
//
//		medien[anz] = &dvd;
//		anz++;
//	}
//	else 
//	{
//		std::cout << "Die Bibliothek ist voll!";
//	}
//}

void Bibliothek::mediumBeschaffen(Medium& medium)
{
	if (anz < maxAnz)
	{
		medien[anz] = &medium;
		anz++;
	}
	else
	{
		std::cout << "Die Bibliothek ist voll!";
	}

}

void Bibliothek::mediumAusleihen(int nr, Person& p, Datum d) {
	if (nr <= anz) {
		Datum temp =d;
		medien[nr]->ausleihen(p, d, temp + p.getAusleihdauer());
	}
}
void Bibliothek::mediumSuchen(std::string suchw) {

	std::cout << std::endl << "Suche nach: \"" << suchw << "\".Ergebnis: " << std::endl;
	
	for (int i = 0; i < anz; i++)
	{
		Medium* tmp = medien[i];
		if (tmp->getTitel().find(suchw) != std::string::npos)
		{
			
			std::cout << std::endl << "Medium " << i << ":" << std::endl;
			tmp->print();
		}
		
	}


}

void Bibliothek::print() const {
	std::cout << std::endl << "Bibliothekskatalog: " << std::endl;
	for (int i = 0; i < anz; i++)
	{
		/*if (medien[i]->getTyp() == "Buch")
		{
			Buch* temp = (Buch*)medien[i];
			temp->print();

						
		}
		else if (medien[i]->getTyp() == "DVD")
		{
			DVD* temp = (DVD*)medien[i];
			temp->print();
		}
		else
			std::cout << "Bib.print() FEHLER Typ nicht erkannt" << std::endl;
*/

		medien[i]->print();
	}
}