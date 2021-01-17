#include <iostream>

class Fifo
{
private:
	//a)
	int maxSize;
	//b)
	int number;
	//c)
	char *charPrt;
	//d)
	int wPos;
	int rPos;

public:
	//ctor
	//e)
	Fifo()
	{
		maxSize = 10;
		number = 0;
		wPos = 0;
		rPos = 0;

		charPrt = new char[maxSize];
	}
	//f)
	~Fifo()
	{
		delete charPrt;
	}

	//Methoden

	//g)
	int getWPos() const;
	int getRPos() const;
	//h)
	bool isEmpty() const;
	bool isFull() const;
	//i)
	int pusch(char zeichen);
	//j)
	char pop();
	
	



};

