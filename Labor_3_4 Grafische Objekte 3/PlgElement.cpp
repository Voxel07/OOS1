#include "PlgElement.hpp"

PlgElement::PlgElement(const PlgElement& orig): point(orig.point)
{
	if (orig.test())
	{
		next = new PlgElement(*orig.next);
	}
}

PlgElement::PlgElement(const Point &p, PlgElement *_next):point(p), next(_next) 
{
	
}
//PlgElement::PlgElement(const PlgElement& orig) //Deepcopie
//{
//	Point neup(orig.point.getX(), orig.point.getY());
//	PlgElement* neu = new PlgElement(neup);
//
//	//neu->SetNext = nullptr;
//	//orig.SetNext(neu.
//}
PlgElement::~PlgElement() {
	
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