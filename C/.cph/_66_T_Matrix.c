//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &ar[i][j]);
        }
    }
    int primary_sum = 0;
    int secondary_sum = 0;
    if(n == n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j){
                    primary_sum = primary_sum+ar[i][j];
                }
                if(i+j==n-1){
                    secondary_sum = secondary_sum+ar[i][j];
                }
            }
        }
    }
    int final_sum = abs(primary_sum - secondary_sum);
    printf("%d", final_sum);
    

    return 0;
}