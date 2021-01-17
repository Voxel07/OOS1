#include "MyVector.hpp"
#include <fstream>
#include <iostream>

using namespace std;

//Konstruktor aufruf ohne Parameter
MyVector::MyVector()
{
	m_vCapacity = 0;
	m_vSize = 0;
	m_vPtr = new MyVectorData*[m_vCapacity]; // !!
	//m_vPtr[m_vCapacity] = nullptr;
}

// Kopierkonstruktor (nimmt referenz oder pointer des originals)
MyVector::MyVector(const MyVector& orig) //MyVector V2(V1 (orig));
{
	m_vSize = 0;
	m_vCapacity = 0;
	m_vPtr = new MyVectorData * [m_vCapacity];

	for (size_t i = 0; i < orig.m_vSize; i++)
	{
		this->push_back(orig.at(i));
	}
}

/*Destrukto zum Speicherfreigeben*/
MyVector::~MyVector()
{
	delete m_vPtr; // Speicher freigegeben
}

//Methoden

/*Ermöglich es, zusätzlichen speicher zu reservieren. Es wird eine vollständige (DEEP) Kopie erstellt.*/
void MyVector::reserve(std::size_t c)
{
	if (c > m_vCapacity)
	{
		MyVectorData** tmp = new MyVectorData*[c];
		memcpy(tmp, m_vPtr, m_vSize);
		MyVectorData* bulshit;
		bulshit = *m_vPtr;
		m_vPtr = tmp;
		delete bulshit;
	}
}


MyVector& MyVector::append(const MyVector & other) 
{
	for (size_t i = 0; i < other.m_vSize; i++)
	{
		this->push_back(other.at(i));
	}
	return *this;
}




// Das setzen von const verhindert das verändern des Objektzustandes (verändern von Attributen)
// Ermöglich gleichzeitig das aufrufen dieser Funktion von einem const Objekt (siehe copy ctor)
int MyVector::size() const
{
	return m_vSize;
}

int MyVector::capacity() const
{
	return m_vCapacity;
}

void MyVector::clear() {
	m_vCapacity = 0;
	m_vSize = 0;
	delete m_vPtr;
	m_vPtr = new MyVectorData*[m_vCapacity+1];
	m_vPtr[m_vCapacity] = '\0';
	
}

bool MyVector::empty() const
{
	return m_vSize == 0;
}

/*at Funktion. Gibt den wert an der eingegbenen Stelle aus, außedem kann der Wert an einer gewünschten Stelle auch verändert werden.
ein zugriff außerhalb des Definierten arrays wird "abgefangen"*/
MyVectorData& MyVector::at(size_t i)const
{
	if (i > m_vCapacity)
	{
		//std::cout << "Zugriff außerhal des Arrays"<<std::endl;
		throw("So nicht Zugriff außerhal des Arrays \n ");
		
	}
	else
	{
		return *m_vPtr[i];
	}

	
}

void MyVector::push_back(const MyVectorData& d) {

	//Kopieren d
	
	MyVectorData *klon = d.clone();
	if (m_vSize >= m_vCapacity)
	{
		//std::cout << "Verktor war zu klein und wurde erweitert" << std::endl;
		m_vCapacity += 1;
		MyVectorData** tmp = m_vPtr;
		m_vPtr = new MyVectorData * [m_vCapacity]; // !!
		for (size_t i = 0; i < m_vSize; i++) {
			m_vPtr[i] = tmp[i];
		}
		delete[] tmp;
	}
	m_vPtr[m_vSize] = klon;
	m_vSize++;


	

}
void MyVector::print(bool b) const
{
	for (size_t i = 0; i<m_vSize;i++)
	{
		m_vPtr[i]->print(0);
	}
	if (b)
	{
		std::cout << std::endl;
	}
	
}
