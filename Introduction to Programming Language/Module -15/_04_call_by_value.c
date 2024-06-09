#include<stdio.h>
void fun(int x){
    x = 200;
    printf("fun x er address: %p\n", &x);
    printf("fun x er value: %d\n", x);

    
}
int main()
{
    int x=10;
    fun(x);
    printf("main x er address: %p\n", &x);
    printf("main x er value: %d\n", x);
    return 0;
}