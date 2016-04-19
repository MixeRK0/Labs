#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
 {
  int n,a=0,i,b;
  clrscr();
  printf("Enter value N=");
  scanf("%i",&n);
  for (i=1;i<=n;i++) a=a+pow(i,3);
  printf("\n Result of programm а=%i",a);
  b=pow(n,2)*pow(n+1,2)/4;
  printf("\n Control value=%i",b);
  getch();
 }
