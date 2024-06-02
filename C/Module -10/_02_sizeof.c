#include<stdio.h>
int main()
{
    int a[5];
    int size = sizeof(a)/sizeof(int);
    printf("%d\n",size);


    char a_1[10];
    int size_1 = sizeof(a_1)/sizeof(char);
    printf("%d\n",size_1);
    return 0;
}