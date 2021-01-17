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
//
//Polygonline::Polygonline(const std::string& quelle)
//{
//	Point neuP(0,0);
//
//	std::size_t k = 0;
//	while (quelle[k] != '\0')
//	{
//		if(k!=0) this->addPoint(neuP);
//		neuP.setX(0);
//		neuP.setY(0);
//	
//		while ((quelle[k] < '0' || quelle[k] > '9') && quelle[k] != '\0') //ignoriert vorherigen text
//		{
//			k++;
//		}
//		while ((quelle[k] >= '0' && quelle[k] <= '9') && quelle[k] != '\0')				//X ELement
//		{
//			neuP.setX(neuP.getX() + quelle[k] - '0');
//			k++;
//			if ((quelle[k] >= '0' && quelle[k] <= '9'))
//			{
//				neuP.setX(neuP.getX() * 10);
//			}
//			if (quelle[k] == '.')
//			{
//				k++;
//				std::size_t l = 1;
//				while ((quelle[k] >= '0' && quelle[k] <= '9') && quelle[k] != '\0')
//				{
//					neuP.setX(neuP.getX() + (quelle[k] - '0') / pow(10, l));
//					l++;
//					k++;
//				}
//			}
//		}
//		while ((quelle[k] < '0' || quelle[k] > '9') && quelle[k] != '\0') //ignoriert vorherigen text
//		{
//			k++;
//		}
//		while ((quelle[k] >= '0' && quelle[k] <= '9') && quelle[k] != '\0')				//X ELement
//		{
//			neuP.setY(neuP.getY() + quelle[k] - '0');
//			k++;
//			if ((quelle[k] >= '0' && quelle[k] <= '9'))
//			{
//				neuP.setY(neuP.getY() * 10);
//			}
//			if (quelle[k] == '.')
//			{
//				k++;
//				std::size_t l = 1;
//				while ((quelle[k] >= '0' && quelle[k] <= '9') && quelle[k] != '\0')
//				{
//					neuP.setY(neuP.getY() + (quelle[k] - '0') / pow(10, l));
//					l++;
//					k++;
//				}
//			}
//		}
//	}
//}
//

Polygonline::Polygonline(const std::string& quelle)
{
	std::istringstream str(quelle);

	str >> *this;
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
	if (start == nullptr)
	{
		start = new PlgElement(a);
		ende = start;
	}
	else
	{
		PlgElement* p = start;
		while (p->GetNext() != nullptr)
			p = p->GetNext();

		p->SetNext(new PlgElement(a));
	}

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
	while (dummy)
	{
		ende->SetNext(new PlgElement(dummy->GetPoint()));
		ende = ende->GetNext();
		dummy = dummy->GetNext();
	}
}

std::string Polygonline::toString()const {
	
	
	std::stringstream ausgabe;
	
	ausgabe << "|";
	if (start != nullptr)
	{
		ausgabe << start->toString();
	}
	ausgabe << "|";
	
	return ausgabe.str();
  
}

void operator >>(std::istringstream& stream, Polygonline& a)
{
	//"|(1.1,1.2) - (2.1, 2.2) -(3.1,3.2) |"
	char c;

	double x;
	double y;
	stream >> c;
	do
	{
	stream >> c >> x >> c >> y >> c >> c;
	Point temp(x, y);
	a.addPoint(temp);

	} while (!stream.eof());


}