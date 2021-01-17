#pragma once
#include "Point.hpp"
#include <string> 

class Circle
{

private:
	Point centre;
	double radius;


public:
	//ctor
	Circle();
	Circle(const Point& _pos, double _radius = 100);
	Circle(const std::string& quelle);
	//Circle(std::string& temp); //aus internet

	//Methoden
	void setCentre(const Point& neuCentre);
	Point getCentre()const;

	void setRadius(double neuRadius);
	double getRadius()const ;

	void move(double dx, double dy);
	void print(bool absatz = true)const;

	std::string toString()const;
	friend void operator >>(std::istringstream& stream, Circle& a);

};


