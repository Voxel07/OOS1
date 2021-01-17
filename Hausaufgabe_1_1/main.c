#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	char eingabe;	//für's Zahlenformat
	int num;		//für die Zahl

	printf("Zahlenformat eingeben:");
	scanf("%c", &eingabe);

	switch (eingabe)
	{
	case 'd':
		scanf("%d",&num);
		printf("Die eingegebene Zahl ist in dezimal: %i", num);
		break;

	case 'o':
		scanf("%o", &num);
		printf("Die eingegebene Zahl ist in dezimal: %i", num);
		break;

	case 'x':
		scanf("%x", &num);
		printf("Die eingegebene Zahl ist in dezimal: %i", num);
		break;

	default:
		printf("default happend!");
		break;
	}


	return 0;
}