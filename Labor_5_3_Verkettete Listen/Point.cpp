#pragma once
#include "Point.hpp"

extern bool debug;

//Standart Konstruktor
Point::Point(double _xPos, double _yPos): xPos(_xPos),yPos(_yPos){
	if (debug) { std::cout << "Standart Konstruktor der Klasse Point" << std::endl; }
}
//Kopierkonstruktor
Point::Point(const Point& p) {
	if (debug) { std::cout << "Kopier Konstruktor der Klasse Point" << std::endl; }
	xPos = p.xPos;
	yPos = p.yPos;
}
//Konvertierkonstruktor von string zu point
Point::Point(const std::string& quelle) {
	if (debug) { std::cout << "Standart Konvertier der Klasse Point" << std::endl; }
		std::istringstream str(quelle);

		str >> *this;
}
//Destruktor
Point::~Point()
{
	if (debug) { std::cout << "Destruktor der Klasse Point" << std::endl; }

}

//Methoden
void Point::setX(double neu_xPos)
{
	xPos = neu_xPos;
}
double Point::getX()const
{
	return xPos;
}
double Point::getY()const
{
	return yPos;
}
void Point::setY(double neu_yPos)
{
	yPos = neu_yPos;
}
void Point::move(double dx, double dy)
{
	xPos  +=dx;
	yPos  +=dy;
}
void Point::print(bool absatz )const
{
	if (absatz == true)
	{
		std::cout << "(" << xPos << "|" << yPos << ")" << std::endl;
	}
	else
	{
		std::cout << "(" << xPos << "|" << yPos << ")";
	}
}
std::string Point::toString()const {
	   	
	std::stringstream ausgabe;
	ausgabe << "(" << xPos << "|" << yPos << ")";
	return ausgabe.str();
}


Point* Point::clone() const {

	Point* kopie = new Point(*this);
	return kopie;

}


//Operatorüberladungen

void operator >>(std::istringstream& str, Point& a)
{

	char c;

	str >> c >> a.xPos >> c >> a.yPos >> c;
}

std::ostream& operator<<(std::ostream& stream, const Point& a)
{
	stream << a.toString();
	return stream;
}

Point operator + (Point a, const Point& b)
{
	a.setX(a.getX() + b.getX());
	a.setY(a.getY() + b.getY());
	return a;
}

Point operator + (Point a,  double b)
{
	a.move(b, b);
	return a;
}

Point operator + (double a, const Point& b)
{
	return b + a;
}

Point operator - (Point a, const Point& b)
{
	a.setX(a.getX() - b.getX());
	a.setY(a.getY() - b.getY());
	return a;
}

Point Point::operator-() 
{
	this->xPos * -1;
	this->yPos * -1;
	return *this;

}

Point Point::operator++(int)
{
	Point tmp(*this);
	operator++();
	return tmp;
}
Point &Point::operator ++() {
	++yPos;
	++xPos;
	return *this;
}

Point& Point::operator=(const MyData& p) {
	const Point* ptr = dynamic_cast<Point*>(const_cast<MyData*>(&p));
	xPos = ptr->xPos;
	yPos = ptr->yPos;
	return *this;
}


