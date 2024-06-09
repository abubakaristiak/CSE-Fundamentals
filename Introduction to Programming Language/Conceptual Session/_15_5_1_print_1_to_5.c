
#include<stdio.h>
void solve(int n){
    if(n==0) return;
    solve(n-1);
    printf("%d\n", n);
}
int main()
{
    int n;
    scanf("%d", &n);
    solve(n);
    return 0;
}