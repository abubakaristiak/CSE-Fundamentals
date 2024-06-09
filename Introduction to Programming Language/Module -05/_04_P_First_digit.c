#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int ans = a/1000;
    if (ans%2==0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    return 0;
}
}