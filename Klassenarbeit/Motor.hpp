#pragma once
#include <sstream>
#include <string>

class Motor {
private:
	//a
	std::string m_typ;
	//b
	static int s_motorenAnz;
	//c
	const int m_id;
	//d
	int m_laufleistung;
	//e
	static int s_zaehler;

	/*friend class Fahrzeuge;*/
	
public:
	//f
	Motor(std::string typ, int laufleistung = 0);
	//g
	Motor(Motor const & quelle);
	//h
	std::string to_string()const;
	//i
	void operator += (int laufleistung);
	//j
	int get_laufleistung()const;
	//k
	int gebaute_motoren()const;
	//l
	friend std::ostream& operator << (std::ostream& stream,  Motor const& a);
	
	//Damit das Programm geht
	Motor();



};