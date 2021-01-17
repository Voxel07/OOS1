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

};