//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
// #include<stdio.h>
// int main()
// {
//     char c;
//     int cnt[26] = {0};
//     while (scanf("%c",&c) != EOF)
//     {
//         cnt[c-'a']++;
//     }
//     for(int i='a'; i<='z'; i++){
//         if(cnt[i-'a']>0){
//             printf("%c : %d\n",i,cnt[i-'a']);

//         }
//     }
    
//     return 0;
// }

#include<stdio.h>
int main()
{
    char ch;
    int fq[26]={0};
    
    while(scanf("%c",&ch) !=EOF){
        int index = ch - 97;
        fq[index] +=1;
    }
    for(int i=0; i<26; i++){
        if(fq[i]>0){
            printf("%c : %d\n",i+97, fq[i]);
        }
    }
    return 0;
}