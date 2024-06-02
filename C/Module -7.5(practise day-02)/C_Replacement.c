// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    for(int i=0; i<n; i++){
        if(ar[i]>0){
            ar[i]=1;
            printf("%d ",ar[i]);
        }
        else if(ar[i]<0){
            ar[i]=2;
            printf("%d ",ar[i]);
        }
        else{
            printf("%d ",ar[i]);
        }
    }
    
    
    return 0;
}