#include <iostream>
#include <array>
#include <cstddef>
#include <cstring>

#include "MyVectorData.hpp"

class MyVector
{
private:
	std::size_t m_vCapacity;
	std::size_t m_vSize;
	MyVectorData** m_vPtr;
	//char hack;

public:
	//Konstruktor aufruf ohne Parameter
	MyVector();
	MyVector(const MyVector& orig);

	//Destruktor
	~MyVector();

	//Methoden
	void clear();
	void reserve(std::size_t c);
	int size() const;
	int capacity() const;
	bool empty() const;
	MyVectorData& at(size_t)const;
	MyVector& append(const MyVector& other);

	void push_back(const MyVectorData& d);
	void print(bool=true) const;
	

	//Operatorüberladungen
	MyVector operator +(const MyVector& a) const;
	MyVectorData& operator [](int pos);
	bool operator ==(const MyVector& a) const;
	MyVector& operator =(const MyVector& a);
	friend std::ostream& operator << (std::ostream& stream, const MyVector& a);


};

