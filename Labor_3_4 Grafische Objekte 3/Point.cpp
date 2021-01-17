#pragma once
#include "Point.hpp"

//Ctor
Point::Point(double _xPos, double _yPos): xPos(_xPos),yPos(_yPos){
}

//Konvertierkonstruktor von string zu point
Point::Point(const std::string& quelle) {

	////Bsp: (1.1, 2.2)
	//xPos = 0;
	//yPos = 0;
	//std::size_t k = 0;

	//while ((quelle.at(k) < '0' || quelle.at(k) > '9') && quelle[k] != '\0') //ignoriert vorherigen text
	//{
	//	k++;
	//}
	//while ((quelle.at(k) >= '0' && quelle.at(k) <= '9') && quelle[k] != '\0')				//X ELement
	//{
	//	xPos += quelle.at(k) - '0';
	//	k++;
	//	if ((quelle.at(k) >= '0' && quelle.at(k) <= '9'))
	//	{
	//		xPos *= 10;
	//	}
	//	if (quelle.at(k) == '.')
	//	{
	//		k++;
	//		std::size_t l = 1;
	//		while ((quelle.at(k) >= '0' && quelle.at(k) <= '9') && quelle[k] != '\0')
	//		{
	//			xPos += (quelle.at(k) - '0') / pow(10, l);
	//			l++;
	//			k++;
	//		}
	//	}
	//}
	//while ((quelle.at(k) < '0' || quelle.at(k) > '9') && quelle[k] != '\0') //ignoriert vorherigen text
	//{
	//	k++;
	//}
	//while ((quelle.at(k) >= '0' && quelle.at(k) <= '9') && quelle[k] != '\0')				//X ELement
	//{
	//	yPos += quelle.at(k) - '0';
	//	k++;
	//	if ((quelle.at(k) >= '0' && quelle.at(k) <= '9'))
	//	{
	//		yPos *= 10;
	//	}
	//	if (quelle.at(k) == '.')
	//	{
	//		k++;
	//		std::size_t l = 1;
	//		while ((quelle.at(k) >= '0' && quelle.at(k) <= '9') && quelle[k] != '\0')
	//		{
	//			yPos += (quelle.at(k) - '0') / pow(10, l);
	//			l++;
	//			k++;
	//		}
	//	}
	//}

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
	a.move(b, b);/*
	a.setX(a.getX() + b);
	a.setY(a.getY() + b);*/
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

