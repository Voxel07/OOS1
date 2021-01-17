#ifndef MyString_hpp
#define MyString_hpp



#include <iostream>
#include <array>
#include <cstddef>
#include <cstring>



class MyString
{
private:
	std::size_t strCapacity;
	std::size_t strSize;
	char* strPtr;
	char hack;

public:
	//Konstruktor aufruf ohne Parameter
	MyString();
	//Konstruktor mit Übergabewert
	MyString(const char _Array[]);

	MyString(const MyString& orig);

	//Destruktor
	~MyString();

	//Methoden
	void clear();
	void reserve(std::size_t c);

	const char* c_str() const;
	int size() const;
	int capacity() const;
	bool empty() const;
	char& at(size_t);

	MyString& append(MyString& other);
	MyString& assign(const MyString& other);
};

#endif