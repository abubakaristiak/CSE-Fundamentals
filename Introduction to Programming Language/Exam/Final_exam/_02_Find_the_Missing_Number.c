//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-05/challenges
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int m, a, b, c;
    for(int i=0; i<n; i++){
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        long long int value_malti= a*b*c;
        if(value_malti==0){
                printf("-1\n");
            }
        else{
            long long int missing_value=m/value_malti;
            if(m==0){
                printf("0\n");
            }
            else if(m%value_malti==0){
                printf("%lld\n",missing_value);
            }
            
            else{
                printf("-1\n");
            }    
        }
        
    }
            
    
    return 0;
}

