#include<stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    //address
    // printf("%p\n", &a[0]);
    // printf("%p\n", a);

    //value:
    printf("%d\n", *a);
    printf("%d\n", *(a+1));
    printf("%d\n", *(a+2));
    printf("%d\n", *(a+3));


    return 0;
}