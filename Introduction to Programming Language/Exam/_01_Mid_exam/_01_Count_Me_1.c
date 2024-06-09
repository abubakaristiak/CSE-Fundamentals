//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-5/challenges
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    int count_two=0,count_three=0;
    for(int i=0; i<n; i++){
        if(ar[i]%6 ==0){
            count_two++;
        }
        else if(ar[i]%2==0){
            count_two++;
        }
        else if(ar[i]%3==0){
            count_three++;
        }
    }
    printf("%d %d",count_two,count_three);
    return 0;
}