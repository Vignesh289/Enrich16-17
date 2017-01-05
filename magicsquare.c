/*
 * Magic_Square.c
 *
 *  Created on: 05-Jan-2017
 *      Author: Vicky Ashok
 */
#include<stdio.h>
int main(){
	int i,j,n,r,c,f,tr,tc;
		printf("\nEnter the Order of the Magic Square:");
		scanf("%d",&n);
    if(n%2==0){
		  int a[10][10];
		  r=0;
		  c=n/2;
		  for(i=0;i<n;i++){
			  for(j=0;j<n;j++){
				  if(i==r && j==c)
					  a[i][j]=1;
				  else
					  a[i][j]=0;
			  }
		  }
		  for(f=2;f<=n*n;f++){
			  tr=r;
			  tc=c;
			  r=tr-1;
			  c=tc+1;
			  if(r<0){
				  r=n-1;
			  }
			  if(c>=n){
				  c=c-n;
			  }
			  if(a[i][j]==0){
				  a[r][c]=f;
			  }
			  else{
				  a[tr+1][tc]=f;
			    r=tr+1;
			    c=tc;
		    }
		  }
		  printf("\nThe Siamese Magic Square is:");
		  for(i=0;i<n;i++){
			  printf("\n");
			  for(j=0;j<n;j++){
				  printf("\t%d",a[i][j]);
			  }
		  }
    }
    else{
      printf("\nEnter an Odd Number");
    }
	return 0;
}

