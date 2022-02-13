#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	(int)scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("%d is maximum",a);
	}
         else if(b>a){
        	printf("%d is maximum",b);
		}
		     else if(a==b){
		    	printf("both are equal");
			}
		        else{
		    	printf("you have to put integers");
		    }
 getch();
 return 0;
}