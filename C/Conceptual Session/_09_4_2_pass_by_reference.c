#include<stdio.h>
void func(int *p){
    // x = 100;
    *p =100;
    
    // printf("Address of x in function: %p\n", p);
}
int main()
{
    int x = 10; 
    func(&x);
    
    printf("Address of x in main: %p\n", &x);
    printf("%d",x);
    return 0;
}