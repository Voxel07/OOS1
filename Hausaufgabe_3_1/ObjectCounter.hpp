#pragma once

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
	int getNumber();

	

};