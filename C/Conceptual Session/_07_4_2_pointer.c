#include<stdio.h>
int main()
{
    int x = 10; 
    int *p = &x;

    // printf("Address of x = %p\n", &x);
    // printf("address of x = %p\n", p);
    // printf("address of pointer  = %p\n", &p);

    printf("value of x=%d\n",x);
    printf("value of x=%d\n",*p);

    *p = 100; // assign value through the pointer
    printf("%d", x);

    return 0;
}