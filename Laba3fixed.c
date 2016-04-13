#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int  Number, sumxyz, , NumDeg2, x, y, z, xyz, min, max;
	clrscr();

	printf(" Enter value a= ");
	scanf("%i", &Numer);

	NumDeg2 = Number*Number;
	Number = NumDeg2*NumDeg2*NumDeg2*Number;
	printf(" a^7=x*x*x*a=%i ,where x=a*a.", Number);

	printf("\n Enter values x y z=");
	scanf("%i%i%i", &x, &y, &z);

	sumxyz = x + y + z;
	xyz = x*y*z;
	max = sumxyz < xyz ? xyz : sumxyz;
	min = x < y ? (z < x ? z : x)
		: (z < y ? z : y);

	printf("\n Maximum value=%i   Minimum value=%i", max, min);
	getch();
 }
