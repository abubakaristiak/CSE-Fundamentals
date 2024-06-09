//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
#include<stdio.h>
int main()
{
    int n; 
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    int min_value=ar[0];
    for(int i=0; i<n; i++){
        if(ar[i]<min_value){
            min_value = ar[i];
        }
    }
    // printf("%d", min_value);
    int count=0;
    for(int i=0; i<n; i++){
        if(ar[i]==min_value){
            count++;
        }
    }
    if(count%2==0){
        printf("Unlucky");
    }
    else{
        printf("Lucky");
    }
    return 0;
}
