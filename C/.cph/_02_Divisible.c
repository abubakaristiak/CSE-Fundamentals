#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n>-1){
        if(n%3 == 0){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
}