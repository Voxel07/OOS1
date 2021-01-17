#include <string>
#include <iomanip> /* xxx */
#include <iostream> /* xxx */

using namespace std;

int main()
{
	
	double d = 1.234;
	cout << "Nr\tOct\tHex\tString\tFixed\tScientific " << endl;
	for (int k = 1; k < 11; k++)
	{
		cout.right;
		cout << showbase;
		cout <<dec<<k;
		cout <<"\t" <<  oct << k;
		cout <<"\t" << hex << k;
		cout << "\t" << setw(8) <<setfill('+')<< string(k % 5 + 1, '*');//<<string(6-k%5,'+');
		cout << '\t' << fixed <<setprecision(5)<< d;
		cout <<'\t'<< scientific << d;

		d = d * -2;
		cout << endl;
	}

	return 0;
}