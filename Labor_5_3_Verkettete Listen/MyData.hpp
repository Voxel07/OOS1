#pragma once
#include <iostream>
extern bool debug;
class MyData
{
public:

	MyData() { if (debug) { std::cout << "Standart Konstruktor der Klasse MyData" << std::endl; } };
	virtual ~MyData() { if (debug) { std::cout << "Standart Konstruktor der Klasse MyData" << std::endl; } };

	//Methoden
	virtual void print(bool doEndl = true) const = 0;
	virtual MyData* clone()const = 0;
	virtual MyData& operator = (const MyData& temp) 
	{
		return *this;
	}

private:

};