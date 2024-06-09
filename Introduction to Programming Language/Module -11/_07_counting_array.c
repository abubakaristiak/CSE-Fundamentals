// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&ar[i]);
//     }
//     int zero=0,one=0,two=0;
//     for(int i=0; i<n; i++){
//         if(ar[i]==0){
//             zero++;
//         }
//         if(ar[i]==1){
//             one++;
//         }
//         if(ar[i]==2){
//             two++;
//         }
//     }
//     printf("0 - %d\n",zero);
//     printf("1 - %d\n",one);
//     printf("2 - %d\n",two);
//     return 0;
// }   

// different apporuch replace conditon to esay format and declare an array:
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    int cnt[7]={0};
    for(int i=0; i<n; i++){
        int val=ar[i];
        cnt[val]++;
        // cnt[ar[i]]++; directly
    }
    for(int i=0; i<=6; i++){
        printf("%d - %d\n",i,cnt[i]);   
    }
    // printf("0 - %d\n",cnt[0]);
    // printf("1 - %d\n",cnt[1]);
    // printf("2 - %d\n",cnt[2]);
    return 0;
}   