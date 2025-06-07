//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
#include<stdio.h>
#include<string.h>
int main()
{
    char a[11];
    scanf("%s", a);
    char b[11];
    scanf("%s", b);
    printf("%d %d",strlen(a),strlen(b));
    printf("\n%s%s\n",a,b);

    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s",a,b);
    
    return 0;
}