//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
       char a[101];
        scanf("%s", a);
        int st = strlen(a);
        if(st>10){
            
            printf("%c",a[0]);
            printf("%d",st-2);
            printf("%c\n",a[st-1]);
            
    }
    else{
        printf("%s\n", a);
    } 
    }
    
    return 0;
}