#include<stdio.h>
#include<conio.h>
void main()
{
  int n,r,x=0,s=0;
  clrscr();
  printf("\nEnter the Number\t");
  scanf("%d",&n);
  while(n>0)
  {
    r=n%10;
    s=s+r;
    n=n/10;
    x+=1;
  }
  printf("\nThe number of digits found is/are %d",x);
  printf("\nThe sum of the digits are %d",s);
  getch();
}
