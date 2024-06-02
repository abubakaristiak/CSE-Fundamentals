#include<stdio.h>
void func(int a[]){
    a[0] = 100; 
}
int main()
{
    int a[5] = {10, 20, 30, 40,50};
    func(a);
    for(int i=0; i<5; i++){
        printf("%d ", a[i]);
    }

    return 0;
}