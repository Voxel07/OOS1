#pragma once
#include "PlgElement.hpp"
class Polygonline
{
private:
	PlgElement *start;
	PlgElement* ende;

public:

	//ctor
    Polygonline();
    Polygonline(Point &p);
	Polygonline(const std::string& quelle);
    ~Polygonline();

	//Methoden
    void move(double dx, double dy);
    void print(bool tmp = true)const;
    Polygonline addPoint(const Point &a);
   	void appendPolygonline(const Polygonline &b);

	std::string toString()const;

	//Operatorüberladungen
	friend std::ostream& operator << (std::ostream& stream,const Polygonline& a);
	//friend std::ifstream& operator >>(std::istream& stream, const std::string& a);
	friend void operator >>(std::istringstream& stream, Polygonline& a);
	Polygonline &operator + (const Point& a);
	Polygonline &operator + (const Polygonline& a);
};

