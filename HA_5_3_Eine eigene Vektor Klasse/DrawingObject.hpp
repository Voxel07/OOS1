#pragma once
#include "ObjectCounter.hpp"
#include"MyVectorData.hpp"

class DrawingObject :public ObjectCounter,public MyVectorData{
private:

	
public:
	//Ctor
	DrawingObject();
	~DrawingObject();

	//Methode
	static int getNumber();

};