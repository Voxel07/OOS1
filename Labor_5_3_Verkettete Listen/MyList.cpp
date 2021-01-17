#include "MyList.hpp"

extern bool debug;

//Standartkonstruktor
MyList::MyList()
	: m_last(nullptr),m_first(nullptr),m_listsize(0){
	if (debug) { std::cout << "Standart Konstruktor der Klasse MyList" << std::endl; }
}

//Kopierkonstruktor
MyList::MyList(const MyList& orgi)
	: m_last(nullptr), m_first(nullptr), m_listsize(0)
{
	if (debug) { std::cout << "Kopier Konstruktor der Klasse MyList" << std::endl; }
	
	MyListElement* Kopie = orgi.m_first;
	for (unsigned int i = 0; i < orgi.m_listsize; i++)
	{
		MyListElement* tmp = new MyListElement;
		tmp->m_data = Kopie->m_data->clone();
		tmp->m_next = 0;
		if (m_first == 0) 
		{
			m_last = m_first = tmp;
		}
		else 
		{
			m_last->m_next = tmp;
			m_last = tmp;
		}
		m_listsize++;
		Kopie = Kopie->m_next;
		//delete tmp; //Wo kann ich tmp löschen ?
		//Macht das der Destruktor für mich ?
	}
	
}
//Destruktor
MyList::~MyList()
{
	if (debug) { std::cout << "Destruktor der Klasse MyList" << std::endl; }
}

//Element anhängen
void MyList::push_back(const MyData& data) {
	MyListElement* tmp = new MyListElement();
	tmp->m_data = data.clone();
	tmp->m_next = 0;
	if (m_first == 0) {
		m_last =m_first = tmp;
	}
	else {
		m_last->m_next = tmp;
		m_last = tmp;
	}
	//delete tmp //Macht alles kaputt warum ? Wo kann ich den köschen ?
	m_listsize++;
}
//Löscht letztes Element
void MyList::pop_back() {
	MyListElement* tmp = m_last;

	if (m_listsize == 1)
	{
		m_first = m_last = 0;
	}
	else
	{
		for (size_t i = 0; i < m_listsize; i++)
		{
			m_last = m_first->m_next;
		}
		delete tmp;
		tmp = 0;
		m_listsize--;
	}
}
//Erstes element zurückgeben
MyData& MyList::front()const {
	return *m_first->m_data;
}
//Letztes element zurückgeben
MyData& MyList::back()const {
	return *m_last->m_data;
}

//Liste Löschen
void MyList::clear() {
	MyListElement* tmp = m_first;
	
	while (tmp != nullptr)
	{
		m_first = m_first->m_next;
		delete tmp;
		
		tmp = m_first;
		m_listsize--;
	}
	m_last = m_first = nullptr;
}

bool MyList::empty()const {

	return m_listsize == 0;
}

unsigned int MyList::size() const{
	return m_listsize;
}

void MyList::print()const 
{
	MyListElement* tmp = m_first;

	for (size_t i = 0; i < m_listsize; i++) 
	{	
		tmp->m_data->print();
		tmp = tmp->m_next;	
	}
}


//Operatorüberladungen Funktionieren zwar compieler ist aber nicht glücklich warum ?
MyList& MyList::operator=(const MyList& list)
{
	MyList tmp(list);
	clear();
	//*this = tmp;
	m_first = tmp.m_first;
	m_last = tmp.m_last;
	m_listsize = tmp.m_listsize;
	return *this;
}

MyList MyList::operator+(const MyList& list) {
	MyList tmp(list);
	m_last->m_next = tmp.m_first;
	m_last = tmp.m_last;
	m_listsize += tmp.m_listsize;
	return *this;
}