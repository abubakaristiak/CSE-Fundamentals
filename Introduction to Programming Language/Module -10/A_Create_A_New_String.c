//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001], b[1001];
    
    scanf("%s %s", &a, &b);
    int st1= strlen(a);
    int st2= strlen(b);
    printf("%d %d\n", st1, st2);
    printf("%s %s",a,b);

    return 0;
}