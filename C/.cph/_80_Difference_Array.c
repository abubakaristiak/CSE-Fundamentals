//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-05/challenges
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        int n;
        scanf("%d", &n);
        int a[n],b[n],c[n];
        for(int i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
        for(int i=0; i<n; i++){
            b[i] = a[i];
        }
    
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(b[i]>b[j]){
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }
        for(int i=0; i<n; i++){
            c[i] = abs(a[i]-b[i]); 
        }

        for(int i=0; i<n; i++){
            printf("%d ", c[i]);
        }
        printf("\n");
    }


    return 0;
}