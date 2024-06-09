#include<stdio.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s",a, b);
    // printf("%s %s",a,b);
    int i=0; 
    while (-1)
    {
        if(a[i]=='\0' && b[i]=='\0'){
            printf("Same");
            break;
        }
        else if(a[i]=='\0'){
            printf("A smaller");
            break;
        }
        else if(b[i]=='\0'){
            printf("B smaller");
            break;
        }

        if(a[i]==b[i]){
            i++;
        }
        else if(a[i]>b[i]){
            printf("B smaller");
            break;
        }
        else{
            printf("A smaller");
            break;
        }
        
    }
    
    return 0;
}
