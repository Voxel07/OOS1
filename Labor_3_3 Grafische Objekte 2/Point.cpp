#pragma once
#include "Point.hpp"

//Ctor
Point::Point(double _xPos, double _yPos): xPos(_xPos),yPos(_yPos){
}

//Konvertierkonstruktor von string zu point

Point::Point(const std::string& quelle) {
	
	std::istringstream str(quelle);

	str >> *this;


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
//std::istringstream&
 void operator >>(std::istringstream& str, Point& a)
{

	char c;

	str >> c >> a.xPos >> c >> a.yPos >> c;

	
	
}
