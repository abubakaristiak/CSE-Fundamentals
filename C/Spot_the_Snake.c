#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    for(int i=1; i<=x; i++){
        for(int j=1; j<=y; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}