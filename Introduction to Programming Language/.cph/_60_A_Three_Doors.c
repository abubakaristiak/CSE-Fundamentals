//https://codeforces.com/problemset/problem/1709/A
#include<stdio.h>
void solve(){
    int key;
    scanf("%d", &key);
    int ar[5];

    for(int i=1; i<=3; i++){
        scanf("%d", &ar[i]);
    }
    if(ar[key] == 0){
        printf("NO\n");
        return;
    }
    key = ar[key];

    if(ar[key] == 0){
        printf("NO\n");
        return;
    }
    printf("YES\n");
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }
    return 0;
}