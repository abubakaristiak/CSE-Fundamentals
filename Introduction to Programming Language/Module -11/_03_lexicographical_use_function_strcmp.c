#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a,b);
    int val = strcmp(a,b);
    
    if(val > 0){
        printf("B smaller %d",val);
    }
    else if(val<0){
        printf("A smaller %d",val);
    }
    else{
        printf("Same %d",val);
    }

    return 0;
}