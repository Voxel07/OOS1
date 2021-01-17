#include "Polygonline.hpp"
#include <iostream>
using namespace std;


Polygonline::Polygonline()
{
	start = nullptr;
	ende = nullptr;
}

Polygonline::Polygonline(Point& p)
{
	start = new PlgElement(p);
	ende = start;
}

Polygonline::~Polygonline()
{
	//neu
	//delete start;
	//alt
	if (start != nullptr)
	{
		start = nullptr;
	}
}

Polygonline Polygonline::addPoint(Point& a)
{
//	PlgElement *ab = new PlgElement(a);
//	
//	if (start == nullptr)
//	{
//		start = ab;
//		ende = start;
//	}
//	else
//	{
//		ende->next = ab;
//		
//		//PlgElement* p = start;
//	/*	while (p->GetNext() != nullptr)
//		{
//			p = p->GetNext();
//		}*/
//
//		//ende->SetNext(p);
//		//ende = p;
//	}
//	ende = ab;

	//return *this;
	PlgElement* newPoint = new PlgElement(a);
	if (start == NULL /*&& endPtr == NULL*/) {
		//startPtr = new PlgElement(p);
		//endPtr = startPtr;
		start = newPoint;
	}
	else {
		ende->SetNext(newPoint);
	}
	ende = newPoint;
	return *this;
}

void Polygonline::move(double dx, double dy)
{
    if (start != nullptr)
	{
        start->move(dx, dy);
    }
}
void Polygonline::print(bool tmp)const
{
    cout<<"|";
    if (start != nullptr)
        start->print(false);
    cout<<"|";
    if(tmp)
        cout<<endl;
}

void Polygonline::appendPolygonline(const Polygonline &b) {

	PlgElement* dummy = b.start;
	ende->SetNext(dummy);
	
	while (dummy)
	{
		ende->next = new PlgElement(dummy->point);
		ende = ende->next;
		dummy = dummy->next;
	}
}
