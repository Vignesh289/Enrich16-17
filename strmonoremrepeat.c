#include<stdio.h>
void main()
{
	char s[15];
	int i,j,z=0;
	printf("\nEnter a String:");
	scanf("%s",&s);
	printf("\nThe Reduced String is:");
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		{
			if(s[i]==s[j])
			{
				s[j]='0';
			}
		}
		switch(s[i])
		{
			case '0':z++;
							 break;
			default:printf("%c",s[i]);
			        break;
		}
	}
}
