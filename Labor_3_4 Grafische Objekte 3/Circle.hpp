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

	//Operator�berladungen
	//frined void operator >>(const std::string& str, Circle& a);
	friend void operator >>(std::istringstream& stream, Circle& a);
	std::string toString()const;
	friend std::ostream& operator << (std::ostream& stream,const Circle& a);
};


