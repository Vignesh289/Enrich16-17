#include<stdio.h>
void main()
{
	char s[25];
	int k,a=0,e=0,i=0,o=0,u=0;
	printf("\nEnter the string");
	scanf("%s",&s);
	for(k=0;s[k]!='\0';k++)
	{
		switch(s[k])
		{
			case 'a':a++;
							 break;
			case 'A':a++;
							 break;
			case 'e':e++;
							 break;
			case 'E':e++;
							 break;			 
			case 'i':i++;
							 break;
			case 'I':i++;
							 break;
			case 'o':o++;
							 break;
			case 'O':o++;
							 break;
			case 'u':u++;
							 break;
			case 'U':u++;
							 break;
			default:printf("%c",s[k]);
							break;
		}
	}
	printf("\nThe no.of a's found are %d",a);
	printf("\nThe no.of e's found are %d",e);
	printf("\nThe no.of i's found are %d",i);
	printf("\nThe no.of o's found are %d",o);
	printf("\nThe no.of u's found are %d",u);
}
