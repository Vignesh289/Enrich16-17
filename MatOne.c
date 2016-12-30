#include <stdio.h>
int main()
{
    int a[10][10],m,n,k,i,j;
    printf("\nEnter the number of Rows & Columns");
    scanf("\n%d\t%d",&m,&n);
    printf("\nEnter the sum of indices whose position should become one");
    scanf("\n%d",&k);
    if(k<=(m+n-2))
    {
      printf("\n%d",m+n-2);
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              if((i+j)==k)
              {
                  a[i][j]=1;
              }
              else
              {
                  a[i][j]=0;
              }
          }
      }
      printf("\nThe Matrix is:");
      for(i=0;i<m;i++)
      {
          printf("\n");
          for(j=0;j<n;j++)
           {
              printf("%d\t",a[i][j]);
          }
      }
    }
    else
    {
        printf("\nThe sum of Indices is Out of Bounds");
    }
    return 0;
}
