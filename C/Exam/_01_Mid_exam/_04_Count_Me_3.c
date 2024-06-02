//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-5/challenges
#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char ar[10001];
    for(int i=0; i<t; i++){
        scanf("%s",ar);
        int count_small=0, count_captial=0, count_digit=0;
        for(int i=0; i<strlen(ar); i++){
            if(ar[i]>='a' && ar[i]<='z'){
                count_small++;
            }
            if(ar[i]>='A' && ar[i]<='Z'){
                count_captial++;
            }
            if(ar[i]>='0' && ar[i]<='9'){
                count_digit++;            
            }
        }
        printf("%d %d %d\n",count_captial,count_small,count_digit);
        }
        
    
    
    
    return 0;
}