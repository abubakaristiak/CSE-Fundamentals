//https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-05/challenges/reverse-and-odd
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    for(int i=n-1; i>=0; i--){
        if(i%2 ==1){
            printf("%d ",ar[i]);
        }
    }
    
    return 0;
}