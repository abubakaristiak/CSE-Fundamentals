#include<stdio.h>
void solve(int n){
    if(n==0) return;
    printf("I love recursion\n");
    solve(n-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    solve(n);
    
    return 0;
}