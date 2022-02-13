#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
	char n[20],b[40],h[40];
	int rn[10];
	
	printf("Enter the name:\n");
	gets(n);
	printf("Enter the branch:\n");
	gets(b);
	printf("Enter the roll number:\n");
	scanf("%d",&rn);
	printf("Enter your hobbies:\n");
	scanf("%s",&h);
	
	getch();
	return 0;
}