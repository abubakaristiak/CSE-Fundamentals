// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[100], b[100];
//     scanf("%s %s", a,b);
//     int d=strlen(a);
//     int c= d+strlen(b);
//     // printf("%d",c);
//     for(int i=0; i<=c; i++){
//         a[d]=b[i];
//         d++;
//     }
//     printf("%s %s",a,b);
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a,b);
    int k=strlen(a);
    for(int i=0; i<=strlen(b); i++){
        a[k] = b[i];
        k++;
    }
    printf("%s %s",a,b);

    
    return 0;
}