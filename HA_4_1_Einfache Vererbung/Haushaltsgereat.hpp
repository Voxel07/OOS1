#pragma once
#include <string>
#include <iostream>

class Haushaltsgeraet {

private:
	const std::string name;
	double gewicht;

public:
	//Ctor
	Haushaltsgeraet(std::string _name, double _gewicht);

	//Methoden
	std::string getName();
	double getGewicht();
	void setGewicht(double newWeight);
	void print();




};