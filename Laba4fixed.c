#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
 {
	 int Number, Sum = 0, i, Control = 0;

	 clrscr();
	 printf("Enter number of elements=");
	 scanf("%i", &Number);

	 for (i = 1; i <= Number; i++) Sum = Sum + pow(i, 3);
	 printf("\n Result of programm а=%i", Sum);

	 Control = pow(Number, 2)*pow(Number + 1, 2) / 4;
	 printf("\n Control value=%i", Control);
	 getch();
 }
