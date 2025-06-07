//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
// Two pointer:
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s", a);
    int st = strlen(a);
    int ans=1;
    int i=0;
    int j=st-1;
    while(i<j){
        if(a[i] != a[j]){
            ans=0;
            break;
        }
        i++;
        j--;
    }
    if(ans==1){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}