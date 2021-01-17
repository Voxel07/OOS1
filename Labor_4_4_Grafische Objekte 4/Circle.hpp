#pragma once
#include "Point.hpp"
#include "OneDimObject.hpp"

#include <string> 



class Circle: public OneDimObject
{

private:
	Point centre;
	double radius;


public:
	//ctor
	Circle(const Point& _pos, double _radius = 100);
	Circle(const std::string& quelle);
	Circle(const Circle& c);
	~Circle();

	//Methoden
	void setCentre(const Point& neuCentre);
	Point getCentre()const;

	void setRadius(double neuRadius);
	double getRadius()const ;

	void move(double dx, double dy);
	void print(bool absatz = true)const;

	//Operatorüberladungen
	//frined void operator >>(const std::string& str, Circle& a);
	friend void operator >>(std::istringstream& stream, Circle& a);
	std::string toString()const;
	friend std::ostream& operator << (std::ostream& stream,const Circle& a);
};


