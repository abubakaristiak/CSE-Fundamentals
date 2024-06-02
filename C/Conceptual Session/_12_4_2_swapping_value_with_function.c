#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10;
    int b = 20;

    swap(&a,&b);

    printf("A = %d\n", a);
    printf("B = %d\n", b);
    return 0;
}