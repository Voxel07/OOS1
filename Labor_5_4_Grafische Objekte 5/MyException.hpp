#pragma once
#include <string>
#include <iostream>
class MyException {

private:
	std::string fehler;

public:
	MyException(std::string f) :fehler(f)
	{
		
	}
	void print() {
		std::cout << fehler;
	}

};