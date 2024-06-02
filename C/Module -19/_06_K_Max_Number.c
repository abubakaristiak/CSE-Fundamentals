//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K
#include<stdio.h>
#include<limits.h>
int bigger(int ar[], int n, int i){
    if(i==n){
        return INT_MIN;
    }
    int max = bigger(ar, n, i+1);
    if(ar[i]>max){
        return ar[i];
    }
    else{
        return max;
    }
    
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }

    int max = bigger(ar, n, 0);
    printf("%d", max);
    
    
    return 0;
}




// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&ar[i]);
//     }
//     int max = ar[0];
//     for(int i=0; i<n; i++){
//         if(ar[i] > max){
//             max = ar[i];
//         }
//     }
//     printf("%d", max);
//     return 0;
// }

