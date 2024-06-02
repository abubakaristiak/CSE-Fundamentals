#include<stdio.h>
int my_abs(int n){
    if(n<0){
        return n*(-1);
    }
    else if(n>0){
        return n;
    }

    
}
int main()
{
    int n;
    scanf("%d", &n);
    int v = my_abs(n);
    printf("%d\n", v);
    
    return 0;
}