#include "Motor.hpp"


int Motor::s_zaehler = 0;//in einer Woche
int Motor::s_motorenAnz = 0;//gesammte Zeit



	//f
	Motor::Motor(std::string typ, int laufleistung)
		:m_id(s_motorenAnz), m_typ(typ), m_laufleistung(laufleistung) 
	{
		s_zaehler++;
		s_motorenAnz++;
	}
	//g
	Motor::Motor(Motor const& quelle):m_id(s_motorenAnz)
	{
		this->m_typ = quelle.m_typ;
		this->m_laufleistung = 0;
		s_zaehler++;
		s_motorenAnz++;

	}
	
	//h
	std::string Motor::to_string()const {
		std::stringstream str;
		str << "Motorentyp: " << m_typ << " Id: " << m_id;
		return str.str();
	}
	//i
	void Motor::operator += (int laufleistung) {
		this->m_laufleistung += laufleistung;
		
	}
	//j
	int Motor::get_laufleistung()const {
		return m_laufleistung;
	}
	//k
	int Motor::gebaute_motoren()const {
		return s_motorenAnz;
	}
	//l
	std::ostream& operator << (std::ostream& stream,  Motor const& a) {
		std::stringstream astr;
		astr << a.to_string() << " Laufleistung " << a.m_laufleistung
			<< " Gebaute Motoren (ges.): " << Motor::s_motorenAnz
			<< " Gebaute Motren (woche): " << Motor::s_zaehler << std::endl;
		stream << astr.str();
		return stream;
	}

