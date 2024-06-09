#include<stdio.h>
int main()
{
    // char a[6] = {'I','s','t','i','a','k'};    Manual process 
    char a[6] = "Istiak";    // this is super power of string
    for(int i=0; i<5; i++){
        printf("%c\n", a[i]);
    }
    return 0;
}