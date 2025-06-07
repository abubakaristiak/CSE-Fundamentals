//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100001];
    // scanf("%s", a);
    fgets(a, sizeof(a), stdin);
    
    for(int i=0; i<strlen(a); i++){
        if(a[i]==','){
        a[i] = ' ';
        }
        else if(a[i]>='A' && a[i] <= 'Z'){
            a[i]=a[i]+32;
        }
        else if(a[i]>='a' && a[i] <= 'z'){
            a[i]=a[i]-32;
        }
        
        
    }
    printf("%s", a);
}