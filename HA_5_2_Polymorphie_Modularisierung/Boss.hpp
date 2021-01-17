// Datei: Boss.hpp

#pragma once

#include "Angestellte.hpp"

class Boss : public Angestellte
{
	double bossGehalt;
public:
	Boss(const char *, const char *, double = 0.0);
	void setBossGehalt( double );
	virtual double einkommen() const;
	virtual void print() const;
};
