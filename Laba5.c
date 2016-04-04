#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
 {
 int n,a,j,b,i=0;
 char mas[10];
 clrscr();
 printf("Enter value n=");
 scanf("%i",&n);
 a=n;
 while (a>0)
	 {
	  mas[i]=a%10;		      //Amount of numbers
	  a=a/10;
	  i++;
	  }
	  printf("\n\Amount of numbers=%i",i);
 b=mas[i-1];
 mas[i-1]=mas[0];
 mas[0]=b;
 j=i-1;
 n=0;
   for(i=j-1;i>0;i--)
	 {
	  n=n+mas[i]*pow(10,i);
	  }
 n=n+mas[0]+mas[j]*pow(10,j);
 printf("\n Result of programm=%u",n);
 getch();
  }
