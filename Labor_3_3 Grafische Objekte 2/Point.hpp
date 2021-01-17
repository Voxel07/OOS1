#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <math.h>

class Point
{
private:

	double xPos;
	double yPos;

public:
	//ctor
	Point(double _xpos=0, double _ypos=0);
	Point(const std::string& quelle);
	
	

	

	//methoden
	double getX()const;
	void setX(double neu_xpos);
	double getY()const;
	void setY(double neu_ypos);
	void move(double dx, double dy);
	void print(bool absatz = true)const;
	std::string toString()const;
	//std::istringstream&
	friend void operator >>(std::istringstream& stream,  Point& a);
	
	

};
 
