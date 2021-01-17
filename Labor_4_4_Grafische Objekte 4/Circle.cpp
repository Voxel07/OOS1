#pragma once
#include "Circle.hpp"

extern bool debugConstructor;

//Standartkonstruktor
Circle::Circle(const Point& _pos, double _radius) :centre(_pos), radius(_radius)
{
	if (debugConstructor) { std::cout << "Standartkonstruktor der Klasse Circle, Objekt:" << ObjectCounter::getId() << std::endl; }
}
//Kopierkonstruktor
Circle::Circle(const Circle& c) : centre(c.centre), radius(c.radius) {
	if (debugConstructor) { std::cout << "Kopierkonstruktor der Klasse Circle, Objekt:" << ObjectCounter::getId() << std::endl; }
}

//Konvertierkonstrukotr String to Circle
Circle::Circle(const std::string& quelle) {

	if (debugConstructor) { std::cout << "Konvertierkonstrukotr der Klasse Circle, Objekt: " << ObjectCounter::getId() << std::endl; }

		std::istringstream str(quelle);

		str >> *this;
}

Circle::~Circle() {
	if (debugConstructor) { std::cout << "Destruktor der Klasse Circle, Objekt: " << ObjectCounter::getId() << std::endl; }
}

//Methoden
void Circle::setCentre(const Point& neuCentre)
{
	centre.setX (neuCentre.getX());
	centre.setY (neuCentre.getY());
}
Point Circle::getCentre()const 
{
	return centre;
}
void Circle::setRadius(double neuRadius)
{
	radius = neuRadius;
}
double Circle::getRadius()const
{
	return radius;
}
void Circle::move(double dx, double dy) 
{
	centre.setX(centre.getX() + dx);
	centre.setY(centre.getY() + dy);
}
void Circle::print(bool absatz) const
{
	if (absatz == true)
	{
		std::cout << "<(" << centre.getX() << "|" << centre.getY() << "), " <<radius<<">"<< std::endl;
	}
	else
	{
		std::cout << "<(" << centre.getX() << "|" << centre.getY() << "), " << radius << ">";
	}
}
std::string Circle::toString()const {
	std::stringstream s;
	s << "<(" << centre.getX() << "|" << centre.getY() << "), " << radius << ">";
	return s.str();
}

//Operatorüberladungen
std::ostream& operator<<(std::ostream& stream,const Circle& a)
{
	stream << a.toString();
	return stream;
}

void operator >>(std::istringstream& str, Circle& a)
{
	//"<(5.5, 6.6), 10.1>"
	char c;
	double x, y;
	str >> c >> c >> x >> c >> y >> c >> c >> a.radius >> c;
	a.centre.setX(x);
	a.centre.setY(y);


}




