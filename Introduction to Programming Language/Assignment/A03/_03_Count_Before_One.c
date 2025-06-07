//https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-05/challenges
#include<stdio.h>
int count_before_one(int A[], int n){
    int count=0;
    for(int i=1; i<=n; i++){
        if(A[i] == 1){
            break;
        }
        count++;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    
    int A[n];
    for(int i=1; i<=n; i++){
        scanf("%d", &A[i]);
    }
    int val = count_before_one(A, n);
    printf("%d", val);
    return 0;
}



