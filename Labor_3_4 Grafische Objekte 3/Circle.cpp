#pragma once
#include "Circle.hpp"

using namespace std;

Circle::Circle(const Point& _pos, double _radius) :centre(_pos), radius(_radius)
{

}

Circle::Circle(const std::string& quelle) {

	////("<(25.467, 6.6), 10.1>");
	//centre.setX(0);
	//centre.setY(0);
	//radius = 0;

	//std::size_t k = 0;

	//while ((quelle.at(k) < '0' || quelle.at(k) > '9') && quelle[k] != '\0') //ignoriert vorherigen text
	//{
	//	k++;
	//}
	//while ((quelle.at(k) >= '0' && quelle.at(k) <= '9') && quelle[k] != '\0')				//X ELement
	//{
	//	centre.setX(centre.getX() + quelle.at(k) - '0');
	//	k++;
	//	if ((quelle.at(k) >= '0' && quelle.at(k) <= '9'))
	//	{
	//		centre.setX(centre.getX() * 10);
	//	}
	//	if (quelle.at(k) == '.')
	//	{
	//		k++;
	//		std::size_t l = 1;
	//		while ((quelle.at(k) >= '0' && quelle.at(k) <= '9') && quelle[k] != '\0')
	//		{
	//			centre.setX(centre.getX() + (quelle.at(k) - '0') / pow(10, l));
	//			l++;
	//			k++;
	//		}
	//	}
	//}
	//while ((quelle.at(k) < '0' || quelle.at(k) > '9') && quelle[k] != '\0') //ignoriert vorherigen text
	//{
	//	k++;
	//}
	//while ((quelle.at(k) >= '0' && quelle.at(k) <= '9') && quelle[k] != '\0')				//X ELement
	//{
	//	centre.setY(centre.getY() + quelle.at(k) - '0');
	//	k++;
	//	if ((quelle.at(k) >= '0' && quelle.at(k) <= '9'))
	//	{
	//		centre.setY(centre.getY() * 10);
	//	}
	//	if (quelle.at(k) == '.')
	//	{
	//		k++;
	//		std::size_t l = 1;
	//		while ((quelle.at(k) >= '0' && quelle.at(k) <= '9') && quelle[k] != '\0')
	//		{
	//			centre.setY(centre.getY() + (quelle.at(k) - '0') / pow(10, l));
	//			l++;
	//			k++;
	//		}
	//	}
	//}
	//while ((quelle.at(k) < '0' || quelle.at(k) > '9') && quelle[k] != '\0') //ignoriert vorherigen text
	//{
	//	k++;
	//}
	//while ((quelle.at(k) >= '0' && quelle.at(k) <= '9') && quelle[k] != '\0')				//X ELement
	//{
	//	radius += quelle.at(k) - '0';
	//	k++;
	//	if ((quelle.at(k) >= '0' && quelle.at(k) <= '9'))
	//	{
	//		radius *= 10;
	//	}
	//	if (quelle.at(k) == '.')
	//	{
	//		k++;
	//		std::size_t l = 1;
	//		while ((quelle.at(k) >= '0' && quelle.at(k) <= '9') && quelle[k] != '\0')
	//		{
	//			radius += (quelle.at(k) - '0') / pow(10, l);
	//			l++;
	//			k++;
	//		}
	//	}
	//}

	
		std::istringstream str(quelle);

		str >> *this;
}

//Methoden
void Circle::setCentre(const Point& neuCentre)
{
	centre.setX (neuCentre.getX());
	centre.setY (neuCentre.getY());
}
Point Circle::getCentre()const 
{
	return centre;
}
void Circle::setRadius(double neuRadius)
{
	radius = neuRadius;
}
double Circle::getRadius()const
{
	return radius;
}
void Circle::move(double dx, double dy) 
{
	centre.setX(centre.getX() + dx);
	centre.setY(centre.getY() + dy);
}
void Circle::print(bool absatz) const
{
	if (absatz == true)
	{
		cout << "<(" << centre.getX() << "|" << centre.getY() << "), " <<radius<<">"<< endl;
	}
	else
	{
		cout << "<(" << centre.getX() << "|" << centre.getY() << "), " << radius << ">";
	}
}
std::string Circle::toString()const {
	std::stringstream s;
	s << "<(" << centre.getX() << "|" << centre.getY() << "), " << radius << ">";
	return s.str();
}

//Operatorüberladungen
std::ostream& operator<<(std::ostream& stream,const Circle& a)
{
	stream << a.toString();
	return stream;
}

void operator >>(std::istringstream& str, Circle& a)
{
	//"<(5.5, 6.6), 10.1>"
	char c;
	double x, y;
	str >> c >> c >> x >> c >> y >> c >> c >> a.radius >> c;
	a.centre.setX(x);
	a.centre.setY(y);


}




