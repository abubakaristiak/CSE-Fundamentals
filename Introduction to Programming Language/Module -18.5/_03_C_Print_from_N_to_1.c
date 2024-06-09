//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C
#include<stdio.h>
void fun(int n){
    if(n==0) return;
    if(n==1){
        printf("%d",n);
    }
    else{
        printf("%d ", n);
    }
    fun(n-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n);

    
    return 0;
}
