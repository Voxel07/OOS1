#pragma once
#include "ObjectCounter.hpp"

class DrawingObject :public ObjectCounter{
private:

	
public:
	//Ctor
	DrawingObject();
	~DrawingObject();

	//Methode
	static int getNumber();

	//Virtuelle Methoden
	virtual void  print(bool = false) const = 0;
};