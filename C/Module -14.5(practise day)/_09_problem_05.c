#include<stdio.h>
char small_to_capital(char ch){
    if(ch>='A' && ch<='Z'){
        int x = ch+32;
        (char) x;
    }
}
int main()
{
    char ch;
    scanf("%c", &ch);
    char k = small_to_capital(ch);
    printf("%c", k);
    return 0;
}