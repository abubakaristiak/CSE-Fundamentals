//https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-05/challenges/sum-sum-2
#include<stdio.h>
int main()
{
    int n;
    int even_sum=0, odd_sum=0;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    for(int i=0; i<n; i++){
        if(ar[i]>0){
            even_sum = even_sum +ar[i];
        }
        else if(ar[i]<0){
            odd_sum = odd_sum+ar[i];
        }
    }
    printf("%d %d",even_sum, odd_sum);
}