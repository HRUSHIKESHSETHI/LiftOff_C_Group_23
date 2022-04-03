#include<stdio.h>
#include<string.h>
void concatereverse(char str1[],char str2[])
{
	strcat(str1,str2);
	printf("\n concatenated string: %s\n",str1);
	printf(" string in reverse is:");
	int l= strlen(str1);
	int i;
	for(i=l; i>=0; i--)
	{
		if(str1[i] ==' ')
		{
		str1[i]='\0';
		printf(" %s",&(str1[i])+1);
	    }
    }
}
int main()
{
	char str1[20],str2[20];
	printf("enter the string 1:");
	gets(str1);
	printf("enter the string 2:");
	gets(str2);
	concatereverse(str1,str2);
	return 0;
}
