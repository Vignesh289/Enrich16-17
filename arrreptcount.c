#include<stdio.h>
void main()
{
	int a[15],n,i,s,c=0;
	printf("\nEnter the no. of the Elements in the Array:");
	scanf("%d",&n);
	printf("\nEnter the Elements in the Array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the Element to be Counted:");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
			c++;
	}
	printf("\nThe Number %d occurs %d times",s,c);
}
