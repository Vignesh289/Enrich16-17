#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int a[10],i=0,j,c=0,t,p;
  long int n,e,s=0;
  clrscr();
  printf("\nEnter a number:");
  scanf("%ld",&n);
  if(n<=0)
  {
    printf("\nEnter a positive number");
  }
  else
  {
    while(n>0)
    {
      a[i]=n%10;
      n=n/10;
      i++;
      c++;
    }
    c-=1;
    for(i=0;i<c;i++)
    {
      for(j=i+1;j<=c;j++)
      {
        if(a[i]=a[j])
        {
          t=a[i];
          a[i]=a[j];
          a[j]=t;
        }
      }
    }
    p=c;
    for(i=0;i<=c;i++)
    {
      e=a[i]*pow(10,p);
      s=s+e;
      p-=1;
    }
    printf("\nThe Sorted Number is %d",s);
  }
  getch();
}
        
