#pragma once
#include "Point.hpp"
class Circle
{

private:
	Point centre;
	double radius;


public:
	//ctor
	Circle(const Point& _pos, double _radius = 100);


	//Methoden

	void setCentre(Point& neuCentre);
	Point getCentre();
	void setRadius(double neuRadius);
	double getRadius();

	//h)
	void move(double dx, double dy);
	void print(bool absatz = true);
};


