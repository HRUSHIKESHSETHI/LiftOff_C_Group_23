#include <stdio.h>
#include <math.h>

int main()
{
    int n,sn,f,l,d;
    printf("Enter any number: ");
    scanf("%d", &n);

    l = n % 10;

    d = (int)log10(n); 

    f = (int)(n / pow(10, d)); 

    sn  = l;
    sn *= (int) pow(10, d);
    sn += n % ((int) pow(10, d));
    sn -= l;
    sn += f;

    printf("\nOriginal number = %d\n", n);
    printf("\nNumber after swapping first and last digit: %d", sn);

    return 0;
}