#include<stdio.h>
#include<conio.h>
void main()
{
  int t,i;
  long int n,r,s;
  clrscr();
  printf("\nEnter the Number:");
  scanf("%ld",&n);
  printf("\nEnter the no. of times to be Left Shifted:");
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
    r=n%10000;
    n=n/10000;
    s=(r*10)+n;
    n=s;
  }
  printf("\nThe Left Shifted Number is %ld",s);
  getch();
}
