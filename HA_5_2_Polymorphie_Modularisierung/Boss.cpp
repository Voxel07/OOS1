// Datei: Boss.cpp

#include <iostream>
using namespace std;
#include "Boss.hpp" 

Boss::Boss( const char * vn, const char * nn, double g)
	: Angestellte(vn, nn)
{
	setBossGehalt( g );	
}

void Boss::setBossGehalt( double g)
{
	bossGehalt = (g > 0) ? g : 0;
}

double Boss::einkommen() const
{
	return bossGehalt;
}

void Boss::print() const
{
	cout << "\nBoss; ";
	Angestellte::print();
}
