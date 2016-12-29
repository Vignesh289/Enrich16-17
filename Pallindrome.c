#include<stdio.h>
#include<conio.h>
void main()
{
  long int n,t,r,s=0;
  clrscr();
  printf("\nEnter a Number:");
  scanf("%d",&n);
  t=n;
  if(n>0)
  {
    while(n>0)
    {
      r=n%10;
      s=(s*10)+r;
      n=n/10;
    }
  }
  else
  {
    printf("\nEnter a positive number");
  }
  if(t==s)
  {
    printf("\nThe given number is a pallindrome");
  }
  else
  {
    printf("\nThe given number is not a pallindrome");
  }
}
