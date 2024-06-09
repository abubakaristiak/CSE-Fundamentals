#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d", &n);
    if(n>=10 && n<=99){
        a = n%10;
        b = n/10;
        if(a%b ==0){
            printf("YES\n");
        }
        else if(b%a ==0){
            printf("YES\n");
        }
        else if(a==0 || b==0){
            printf("NO\n");
        }
        else{
            printf("NO\n");
        }
        
        
    }
    return 0;
}