#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
 {
	 int Number, CopyNum, Cup, i = 0;
	 char NumInMas[10];

	 clrscr();
	 printf("Enter value n=");
	 scanf("%i", &Number);

	 CopyNum = Number;
	 while (CopyNum > 0) {
		 NumInMas[i] = CopyNum % 10;		      //Amount of numbers
		 CopyNum = CopyNum / 10;
		 i++;
	 }
	 printf("\nAmount of numbers=%i", i);

	 Cup = NumInMas[i - 1];
	 NumInMas[i - 1] = NumInMas[0];
	 NumInMas[0] = Cup;

	 Number = NumInMas[0] + NumInMas[i-1] * pow(10, i-1);
	 for (i = i - 2; i > 0; i--) {
		 Number = Number + NumInMas[i] * pow(10, i);
	 }
	 Number = Number + NumInMas[0] + NumInMas[j] * pow(10, j);

	 printf("\n Result of programm=%u", Number);
	 getch();
  }
