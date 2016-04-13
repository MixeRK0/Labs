#include<stdio.h>
#include<conio.h>
#include<math.h>

int HowManyDays(int Day, int Month, int Year) {

    int i = 0, NumberOfDays = 0;

	NumberOfDays += Day;
	for (i = 1; i < Month; i++) {
		switch (i) {
		case 1: NumberOfDays += 31;
			break;
		case 2: NumberOfDays += 28;
			if (Year % 4 == 0) NumberOfDays += 1; 
			break;
		case 3: NumberOfDays += 31;
			break;
		case 4: NumberOfDays += 30;
			break;
		case 5: NumberOfDays += 31;
			break;
		case 6: NumberOfDays += 30;
			break;
		case 7: NumberOfDays += 31;
			break;
		case 8: NumberOfDays += 31;
			break;
		case 9: NumberOfDays += 30;
			break;
		case 10: NumberOfDays += 31;
			break;
		case 11: NumberOfDays += 30;
			break;
		case 12: NumberOfDays += 31;
			break;
		}
	}
	return(NumberOfDays);
}
	 
void main() {

	int Day1stD, Month1stD, Year1stD, HowManyDays1;
	int Day2ndD, Month2ndD, Year2ndD, HowManyDays2;
	int Days, i, Years;

	clrscr();
	printf("Enter 1st date: ");
	scanf("%i%i%i", &Day1stD, &Month1stD, &Year1stD);
	printf("Enter 2nd date: ");
	scanf("%i%i%i", &Day2ndD, &Month2ndD, &Year2ndD);

	HowManyDays1 = HowManyDays(Day1stD, Month1stD, Year1stD);
	printf("\n Days from start of year of 1st date=%i", HowManyDays1);
	HowManyDays2 = HowManyDays(Day2ndD, Month2ndD, Year2ndD);
	printf("\n Days from start of year of 2nd date=%i\n", HowManyDays2);

	Days = HowManyDays1 - HowManyDays2;
	Years = Year2ndD - Year1stD;
	Days = Days + 365 * Years;
	for (i = Year1stD; i < Year2ndD; i++) {
		if (i % 4 == 0) Days += 1;
	}

	printf("REZULT=%i", Days);
	getch();
}
