//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G
#include <stdio.h>

void find_max_min(int n) {
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    int max = ar[0];
    int min = ar[0]; 
    for (int i = 1; i < n; i++) {
        if (ar[i] > max) {
            max = ar[i];
        }
        if (ar[i] < min) {
            min = ar[i];
        }
    }
    printf("%d %d", min, max);
}

int main() {
    int n;
    scanf("%d", &n);
    find_max_min(n);
    return 0;
}



// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &ar[i]);
//     }
//     int max =INT_MIN;
//     int min = INT_MAX;
//     for(int i=0; i<n; i++){
//         if(ar[i]>max){
//             max = ar[i];
//         }

//         if(ar[i]<max){
//             min = ar[i];
//         }
//     }
//     printf("max: %d\n",max);
//     printf("min: %d\n",min);
//     return 0;
// }


