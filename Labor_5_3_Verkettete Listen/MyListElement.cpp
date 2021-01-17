#include "MyList.hpp"

extern bool debug;

MyList::MyListElement::MyListElement():m_next(nullptr),m_data(nullptr){
	if (debug) { std::cout << "Standart Konstruktor der Klasse MyListElement" << std::endl; }
}

MyList::MyListElement::~MyListElement(){ if (debug) { std::cout << "Destruktor der Klasse MyListElement" << std::endl; } }

void MyList::MyListElement::setNext(MyListElement& element)
{
	m_next = &element;
}
MyList::MyListElement* MyList::MyListElement::getNext() 
{
	return m_next;
}

void MyList::MyListElement::setData(MyData& data)
{
	m_data = &data;
}
MyData* MyList::MyListElement::getData() 
{ 
	return m_data;
}