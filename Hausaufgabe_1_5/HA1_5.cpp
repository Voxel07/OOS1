// Vergleich von Deklaration, Enumeration und Typumwandlung
// in C und C++
// Fehler C | C++

enum  enumeration { erster, zweiter, dritter, vierter }; // Z1 |
//enum class marks { ’1’, ’2’, ’3’, ’4’, ’5’, ’6’ }; // Z2 |
enum class class1 { DIETER, HANS, PETER, KAI }; // Z3 |
enum  class2 { ANDREA, KAI, SABINE, ZOE }; // Z4 | Kai zweimal class
enum  sports { FUSSBALL, BASKETBALL, HOCKEY };// Z5 |

int main(void) // Z7 |
{
	/* So können beide KAI verwendet werden
	class1::KAI;
	class2::KAI;
	*/
	int i; // Z8 |
	sports mysport; // Z9 |
	//enum class sports mysport; // Z10 |
	mysport = FUSSBALL; // Z11 |mysport = FUSSBALL; 
	mysport = (sports)(int(FUSSBALL) + 1); // Z12 |FUSSBALL + 1
	mysport = sports (1); // Z13 |casten !!!!!
	mysport = sports(10); // Z14 |
	mysport = sports(mysport + 1); // Z15 |
	mysport = sports(mysport + 1); // Z16 |
	float f; // Z17 |
	for (i = FUSSBALL; i <= HOCKEY; i++) // Z18 |
		mysport = sports(i); // Z19 |
	for (int k = FUSSBALL; k <= HOCKEY; k++) // Z20 |
		mysport = sports(k); // Z21 |
	return 0; // Z22 |
}
