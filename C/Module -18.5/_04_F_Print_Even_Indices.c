//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F
// recursion:
#include<stdio.h>
void solve(int ar[], int n, int i){
    if(i==-1) return;
    if(i%2==0){
        printf("%d ", ar[i]);
    }
    solve(ar, n, i-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }

    solve(ar, n, n-1);
   

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

//     for(int i=n-1; i>=0; i--){
//         if(i%2==0){
//             printf("%d ", ar[i]);
//         }
//     }



//     return 0;
// }


// #include<stdio.h>
// void even_index_value(int ar[], int n, int i){
//     if(i<0){
//         return;
//     }
//     if(i%2==0){
//         printf("%d ", ar[i]);
//     }
//     even_index_value(ar,n,i-1); 
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &ar[i]);
//     }

//     even_index_value(ar, n, n-1);

//     return 0;
// }








// return type void:
// #include<stdio.h>
// void solve(int ar[], int n){
//     for(int i=n-1; i>=0; i--){
//         if(i%2==0){
//             printf("%d", ar[i]);
//         }
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &ar[i]);
//     }

//     solve(ar, n);
   

//     return 0;
// }
























// return type integer:
// #include<stdio.h>
// int solve(int ar[], int n){
//     for(int i=n-1; i>=0; i--){
//         if(i%2==0){
//             return ar[i];
//         }
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &ar[i]);
//     }

//     int val = solve(ar, n);
//     printf("%d", val);

//     return 0;
// }