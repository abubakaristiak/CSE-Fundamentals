#include<stdio.h>
int main()
{
    char ar[6] = "Rahat";
    int sz= sizeof(ar)/sizeof(char);
    printf("%d\n",sz);
    printf("%s",ar);
    return 0;
}