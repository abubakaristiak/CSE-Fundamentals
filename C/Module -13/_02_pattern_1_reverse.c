#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k=n;
    for(int i=1; i<=n; i++){
        for(int j=k; j>=1; j--){
            printf("*");
            
        }
        printf("\n");
        k--;
    
    }
    return 0;
}