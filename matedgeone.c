#include<stdio.h>
void main()
{
	int a[10][10],m,n,i,j,k;
	printf("\nEnter the no. of Rows & Columns:");
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			if(i==0||j==0||j==(n-1)||i==(m-1))
			{
				a[i][j]=1;
				printf("\t%d",a[i][j]);
			}
			else
			{
				a[i][j]=0;
				printf("\t%d",a[i][j]);
			}
		}
	}
}
