#pragma once
#include "Point.hpp"
#include <iostream>

using namespace std;

Point::Point()
{
	xPos = 0;
	yPos = 0;
}
Point::Point(double _xPos, double _yPos) {
	xPos = _xPos;
	yPos = _yPos;
}


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
void Point::print(bool absatz )
{
	if (absatz == true)
	{
		cout << "(" << xPos << "|" << yPos << ")" << endl;
	}
	else
	{
		cout << "(" << xPos << "|" << yPos << ")";
	}
	
}