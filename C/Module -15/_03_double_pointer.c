#include<stdio.h>
int main()
{
    double x = 5.34;
    double *ptr = &x;
    double *ptr2 = ptr;
    // *ptr=10.20;
    *ptr2=100.4;


    printf("x er value- %0.2lf\n",x);
    printf("x er value- %0.2lf\n",*ptr);
    printf("x er value- %d\n",sizeof(ptr));

    return 0;
}