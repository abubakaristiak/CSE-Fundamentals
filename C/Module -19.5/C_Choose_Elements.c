//https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C
#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d", &n, &k);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(ar[i]<ar[j]){
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    long long int sum = 0; 
    for(int i=0; i<k; i++){
        sum = sum + ar[i];
    }
    if(sum<0){
        sum = 0;
    }
    printf("%lld", sum);
    return 0;
}


