//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include<stdio.h>
int main()
{
    int n;
    long long int sum=0,a;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    for(int i=0; i<n; i++){
        sum = sum+ar[i];
    }
    if(sum<0){
        a = sum *-1;
        printf("%lld\n",a);
    }
    else{
        printf("%lld\n",sum);
    }
    return 0;
}