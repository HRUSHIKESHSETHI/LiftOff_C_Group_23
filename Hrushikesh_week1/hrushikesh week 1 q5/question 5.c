#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float r,pi,D,A,C;
    pi=3.14;
    
	printf("Enter the radius of the circle in meter:");
	scanf("%f",&r);
	
	D=2*r;
	printf("Diameter of the circle in meter is: %.2f\n",D);
	
	A=pi*r*r;
	printf("Area of the circle in meter is: %.2f\n",A);
	
	C=2*pi*r;
	printf("Circumference of the circle in meter is: %.2f\n",C);
	
	getch();
	return 0;
}