#pragma once
#include "PlgElement.hpp"
class Polygonline : public OneDimObject
{
private:
	PlgElement *start;
	PlgElement* ende;

public:

	//ctor
    Polygonline();
    Polygonline(Point &p);
	Polygonline(std::string& quelle);

    ~Polygonline();

	//Methoden
    void move(double dx, double dy);
    void print(bool tmp = true)const;
    Polygonline addPoint(const Point &a);
   	void appendPolygonline(const Polygonline &b);

	std::string toString()const;

	//Operatorüberladungen
	friend std::ostream& operator << (std::ostream& stream,const Polygonline& a);
	
	friend void operator >>(std::istringstream& stream, Polygonline& a);
	Polygonline &operator + (const Point& a);
	Polygonline &operator + (const Polygonline& a);
};

