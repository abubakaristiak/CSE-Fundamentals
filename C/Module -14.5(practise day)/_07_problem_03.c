#include<stdio.h>
int char_to_ascii(char ch){
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || ch>='0' && ch<='9'){
        return (int)ch;
    }
}
int main()
{
    char ch;
    scanf("%c", &ch);
    int x = char_to_ascii(ch);
    printf("%d",x);
    return 0;
}
