#include <iostream>

using namespace std;

char s[4];

char & select(int i, const char & c)
{
	s[i] = c;
	return s[i];
}

int main(void)
{
	select(0, 'a');
	select(1, 'b');
	select(2, 'c'); // s[0]=a s[1]=b s[2]=c s[3]= leer
	for (int i = 0; i < 4; i++)
	{
		cout << s[i];
		if (i >= 3) cout << "\n";
	}
	select(3, 'd'); // Zustand 1: s[0]=a s[1]=b s[2]=c s[3]=d
	
	select(0, 'A'); // Zustand 2: s[0]=A s[1]=b s[2]=c s[3]=d
	
	select(0, 'A') = '0'; // Zustand 3: s[0]=0 s[1]=b s[2]=c s[3]=d
	
	select(1, 'B') = select(2, 'C'); // Zustand 4: s[0]=0 s[1]="B" s[2]=C s[3]=d | -> s[0]=0 s[1]="C" s[2]=C s[3]=d <-Richtig 
	
	select(1, select(2, '2')) = select(3, '3'); //Zustand 5 s[0]=0 s[1]=3 s[2]=2 s[3]=3 
	
	return 0;

}