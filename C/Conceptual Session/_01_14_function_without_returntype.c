//https://docs.google.com/document/d/1m3HSxsvkjhL9PIqAx3I40VJhUx0xtw84chsVAAMYvRo/edit
#include<stdio.h>
void print_numbers(int n){
    if(n>0){
        for(int i=n; i>=-n; i--){
        printf("%d ",i);
    }
    }
    else{
        for(int i=n; i<=n*-1; i++){
        printf("%d ",i);
    }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    print_numbers(n);
    return 0;
}
