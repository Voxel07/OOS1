#pragma once
#include "Circle.hpp"
#include <iostream>
using namespace std;

Circle::Circle(const Point& _pos, double _radius) :centre(_pos), radius(_radius)
{

}

//Methoden
void Circle::setCentre(Point& neuCentre)
{
	centre.setX (neuCentre.getX());
	centre.setY (neuCentre.getY());
}
Point Circle::getCentre()
{
	return centre;
}
void Circle::setRadius(double neuRadius)
{
	radius = neuRadius;
}
double Circle::getRadius()
{
	return radius;
}
void Circle::move(double dx, double dy) 
{
	centre.setX(centre.getX() + dx);
	centre.setY(centre.getY() + dy);
}
void Circle::print(bool absatz) // = true
{
	if (absatz == true)
	{
		cout << "Mittelpunkt:" << "(" << centre.getX() << "|" << centre.getY() << ")" <<"Radius:"<<radius<< endl;
	}
	else
	{
		cout << "Mittelpunkt:" << "(" << centre.getX() << "|" << centre.getY() << ")" << "Radius:" << radius;
	}
}