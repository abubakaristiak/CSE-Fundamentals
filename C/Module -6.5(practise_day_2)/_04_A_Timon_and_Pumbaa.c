// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);

    if((a-b)>=0){
        printf("%d",a-b);
    }
    else{
        printf("0");
    }
    return 0;
}