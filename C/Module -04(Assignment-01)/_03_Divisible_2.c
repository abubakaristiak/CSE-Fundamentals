#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n>0){
        for(int i=1; i<=n; i=i+1){
            if(i%3==0 && i%7==0){
                printf("%d\n",i);
            }
        }
    }
    
}