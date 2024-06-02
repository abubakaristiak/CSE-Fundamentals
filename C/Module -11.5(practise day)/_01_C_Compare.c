//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
// #include<stdio.h>
// int main()
// {
//     char a[21], b[21];
//     scanf("%s %s", a,b);
//     int i=1; 
//     while (-1)
//     {
//         if(a[i]=='\0' && b[i]=='\0'){
//             printf("%s",a);
//             break;
//         }
//         else if(a[i]=='\0'){
//             printf("%s",a);
//             break;
//         }
//         else if(b[i]=='\0'){
//             printf("%s",b);
//             break;
//         }

//         if(a[i] !='\0'){
//             i++;
//         }
//         else if(a[i]>b[i]){
//             printf("%s",a);
//             break;
//         }
//         else{
//             printf("%s",b);
//             break;
//         }
//     }
    
//     return 0;
// }


#include<stdio.h>
#include<string.h>
int main()
{
    char a[21], b[21];
    scanf("%s %s", a,b);
    int val = strcmp(a,b);
    if(val>0){
        printf("%s",b);
    }
    else if(val<0){
        printf("%s",a);
    }
    else{
        printf("%s",a);
    }

    return 0;
}