#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    scanf("%s",a);
    int one = 0;
    int two = 0;
    for(int i=0; i<strlen(a); i++){
        // printf("%c",a[i]);
        if(a[i]=='a'){
            one++;
        }
        else if(a[i]=='b'){
            two++;
        }

    }
    printf("%d\n", one);
    printf("%d\n", two);

    return 0;
}