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
	//while (_array[strcapacity] != '\0')
	//{
	//	strcapacity++;
	//}

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

//g)
/*Ermöglich es, zusätzlichen speicher zu reservieren. Es wird eine vollständige (deep) Kopie erstellt.*/
void MyString::reserve(std::size_t c)
{
	if (c > strCapacity)
	{
		char *tmp = new char[c];
		memcpy(tmp, strPtr, strSize);
		tmp[strSize] = '\0';
		delete strPtr;
		strPtr = tmp;
	}
}

// x) 
/*Hängt zwei Strings aneinander. Greift auf die Funktion reserve zurück.*/
MyString& MyString::append(MyString& other) {
	/*
	Return "this" um Functionchaining zu ermöglichen
	BSP:
		obj1 = MyString("kajshdkjashd");

		obj2 = MyString("kajshdkjashd");
		obj3 = MyString("kajshdkjashd");

		obj1.append(obj2.append(obj3));
	*/

	std::size_t newCapa = strSize + other.strSize;
	reserve(newCapa);
	for (int i = strSize; i < strCapacity; i++)
	{
		strPtr[i] = other.strPtr[i - strSize];
	}
	strPtr[strCapacity] = '\0';

	return *this;
}

//x)
/* Überschreibt den String 1 mit String 2 */
MyString& MyString::assign(const MyString& other)
{
	strCapacity = other.strCapacity;
	strSize = other.strSize;
	// v. andreas
	delete strPtr;
	strPtr = new char[strCapacity + 1];
	strncpy_s(strPtr, strCapacity + 1, other.strPtr, strCapacity + 1);
	return *this;
}

//k)
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

//l)
void MyString::clear() {
	strCapacity = 0;
	strSize = 0;
	delete strPtr;
	strPtr = new char[strCapacity + 1];
	strPtr[strCapacity] = '\0';
}

//m)
bool MyString::empty() const
{
	return strSize == 0;
}

const char* MyString::c_str() const
{
	return strPtr;
}

//n)
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

//x)
/*Destrukto zum Speicherfreigeben*/
MyString::~MyString()
{
	delete strPtr; // Speicher freigegeben
	strSize = 0;
	strCapacity = 0;
}




