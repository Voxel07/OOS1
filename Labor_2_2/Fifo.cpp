#include "Fifo.hpp"

int Fifo::getWPos() const
{
	return wPos;
}
int Fifo::getRPos() const
{
	return rPos;
}
bool Fifo::isEmpty() const  
{
	return number == 0;
}
bool Fifo::isFull() const
{
	return number == maxSize;
}

int Fifo::pusch(char zeichen)
{
	if (number == maxSize)
	{
		return -1;
	}
	else if (wPos < maxSize)
	{
		charPrt[wPos] = zeichen;
		wPos++;
		number++;
	}
	else if (wPos == maxSize)
	{
		for (wPos = 0; wPos < maxSize;wPos++)
		{
			if (charPrt[wPos] == NULL)
			{
				charPrt[wPos] = zeichen;
			}	
		}
	}
}
char Fifo::pop()
{
	char temp;
	if (number == 0)
	{
		return '\0';
		rPos = 0;
	}
	else
	{
	temp = charPrt[rPos];
	charPrt[rPos] = NULL;
	number--;

		if (rPos == maxSize)
		{
			rPos = 0;
		}
		else rPos++;
	}
	

	return temp;
}
