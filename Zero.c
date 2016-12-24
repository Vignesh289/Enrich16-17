#include<stdio.h>
void main()
{
	int a[10][10],i,j,m,n,k;
	printf("enter the number of rows and columns:");
	scanf("%d %d",&m,&n);
	printf("\n the matrix elements are:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				a[i][j]='c';
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='c')
			{
				for(k=0;k<m;k++)
				{		
					a[i][k]=0;
					a[k][j]=0;
				}		
			}
		}
	}
	printf("the obtained matrix is:");
	for(i=0;i<m;i++)
	{
		printf("\n ");
		for(j=0;j<n;j++)
		{
			printf("\t %d",a[i][j]);
		}
	}
}
