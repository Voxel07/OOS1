#include "Fifo.hpp"

int main()
{
	Fifo speicher1;
	char a = 'a';
	/*while (speicher1.isFull()!=true)
	{
		a++;
		speicher1.pusch(a);
		std::cout << "wPos: " << speicher1.getWPos() << std::endl;
	}
	while (speicher1.isEmpty()!=true)
	{
		std::cout << speicher1.pop();
		std::cout << "rPos: " << speicher1.getRPos() << std::endl;
	}*/

	std::cout << std::endl;

	for (size_t i = 0; i < 5; i++)
	{
		speicher1.pusch(a);
		a++;
	}
	std::cout << "wPos: " << speicher1.getWPos() << std::endl;
	/*std::cout << "wPos: " << speicher1.getWPos() << std::endl;
	std::cout << "rPos: " << speicher1.getRPos() << std::endl;*/
	a++;
	speicher1.pusch(a);
	std::cout << "wPos: " << speicher1.getWPos() << std::endl;
	std::cout << "rPos: " << speicher1.getRPos() << std::endl;
	a++;
	speicher1.pusch(a);
	std::cout << "wPos: " << speicher1.getWPos() << std::endl;
	std::cout << "rPos: " << speicher1.getRPos() << std::endl;
	
	std::cout << speicher1.pop()<<std::endl;
	std::cout << "rPos: " << speicher1.getRPos() << std::endl;
	std::cout << speicher1.pop() << std::endl;
	std::cout << "wPos: " << speicher1.getWPos() << std::endl;
	std::cout << "rPos: " << speicher1.getRPos() << std::endl;

	return 1;
}