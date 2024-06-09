//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-05/challenges
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int pattern = (n+11)/2;
    int s= pattern-1;
    int k=1;
    for(int i=0; i<pattern; i++){
        for(int j=0; j<s; j++){
            printf(" ");
        }

        for(int j=0; j<k; j++){
            printf("*");
        }
        printf("\n");
        s--;
        k+=2;
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf(" ");
        }
        for(int j=0; j<n; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}