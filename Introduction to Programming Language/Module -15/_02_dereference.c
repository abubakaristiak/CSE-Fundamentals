#include<stdio.h>
int main()
{
    int x=100;
    int *ptr = &x;
    // x=200;
    *ptr=200;

    printf("x er value: %d\n",x);
    printf("x er value: %d\n",*ptr);
    return 0;
}