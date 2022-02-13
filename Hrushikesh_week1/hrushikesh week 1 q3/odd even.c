#include<stdio.h>
#include<conio.h>
int main()
{
	int x,rm;
	printf("Enter the number:");
	scanf("%d",&x);
	
	rm=x%2;
	
	switch(rm)
	{
		case 0:
		    printf("The number is even");
		 break;
		default: printf("The number is odd");
	}
	getch();
	return 0;	
}