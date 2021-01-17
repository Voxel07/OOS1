// Vergleich von Deklaration, Enumeration und Typumwandlung
// in C und C++
// Fehler C | C++

enum enumeration { eins, zwei, drei, vier }; // Z1 | Keine Zahle ma anfang der Variablen für c++
//enum marks { ’1’, ’2’, ’3’, ’4’, ’5’, ’6’ }; // Z2 |
enum class1 { DIETER, HANS, PETER, KAI }; // Z3 |
enum class2 { ANDREA, KAII, SABINE, ZOE }; // Z4 | KAI zwei mal deklariert
enum sports { FUSSBALL, BASKETBALL, HOCKEY };// Z5 |

int main(void) // Z7 |
{
	int i; // Z8 |
	sports mysport; // Z9 |
	//enum sports mysport; // Z10 |unnötig
	mysport = FUSSBALL; // Z11 |
	mysport = sports (FUSSBALL + 1); // Z12 |
	mysport = sports (1); // Z13 |
	//mysport = sports(10); // Z14 | Nicht sinnvoll da nur enum 1-3
	mysport = sports (mysport + 1); // Z15 |
	mysport = sports(mysport + 1); // Z16 |
	float f; // Z17 |
	for (i = FUSSBALL; i <= HOCKEY; i++) // Z18 |
		mysport = sports(i); // Z19 |
	for (int k = FUSSBALL; k <= HOCKEY; k++) // Z20 |
		mysport = sports(k); // Z21 |
	return 0; // Z22 |
}
