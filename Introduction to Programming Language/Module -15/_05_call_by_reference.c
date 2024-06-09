#include<stdio.h>
void fun(int *p){
    // printf("p er value: %p\n",p);
    // printf("main er x er value: %d\n",*p);
    *p=400;
}
int main()
{
    int x = 100;
    // printf("x er address: %p\n", &x);
    fun(&x);
    printf("%d",x);
    return 0;
}