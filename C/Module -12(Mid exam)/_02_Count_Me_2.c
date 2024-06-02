//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-5/challenges
#include<stdio.h>
#include<string.h>
int main()
{
    char ar[100001];
    scanf("%s",&ar);
    int count_consonants=0;
    for(int i=0; i<strlen(ar); i++){
        if(ar[i] !='a'&& ar[i] !='e'&& ar[i] !='i' && ar[i] !='o' && ar[i] !='u'){
            count_consonants++;
        }
    }
    printf("%d",count_consonants);
    return 0;
}