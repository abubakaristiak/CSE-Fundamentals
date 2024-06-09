#include<stdio.h>
int fun(char ch[], int i){
    if(ch[i] == '\0') return 0;
    int ans = fun(ch, i+1);
    if(ch[i]>='A' && ch[i]<='Z'){
        ch[i] = ch[i]+32;
    }
    if(ch[i] == 'a'|| ch[i]=='e'|| ch[i]=='i'|| ch[i]=='o'|| ch[i]=='u'){
        return ans+1;
    }
    else{
        return ans;
    }
        
}
int main()
{
    char ch[201];
    fgets(ch, 201, stdin);
    int cnt = fun(ch, 0);
    printf("%d",cnt);
    
    return 0;
}


