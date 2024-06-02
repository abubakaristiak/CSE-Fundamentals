#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k=2*n-1;
    int s=0;
    for(int i=1; i<=n; i++){
        for(int j=0; j<s; j++){
            printf(" ");
        }
        for(int j=k; j>=1; j--){
            printf("*");
        }
        for(int j=0; j<s; j++){
            printf(" ");
        }
        k-=2;
        s++;
        printf("\n");
    }
    return 0;
}
