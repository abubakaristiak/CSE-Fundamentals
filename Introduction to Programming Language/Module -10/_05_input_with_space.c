
// use gets method:
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[5];
//     // int sz = sizeof(a)/sizeof(char);
//     gets(a);
//     printf("%s", a);
//     return 0;
// }
// fgets method:
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    fgets(a, 18, stdin);
    a[17] = '\0';
    printf("%s", a);
    return 0;
}