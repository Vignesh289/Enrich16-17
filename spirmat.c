#include<stdio.h>
int main(void)
{
	int m[10][10],l=1,i,j,k,n;
	printf("Enter the Order of the Square Matrix\n");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		if(i%2==0) {
			for(j=0;j<n;j++) {
				m[i][j]=l;
				l++;
			}
		}
		else {
			for(j=n-1;j>=0;j--) {
				m[i][j]=l;
				l++;
			}
		}
	}
	printf("The Spiral Matrix is:");
	for(i=0;i<n;i++) {
		printf("\n");
		for(j=0;j<n;j++) {
			printf("%d\t",m[i][j]);
		}
	}
}
