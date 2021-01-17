# include <iostream>
#include <iostream>
using namespace std;



double trapezFleache(double a)
{ //Quadrat
	return a*a;
}
double trapezFlaeche(double a, double b)
{//Rechteck
	return a * b;
}
double trapezFlaeche(double a, double b, double Winkel)
{// Dreieck
	return b * (a*sin(Winkel));
}
double trapezFlaeche(double a, double b, double c, double Winkel)
{ //Trapez
	return 0.5*(a + c)*b*sin(Winkel);
}

int main(void)
{
	cout << "Quadrat: " << trapezFleache(2.0) << endl;
	cout << "Rechteck: " << trapezFlaeche(4.0,5.0) << endl;
	cout << "Dreieck: " << trapezFlaeche(3.0,4.0,45.0) << endl;
	cout << "Trapez: " << trapezFlaeche(2.0,3.5,4.0,45.0) << endl;
}