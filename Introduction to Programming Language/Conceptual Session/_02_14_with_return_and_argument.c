#include<stdio.h>
int juk_dakano(int n){
    int last_digit = n%10;
    int first_digit = n/1000;

    int sum = last_digit+first_digit;
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    int s1 = juk_dakano(n);
    printf("%d", s1);
    return 0;
}