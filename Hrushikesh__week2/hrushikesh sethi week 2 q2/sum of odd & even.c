#include<stdio.h>
int main()
{
	int num[10],sum1=0,sum2=0;
	for(int i=0;i<10;i++)
	{
		printf("enter the number at index %d: ",i);
		scanf(" %d",&num[i]);
	}
	
	for(int i=0;i<10;i++)
	{
		if(num[i]%2==0)
		{
			sum1=sum1+num[i];
			num[i]++;
		}
	    
		else if(num[i]%2!=0)
		{
		    sum2=sum2+num[i];
		    num[i]++;
		}
	}
	printf("\nsum of odd numbers = %d\n",sum2);
	printf("\nsum of even numbers = %d\n",sum1);
	
	return 0;
}