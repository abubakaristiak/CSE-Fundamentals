#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s",a,b);
    for(int i=0; i<=strlen(b); i++){
        a[i] = b[i];
    }
    printf("%s",a);
    return 0;
}

// use function to copy element
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[100], b[100];
//     scanf("%s %s",a,b);
//     strcpy(a,b);
//     printf("%s",a);
//     return 0;
// }