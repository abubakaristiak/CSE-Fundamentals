#include<stdio.h>
int main()
{
    double x,y;
    scanf("%lf %lf", &x, &y);
    double original_price = y/(1-x/100.0);
    printf("%0.2f", original_price);

    return 0;
}