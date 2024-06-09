#include<stdio.h>
void even_ci(){
    int n;
    scanf("%d", &n);
    if(n>0){
        for(int i=2; i<=n; i+=2){
            printf("%d ", i);
        }
    }
}
int main()
{
    even_ci();
    
    return 0;
}