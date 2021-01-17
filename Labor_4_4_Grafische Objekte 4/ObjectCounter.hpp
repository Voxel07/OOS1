#pragma once
#include <iostream>

class ObjectCounter
{
private:
	static int id_count;
	static int number;
	static int maxId;
	const int id;

public:
	//Ctor
	ObjectCounter();
	~ObjectCounter();

	//Methoden   
	int getId();
	int getMaxId();
	static int getNumber();

	

};