#include "Polygonline.hpp"
#include <iostream>

extern bool debugConstructor;

//Standartkonstruktor
Polygonline::Polygonline()
{
	if (debugConstructor) { std::cout << "Standartkonstruktor der Klasse Polygonline , Objekt:" << ObjectCounter::getId() << std::endl; }
	start = nullptr;
	ende = nullptr;
}
//Konvertierkonstruktor Point to Plg
Polygonline::Polygonline(Point& p):start ( new PlgElement(p))
{
	ende = start;
	if (debugConstructor) { std::cout << "Konvertierkonstruktor_Point der Klasse Polygonline , Objekt:" << ObjectCounter::getId() << std::endl; }
}
//Konvertierkonstruktor string to Polyline
Polygonline::Polygonline( std::string& quelle)
{
	start = nullptr;
	ende = nullptr;

		std::istringstream str(quelle);

		str >> *this;

		if (debugConstructor) { std::cout << "Konvertierkonstruktor_string der Klasse Polygonline , Objekt:" << ObjectCounter::getId() << std::endl; }
}
//Desturktor
Polygonline::~Polygonline()
{
	if (start != nullptr)
	{
		start = nullptr;
	}
	if (debugConstructor) { std::cout << "Destruktor der Klasse Polygonline , Objekt:" << ObjectCounter::getId() << std::endl; }
}


Polygonline Polygonline::addPoint(const Point& a)
{
	if (start == nullptr)
	{
		start = new PlgElement(a);
		ende = start;
	}
	else
	{
		PlgElement* p = start;
		while (p->GetNext() != nullptr)
			p = p->GetNext();

		p->SetNext(new PlgElement(a));
	}

	return *this;
}

void Polygonline::move(double dx, double dy)
{
    if (start != nullptr)
	{
        start->move(dx, dy);
    }
}
void Polygonline::print(bool tmp)const
{
	std::cout<<"|";
    if (start != nullptr)
        start->print(false);
	std::cout<<"|";
    if(tmp)
		std::cout<< std::endl;
}

void Polygonline::appendPolygonline(const Polygonline &b) {

	PlgElement* dummy = b.start;
	while (dummy!=nullptr)
	{
		ende->SetNext(new PlgElement(dummy->GetPoint()));
		ende = ende->GetNext();
		dummy = dummy->GetNext();
	}
}

std::string Polygonline::toString()const {
	
	std::stringstream ausgabe;
	ausgabe << "|";
	if (start != nullptr)
	{
		ausgabe << start->toString();
	}
	ausgabe << "|";
	return ausgabe.str();
}

std::ostream& operator<<(std::ostream& stream,const Polygonline& a)
{
	stream << a.toString();
	return stream;
}
void operator >>(std::istringstream& stream, Polygonline& a)
{
	//"|(1.1,1.2) - (2.1, 2.2) -(3.1,3.2) |"
	char c;

	double x;
	double y;
	stream >> c;
	do
	{
		stream >> c >> x >> c >> y >> c >> c;
		Point temp(x, y);
		a.addPoint(temp);

	} while (!stream.eof());


}

Polygonline & Polygonline::operator + (const Point& a) {
	this->addPoint(a);
	return *this;
}
Polygonline & Polygonline::operator + (const Polygonline& a) {
	this->appendPolygonline(a);
	return *this;
}
