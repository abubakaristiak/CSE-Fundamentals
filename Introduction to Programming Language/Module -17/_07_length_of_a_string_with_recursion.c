// #include<stdio.h>
// int main()
// {
//     char ar[100];
//     scanf("%s", &ar);
//     int i=0;
//     int count = 0;
//     while (ar[i] !='\0')
//     {
//         count++;
//         i++;

//     }
//     printf("%d", count);
    

//     return 0;
// }

// use recursion
#include<stdio.h>
int fun(char ch[], int i){
    //base case
    if(ch[i] == '\0') return 0;
    int l = fun(ch, i+1);
    return l+1;
}
int main()
{
    char ch[] = "Istiak";
    int length = fun(ch, 0);
    printf("%d\n", length);
    return 0;
}