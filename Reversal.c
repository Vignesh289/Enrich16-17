#include<stdio.h>
#include<conio.h>
void main()
{
  int n,r;
  clrscr();
  printf("Enter the Number:");
  scanf("%d",&n);
  printf("\nThe Reversed Number is:");
  while(n>0)
  {
    r=n%10;
    printf("%d",r);
    n=n/10;
  }
  getch();
}
