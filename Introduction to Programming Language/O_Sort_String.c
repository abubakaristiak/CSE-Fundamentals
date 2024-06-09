//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char c[n+1];
    scanf("%s",c);
    int cnt[26] = {0};
    for(int i=0; i<n; i++){
        int value = c[i]-'a';
        cnt[value]++;
    }

    for(int i=0; i<26; i++){
        while(cnt[i] > 0){
            printf("%c", i+97);
            cnt[i]--;
            
        }
    }


    return 0;
}