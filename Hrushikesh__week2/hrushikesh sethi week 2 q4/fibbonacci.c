#include<stdio.h>
int main()
{
	int n,i;
	int t1=0,t2=1;
	int m=t1+t2;
	printf("Enter the number of inputs:");
	scanf("%d",&n);
	printf("The fibonacci series is: %d %d",t1,t2);
	
	for(i=3;i<=n;i++)
	{
		printf(" %d",m);
		t1=t2;
		t2=m;
		m=t1+t2;
	}
	return 0;
}