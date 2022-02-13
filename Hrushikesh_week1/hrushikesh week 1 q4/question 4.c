#include<stdio.h>
#include<conio.h>
int main()
{
 char operation;
 double n1,n2;
 printf("Enter an operator (+, -, *, /):");
 scanf("%c" ,&operation);
 printf("\nEnter two numbers:\n\n");
 scanf("%lf %lf" ,&n1,&n2);
 switch(operation)
 {
 	case '+':
 		printf("\n%.2lf + %.2lf = %.2lf",n1,n2,n1+n2);
 		break;
 	case '-':
	    printf("\n%.2lf - %.2lf = %.2lf",n1,n2,n1-n2);
		break;
	case '*':
	    printf("\n%.2lf * %.2lf = %.2lf",n1,n2,n1*n2);
		break;
	case '/':
	    printf("\n%.2lf / %.2lf = %.2lf",n1,n2,n1/n2);
		break;
	default:
	    printf("\nError! operator is not correct");			
 }
	getch();
	return 0;
}
