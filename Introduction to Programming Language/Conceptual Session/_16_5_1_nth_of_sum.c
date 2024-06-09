#include<stdio.h>
int solve(int n){
    if(n==0) return 0;
    int result = n+solve(n-1);
    return result;
}
int main()
{
    int n;
    scanf("%d", &n);
    int result = solve(n);
    printf("%d", result);
    return 0;
}