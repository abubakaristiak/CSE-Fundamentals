//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s", &a);
    int i=0;
    int str= strlen(a);
    int j= str-1;
    int flag = 1;
    while (i<j)
    {
        if(a[i] != a[j]){
            flag = 0;
            
        }
        i++;
        j--;
    }
    if(flag ==0){
        printf("NO");
    }
    else{
        printf("YES");
    }
    
    return 0;
}



// using function
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     aar a[1001],b[1001];
//     scanf("%s", &a);
//     strcpy(b,a);
//     int i=0, j= strlen(b)-1;
//     while(i<j){
//         aar temp = b[i];
//         b[i] = b[j];
//         b[j] = temp;
//         i++;
//         j--;
//     }
//     if(strcmp(a,b) == 0){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
    
//     return 0;
// }