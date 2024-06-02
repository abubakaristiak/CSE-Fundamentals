//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B
#include<stdio.h>
void natural_num(int n){
    for(int i=1; i<=n; i++){
        printf("%d",i);
        if(i !=n){
            printf(" ");
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    natural_num(n);
    return 0;
}