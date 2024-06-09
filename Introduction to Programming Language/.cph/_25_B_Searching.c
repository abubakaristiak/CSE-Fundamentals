//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

#include <stdio.h>
int main()
{
    int n, x, i;
    int ans=-1;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if(ar[i]==x){
            ans=i;
            break;
        }
        
    }
    printf("%d",ans);
}