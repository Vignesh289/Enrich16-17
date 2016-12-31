#include<stdio.h>
void main()
{
	int a[10][10],n,i,j,t;
	printf("\nEnter the no. of Rows & Columns:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
  }
	for(i=0,j=n-1;i<n;i++,j--)
	{
		t=a[i][j];
		a[i][j]=a[i][i];
		a[i][i]=t;
	}
	printf("\nThe Matrix is:");
  for(i=0;i<n;i++)
  {
    printf("\n");
    for(j=0;j<n;j++)
      {
        printf("%d\t",a[i][j]);
      }
  }
}
