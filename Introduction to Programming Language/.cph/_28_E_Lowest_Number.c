// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    int min = INT_MAX;
    int pos=0;
    
    scanf("%d", &n);
    if(n>=2 && n<=1000){
        int ar[n];
        for(int i=0; i<n; i++){
            scanf("%d", &ar[i]);
        }
        for(int i=0; i<n; i++){
            if(ar[i]<min){
                min=ar[i];
                pos=i+1;
                
            }
        }
        printf("%d %d",min, pos);

    }
}