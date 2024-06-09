#include<stdio.h>
void func(int x){
    x = 100;
    printf("x in function: %p\n", x);
    printf("Address of x in function: %p\n", &x);
}
int main()
{
    int x = 10; 
    func(x);
    printf("x in main: %d\n",x);
    printf("Address of x in main: %p\n", &x);
    return 0;
}