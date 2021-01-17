#define _CRT_SECURE_NO_WARNINGS
//
//#include <math.h>
//#include <stdio.h>
//
//int basis, exponent;
//
//int main(void) 
//{
//	printf("\nBasis = ");
//	scanf("%d", &basis);
//	printf("\nExponent = ");
//	scanf("%d", &exponent);
//	printf("\nErgebnis: \n");
//	printf("\n%d^%d = %d\n", basis, exponent,
//		int(pow(double(basis), double(exponent))));
//	return 0;
//}


#include <cmath>
#include <iostream>

using namespace std;
int basis, exponent;

int main(void) {
	cout << endl << "Basis = ";
	cin >> basis;
	cout << "Exponent = ";
	cin >> exponent;
	cout << endl << "Ergebnis: \n\n"; // absätze mit \n eingefügt
	cout << basis << "^" << exponent << " = " << pow(basis, exponent); // zusätzliches "^"eingefügt
	return 0;
}

