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
    ~Polygonline();

	//Methoden
    void move(double dx, double dy);
    void print(bool tmp = true)const;
    Polygonline  addPoint(Point &a);
   	void appendPolygonline(const Polygonline &b);
};

