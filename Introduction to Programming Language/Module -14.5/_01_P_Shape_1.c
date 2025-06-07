//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k=n;
    for(int i=1; i<=n; i++){
        for(int j=k; j>=i; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}