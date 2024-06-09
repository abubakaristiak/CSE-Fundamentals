//https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-05/challenges
#include<stdio.h>
void odd_even(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    int even_c = 0, odd_c = 0;
    for(int i=0; i<n; i++){
        if(ar[i]%2==0){
            even_c++;
        }
        if(ar[i]%2 !=0){
            odd_c++;
        }
    }
    printf("%d %d", even_c, odd_c);
}
int main()
{
    
    odd_even();
    return 0;
}