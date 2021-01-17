#include "PlgElement.hpp"

extern bool debugConstructor;

//Standartkonstrukotr
PlgElement::PlgElement():point(0,0),next(nullptr) {
	if (debugConstructor) { std::cout << "Standartkonstrukotr der Klasse PlgElement , Objekt:" << ObjectCounter::getId() << std::endl; }
}


//Kopierkonstruktor
PlgElement::PlgElement(const PlgElement& orig): point(orig.point)
{
	if (debugConstructor) { std::cout << "Kopierkonstruktor der Klasse PlgElement , Objekt:" << ObjectCounter::getId() << std::endl; }
	if (orig.test())
	{
		next = new PlgElement(*orig.next);
	}
}
//Konvertierkonstruktor
PlgElement::PlgElement(const Point &p, PlgElement *_next):point(p), next(_next) 
{
	if (debugConstructor) { std::cout << "Konvertierkonstruktor der Klasse PlgElement , Objekt:" << ObjectCounter::getId() << std::endl; }
}
//Destruktor
PlgElement::~PlgElement() {
	if (debugConstructor) { std::cout << "Destruktor der Klasse PlgElement , Objekt:" << ObjectCounter::getId() << std::endl; }
	if (next != nullptr)
	{
		delete next;

		next = nullptr;
	}
}
 Point PlgElement::GetPoint()const {
	return point;
}
PlgElement *PlgElement::GetNext()const {
	return next;
}
void PlgElement::SetNext(PlgElement *next) {
	this->next = next;
}
bool PlgElement::test() const {
	return next != nullptr;
}
void PlgElement::move(double dx, double dy) {
	
	PlgElement *next = this;
	do
	{
		next->point.move(dx, dy);
		next = next->GetNext();
	} while (next != nullptr);
}

void PlgElement::print(bool tmp)const {
	
	const PlgElement *next = this;
	do
	{
		next->point.print(false);
		next = next->GetNext();
		if (next != nullptr){std::cout << " - ";}

	} while (next != nullptr);

	if (tmp) {std::cout << std::endl;}
}
std::string PlgElement::toString()const
{
	std::stringstream s;
	const PlgElement* next = this;
	do
	{
		s << next->point.toString();
		next = next->GetNext();
		if (next != nullptr)
		{
			s << " - ";
		}
	} while (next != nullptr);

	return s.str();
}

//Operatorüberladungen
std::ostream& operator<<(std::ostream& stream, PlgElement& a)
{
	stream << a.toString();
	return stream;
}