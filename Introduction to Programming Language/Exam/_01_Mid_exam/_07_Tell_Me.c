//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-5/challenges
#include<stdio.h>
int main()
{
    int test; 
    scanf("%d", &test);
    for(int i=0; i<test; i++){
        int n;
        scanf("%d",&n);
        int ar[n];
        for(int i=0; i<n; i++){
            scanf("%d", &ar[i]);
        }
        int x;
        scanf("%d", &x);
        int pi_nai = 0;
        for(int i=0; i<n; i++){
            if(ar[i]==x){
                pi_nai=1;
                break;
            }
        
        }
        if(pi_nai==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}