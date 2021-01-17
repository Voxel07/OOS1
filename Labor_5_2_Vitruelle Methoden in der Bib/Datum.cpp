#include "Datum.hpp"

Datum::Datum(int t, int m, int j)
	:tag(t),monat(m),jahr(j) 
{

}

Datum::Datum(const std::string& quelle) {

	std::istringstream str(quelle);
	char c;
	str >> tag >> c >> monat >> c >> jahr;

}

Datum::Datum(const char* quelle) {

	std::istringstream str(quelle);
	char c;
	str >> tag >> c >> monat >> c >> jahr;
}

Datum Datum::operator+(int monate) {
	monat += monate;
	if (monat >= 12) {
		jahr += 1;
		monat -= 12;
	}
	/*
	tag += tage;
	if (tag == 31 && (monat == 1|| monat == 3|| monat == 5|| monat == 7|| monat == 8|| monat == 10|| monat == 12))
	{
		tag = 1;
		monat += 1;
	}
	if (tag == 30 && (monat == 4|| monat == 6|| monat == 9|| monat == 11))
	{
		tag = 1;
		monat += 1;
	}
	if (tag == 28 && monat == 2)
	{
		tag = 1;
		monat += 1;
	}

	if (monat >= 12)
	{
		jahr += 1;
		monat = 1;
	}
	*/
	return *this;
}

std::ostream& operator<<(std::ostream& stream, const Datum& dat) {
	stream << dat.tag << '.' << dat.monat << '.' << dat.jahr;
	return  stream;
}
