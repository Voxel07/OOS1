#pragma once
#include "Haushaltsgereat.hpp"

class Gefrierschrank :private Haushaltsgeraet {

private:
	double volumen;


public:
	//Ctor
	Gefrierschrank(double _volumen = 888);
	Gefrierschrank(double _volumen, std::string _name, double _gewicht);
	//Methoden

	void setVolumen(double _volumen);
	double getVoluemn();

	void print();

};