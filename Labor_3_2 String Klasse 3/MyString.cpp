#include "MyString.hpp"
#include <fstream>
#include <iostream>

using namespace std;

//Konstruktor aufruf ohne Parameter
MyString::MyString()
{
	strCapacity = 0;
	strSize = 0;
	strPtr = new char[strCapacity + 1];
	strPtr[strCapacity] = '\0';
}

//Konstruktor mit Übergabewert = Konvertierkonstruktor
MyString::MyString(const char _Array[])
{
	/* Größe herausfinden */
	strCapacity = strlen(_Array);

	/* Array allokieren und zero-terminieren */
	strSize = strCapacity;
	strPtr = new char[strCapacity + 1];
	strPtr[strCapacity] = '\0';

	/* Array kopieren */
	for (int i = 0; i < strCapacity; i++)
	{
		strPtr[i] = _Array[i];
	}
}

// Kopierkonstruktor (nimmt referenz oder pointer des originals)
MyString::MyString(const MyString& orig)
{
	strCapacity = orig.strCapacity;
	strSize = orig.strSize;
	strPtr = new char[strCapacity + 1];
	memcpy(strPtr, orig.strPtr, strCapacity + 1);
}

/*Destrukto zum Speicherfreigeben*/
MyString::~MyString()
{
	delete strPtr; // Speicher freigegeben
}

//Methoden

/*Ermöglich es, zusätzlichen speicher zu reservieren. Es wird eine vollständige (DEEP) Kopie erstellt.*/
void MyString::reserve(std::size_t c)
{
	if (c > strCapacity)
	{
		char* tmp = new char[c + 1];
		memcpy(tmp, strPtr, strSize);
		tmp[strSize] = '\0';
		//delete strPtr; //Warum geht das bei append aber nicht bei +
		char* bulshit;
		bulshit = strPtr;
		strPtr = tmp;
		delete bulshit;
	}
}


MyString& MyString::append(const MyString & other) {
	
	std::size_t nCapacity = this->strSize + other.strSize;
	reserve(nCapacity);
	for (int j = strSize; j < nCapacity; j++) {
		strPtr[j] = other.strPtr[j - strSize];
	}
	strPtr[nCapacity] = '\0';
	this->strSize = nCapacity;
	this->strCapacity = nCapacity;
	return *this;
}

/* Überschreibt den String 1 mit String 2 */
MyString& MyString::assign(const MyString & other)
{
	strCapacity = other.strCapacity;
	strSize = other.strSize;
	delete strPtr;

	char* tmp = new char[strCapacity + 1];
	memcpy(tmp, other.strPtr, strSize);
	tmp[strSize] = '\0';

	strPtr = tmp;

	return *this;
}


// Das setzen von const verhindert das verändern des Objektzustandes (verändern von Attributen)
// Ermöglich gleichzeitig das aufrufen dieser Funktion von einem const Objekt (siehe copy ctor)
int MyString::size() const
{
	return strSize;
}

int MyString::capacity() const
{
	return strCapacity;
}

void MyString::clear() {
	strCapacity = 0;
	strSize = 0;
	delete strPtr;
	strPtr = new char[strCapacity + 1];
	strPtr[strCapacity] = '\0';
}

bool MyString::empty() const
{
	return strSize == 0;
}

const char* MyString::c_str() const
{
	return strPtr;
}

/*at Funktion. Gibt den wert an der eingegbenen Stelle aus, außedem kann der Wert an einer gewünschten Stelle auch verändert werden.
ein zugriff außerhalb des Definierten arrays wird "abgefangen"*/
char& MyString::at(size_t i)
{
	if (i > strCapacity)
	{
		hack = '\0';
		return hack;
	}
	else
	{
		return strPtr[i];
	}
}


MyString MyString::operator +(const MyString & a) const {

	MyString temp(this->strPtr);
	temp.append(a);
	return temp;

}


char& MyString::operator [](int pos) {

	if (pos > strCapacity)
	{
		hack = '\0';
		return hack;
	}
	else
	{
		return strPtr[pos];
	}
}

MyString& MyString::operator =(const MyString & a) {
	strCapacity = a.strCapacity;
	strSize = a.strSize;
	delete strPtr;

	char* tmp = new char[strCapacity + 1];
	memcpy(tmp, a.strPtr, strSize);
	tmp[strSize] = '\0';
	strPtr = tmp;

	return *this;
}

bool MyString::operator ==(const MyString & a)const {
	bool check = 1;
	if (strSize == a.size())
	{
		for (size_t i = 0; i < strSize; i++)
		{
			if (strPtr[i] == a.strPtr[i]) { check = 1; }
			else check = 0;
			if (check == 0) { break; }
		}
		return check;
	}
	return 0;
}

std::ostream& operator<<(std::ostream & stream, const MyString & a) 
{
	stream << a.c_str();
	return stream;
}