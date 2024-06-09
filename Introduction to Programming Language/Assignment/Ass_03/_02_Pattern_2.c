//https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-05/challenges
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s=n-1;
    int k=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=s; j++){
            printf(" ");
        }
        for(int j=i; j>=k; j--){
            printf("%d", j);
        }
        s--;
        
        printf("\n");
    }
    return 0;
}