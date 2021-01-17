#include "Rectangle.hpp"

//Standartkonstruktor
Rectangle::Rectangle():m_EckeO(0,0),m_EckeU(1,1){}


//Konvertierkonstruktor
Rectangle::Rectangle(Point p1, Point p2)
	:m_EckeO(p1),m_EckeU(p2) 
{

}

Rectangle::Rectangle(const std::string& quelle) {
	
	std::istringstream str(quelle);
	//[(x1,y1), (x2,y2)]
	if (quelle.length() < 11)
	{
		throw MyException("nicht genügend Zeichen");
	}
	else if (std::isdigit(quelle[2]) && std::isdigit(quelle[4]) && std::isdigit(quelle[8]) && std::isdigit(quelle[10]))
	{
		std::istringstream str(quelle);

		str >> *this;

	}
	else throw MyException("So geht das nicht");
}

//Methoden

void Rectangle::print(bool b)const {

	std::cout << *this;
	if(b)
		std::cout<< std::endl;
}

std::string Rectangle::toString()const {

	std::stringstream ausgabe;
	ausgabe << "[(" << m_EckeO.getX() << "," << m_EckeO.getY() << "), " << "(" << m_EckeU.getX() << "," << m_EckeU.getY() << ")]";
	return ausgabe.str();
}

//Operatorüberladungen
std::ostream& operator<<(std::ostream& stream, const Rectangle& a)
{
	stream << a.toString();
	return stream;
}

void operator >>(std::istringstream& str, Rectangle& a)
{
	// [(x1,y1), (x2,y2)]

	char c;
	double x1, y1, x2, y2;

	str >> c >> c >> x1 >> c >> y1 >> c >> c >> c >> x2 >> c >> y2;
	a.m_EckeO.setX(x1);
	a.m_EckeO.setY(y1);
	a.m_EckeU.setX(x2);
	a.m_EckeU.setY(y2);
}