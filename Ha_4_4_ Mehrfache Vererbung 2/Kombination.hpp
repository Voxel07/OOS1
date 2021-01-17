#pragma once
#include "Gefrierschrank.hpp"
#include "Kuehlschrank.hpp"
class Kombination : public Kuehlschrank, public Gefrierschrank {

private:
	//std::string m_name;

public:
	//Ctor
	Kombination(std::string _name,double _gewicht,double _volumenG, double _volumenK);


	//Methoden
	void print();
};