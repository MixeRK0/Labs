#include<stdio.h>
#include<conio.h>
#include<math.h>
int day(int dd1, int mm1, int yy1)
  {
  int i=0,p=0;
  p+=dd1;
    for (i=1;i<mm1;i++)
       {
       switch(i)
	      {
	      case 1: p+=31; break;
	      case 2: p+=28; if (yy1%4==0) p+=1; break;
	      case 3: p+=31; break;
	      case 4: p+=30; break;
	      case 5: p+=31; break;
	      case 6: p+=30; break;
	      case 7: p+=31; break;
	      case 8: p+=31; break;    //fail
	      case 9: p+=30; break;    //fail
	      case 10: p+=31; break;   //fail
	      case 11: p+=30; break;
	      case 12: p+=31; break;
	      }
       }
       return(p);
  }

  void main()
   {
    int d1,m1,y1,p1;
    int d2,m2,y2,p2;
    int r,j,f,s;
    clrscr();
    printf("Enter 1st date: ");
    scanf("%i%i%i",&d1,&m1,&y1);
    printf("Enter 2nd date: ");
    scanf("%i%i%i",&d2,&m2,&y2);
    p1=day(d1,m1,y1);
    printf("\n 1st day=%i",p1);
    p2=day(d2,m2,y1);
    printf("\n 2nd day=%i\n",p2);
    r=p2-p1;
    s=r;
    if (r<0) r=365+r;
    f=y2-y1;
    r=r+365*f;
    for (j=y1;j<y2;j++)
       {
	if (j%4==0) r+=1;
	}
    if (s<0) r-=365;
    printf("REZULT=%i",r);
    getch();
    }
