#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int  a,a2,b,x,y,z,min,max;
  clrscr();
  printf(" Vvod a= ");
  scanf("%i",&a);
  x=a*a;
  a=x*x*x*a;
  printf(" a^7=x*x*x*a=%i,gde x=a*a.",a);
  printf("\n Vvod x y z=");
  scanf("%i%i%i",&x,&y,&z);
  a2=x+y+z;
  b=x*y*z;
  max=a2<b ? b : a2;
  min=x<y ? (z<x ? z : x)
	  : (z<y ? z : y);
  printf("\n Max=%i   Min=%i",max,min);
  getch();
 }
