#pragma once
#include"Point.hpp"
#include <iostream>
class PlgElement {

private:
	Point point;
	PlgElement *next;

public:
	//PlgElement();
	//PlgElement(const Point& p);
	PlgElement(const PlgElement& orig);
	PlgElement(const Point &p, PlgElement *next = nullptr);
	~PlgElement();
	Point GetPoint()const;
	PlgElement *GetNext()const;
	void SetNext(PlgElement *next);
	bool test()const;
	void move(double dx, double dy);
	void print(bool tmp = true)const;
	std::string toString()const;

};