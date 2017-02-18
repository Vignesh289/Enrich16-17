#include<stdio.h>
#include<math.h>
void main()
{
		int p,n,select,t;
		float r,interest=0;
		printf("\nEnter the Amount in Rupees:");
		scanf("%d",&p);
		printf("\nEnter the No. of Months:");
		scanf("%d",&n);
		printf("\nEnter the Rate of Interest:");
		scanf("%f",&r);
		printf("\n1. Simple Interest\n2. Compound Interest");
		scanf("%d",&select");
		switch(select)
		{
				case 1:float sinterest(int,int,float);
							 interest = sinterest(p,n,r);
							 printf("\nThe Simple Interest is Rs.%.2f",interest);
							 break;
        case 2:printf("\nEnter the No. of Times the Amount is Compounded in a Year:");
							 scanf("%d",&t);
							 float cinterest(int,int,float,int);
		           interest = cinterest(p,n,r,t);
		           printf("\nThe Complex Interest is Rs.%.2f",interest);
							 break;
				default:printf("\nEnter a Valid Choice");
								break;
		}
}
float sinterest(int a,int b,float c)
{
		float si;
		si=(a*b*c)/1200;
		return si;
}
float cinterest(int a,int b,float c,int d)
{
		float ci;
		ci=a*(pow(1+c/100,b*d)-1);
		return ci;
}
