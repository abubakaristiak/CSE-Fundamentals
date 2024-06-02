//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int max = INT_MIN, min = INT_MAX;
    int max_in = 0, min_in = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
            max_in = i;
        }
        if (ar[i] < min)
        {
            min = ar[i];
            min_in = i;
        }
    }
    int temp = ar[max_in];
    ar[max_in] = ar[min_in];
    ar[min_in] = temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &ar[i]);
//     }

//     int min_value = ar[0], max_value = ar[0];
//     int min_index=0, max_index=0;
//     for(int i=0; i<n; i++){
//         if(ar[i]>max_value){
//             max_value= ar[i];
//             max_index= i;
//         }
//         if(ar[i]<min_value){
//             min_value = ar[i];
//             min_index = i;
//         }

//     }
//     int temp=ar[min_index];
//     ar[min_index] = ar[max_index];
//     ar[max_index] = temp;

//     for(int i=0; i<n; i++){
//         printf("%d ", ar[i]);
//     }

//     // printf("\nmin_value: %d\nmin_index: %d\nmax_value: %d\nmax_index: %d\n", min_value, min_index, max_value, max_index);

//     return 0;
// }