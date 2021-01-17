#pragma once
#include <iostream>

class Kunde {
private:
	//Static variablen
	static int anzahl;
	
	//Variablen
	const char *name;
	const char *ort;
	int *alter; 
	double umsatz;
	int transaktion;
	int id;

public:
	//ctor
	
	Kunde(const char* _name = "Max" ,const char* _ort = "Mustermann", int _alter = 99);
	Kunde(const Kunde& org);
	~Kunde();

	//Methoden
	void print();
	void kaufe(double u);
	int getAnzahl();
};