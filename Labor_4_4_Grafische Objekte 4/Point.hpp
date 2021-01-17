#pragma once
#include "DrawingObject.hpp"

#include <string>
#include <iostream>
#include <sstream>
#include <math.h>



class Point :public DrawingObject
{
private:

	double xPos;
	double yPos;
	

public:
	//ctor
	Point(double _xpos=0, double _ypos=0);
	Point(const Point& p);
	Point(const std::string& quelle);
	~Point();
		

	//Methoden
	double getX()const;
	void setX(double neu_xpos);
	double getY()const;
	void setY(double neu_ypos);
	void move(double dx, double dy);
	void print(bool absatz = true)const;
	std::string toString()const;
	
	//Operatorüberladungen
	friend void operator >>(std::istringstream& stream, Point& a);
	friend std::ostream& operator << (std::ostream& stream,const Point& a);
	
	friend Point operator +(Point a,const Point&b);
	friend Point operator +(Point a,  double b);
	friend Point operator +( double a,const Point& b);

	friend	Point operator - (Point a, const Point& b);
	Point operator-();
	
	Point operator ++(int);
	Point &operator ++();
	

};
 
