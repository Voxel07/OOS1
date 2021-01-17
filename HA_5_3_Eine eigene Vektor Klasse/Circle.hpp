#pragma once
#include "Point.hpp"
#include <string> 

class Circle:public DrawingObject
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


	Circle* clone() const override;

	//Operatorüberladungen
	
	friend void operator >>(std::istringstream& stream, Circle& a);
	std::string toString()const;
	friend std::ostream& operator << (std::ostream& stream,const Circle& a);

	Circle& operator=(const MyVectorData& p) override;
};


