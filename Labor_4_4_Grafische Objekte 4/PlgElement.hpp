#pragma once
#include"Point.hpp"
#include "OneDimObject.hpp"

#include <iostream>

class PlgElement : public OneDimObject
{

private:
	Point point;
	PlgElement *next;

public:
	//Konstruktoren
	PlgElement();
	PlgElement(const PlgElement& orig);
	PlgElement(const Point &p, PlgElement *next = nullptr);
	~PlgElement();

	//Methoden
	Point GetPoint()const;
	PlgElement *GetNext()const;
	void SetNext(PlgElement *next);
	bool test()const;
	void move(double dx, double dy);
	void print(bool tmp = true)const;
	std::string toString()const;

	//Operatorüberladungen
	friend std::ostream& operator << (std::ostream& stream, PlgElement& a);

};