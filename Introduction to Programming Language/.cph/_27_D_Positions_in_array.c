// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n>=2 && n<=1000){
        int ar[n];
        for(int i=0; i<n; i++){
            scanf("%d", &ar[n]);
        }
        for(int i=0; i<n; i++){
            if(ar[i]<=10){
                printf("A[%d] = %d\n",i,ar[i]);
            }
        }
        
    }
    return 0;
}