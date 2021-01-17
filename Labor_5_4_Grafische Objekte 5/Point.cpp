#pragma once
#include "Point.hpp"

extern bool debugConstructor;

//Standart Konstruktor
Point::Point(double _xPos, double _yPos): xPos(_xPos),yPos(_yPos){
	
	if (debugConstructor) { std::cout << "Standart Konstruktor der Klasse Point, Objekt:" << ObjectCounter::getId() << std::endl; }
}
//Kopierkonstruktor
Point::Point(const Point& p) {
	if (debugConstructor) { std::cout << "Kopierkonstruktor der Klasse Point, Objekt:" << ObjectCounter::getId() << std::endl; }
	xPos = p.xPos;
	yPos = p.yPos;
}
//Konvertierkonstruktor von string zu point
Point::Point(const std::string& quelle) {
	//(5,6)
	if (debugConstructor) { std::cout << "Konvertierkonstruktor der Klasse Point, Objekt:" << ObjectCounter::getId() << std::endl; }
	if (quelle.length() < 5)
	{
		std::cout << quelle.length();
	 throw MyException("nicht genügend Zeichen");
	}
	else
	{ 
		std::istringstream str(quelle);
		str >> *this;
	}
}

//Destruktor
Point::~Point()
{
	if (debugConstructor) { std::cout << "Destruktor der Klasse Point, Objekt:" << ObjectCounter::getId() << std::endl; }

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

//Operatorüberladungen

void operator >>(std::istringstream& str, Point& a)
{
	//(4,7)
	char c;
	int num=0;	
	double x, y;
	double falschwert = -9.0e+61;
	//str >> c >> a.xPos >> c >> a.yPos >> c;
	str >> c >> x >> c >> y >> c;
	/*while (iss >> num || !iss.eof()) {
		if (iss.fail()) {
			iss.clear();
			std::string dummy;
			iss >> dummy;
			continue;*/
	
	a.xPos = x;
	a.yPos = y;
	
	// throw MyException("So geht das nicht");
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

