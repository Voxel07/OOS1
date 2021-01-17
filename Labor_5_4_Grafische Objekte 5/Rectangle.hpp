#pragma once
#include "OneDimObject.hpp"
#include "Point.hpp"
class Rectangle:public OneDimObject{
private:

	Point m_EckeO;
	Point m_EckeU;


public:

	//Ctor
	Rectangle();
	Rectangle(Point p1, Point p2);
	Rectangle(const std::string& quelle);

	//Methoden
	void print(bool = false)const;
	std::string toString()const;

	//Operatorüberladungen
	friend void operator >>(std::istringstream& stream, Rectangle& a);
	friend std::ostream& operator << (std::ostream& stream, const Rectangle& a);
};