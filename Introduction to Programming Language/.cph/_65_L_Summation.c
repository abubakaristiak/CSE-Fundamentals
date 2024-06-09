// #include<stdio.h>
// void fun(int ar[], int n){
//     int sum = 0; 
//     for(int i=0; i<n; i++){
//         sum = sum +i;
//     }
//     printf("%d", sum);
//     fun(ar, n);
// }


// #include <stdio.h>

// long long int sum_array(long long int ar[], int n, int i) {
//     if (i == n){
//         return 0;
//     } 
//     return ar[i] + sum_array(ar, n, i + 1);
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     long long int ar[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%lld", &ar[i]);
//     }
//     long long int sum = sum_array(ar, n, 0);
//     printf("%lld", sum);
    
//     return 0;
// }






#include<stdio.h>
long long int solve(int ar[], int n,int i){
    if(i==-1) return 0;
    return ar[i] + solve(ar,n,i-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    long long int result = solve(ar, n, n-1);
    printf("%lld\n", result);
    return 0;
}


