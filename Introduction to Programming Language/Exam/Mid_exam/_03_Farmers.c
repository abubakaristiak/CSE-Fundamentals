//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-5/challenges
#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    int man1, man2, days;
    for(int i=0; i<test; i++){
        scanf("%d %d %d", &man1, &man2, &days);
        int kaj_ability = man1*days;
        int mot_farmer = man1+man2;
        int new_days = (kaj_ability/mot_farmer);
        int final_days = days - new_days;
        printf("%d\n", final_days);
    }
    
    return 0;
}