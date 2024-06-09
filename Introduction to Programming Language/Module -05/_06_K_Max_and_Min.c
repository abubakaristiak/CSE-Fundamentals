#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    // Min Number
    if (a<=b && a<=c)
    {
        printf("%d ",a);
    }
    else if (b<=c && b<=a)
    {
        printf("%d ",b);
    }
    else
    {
        printf("%d ",c);
    }
    // Max Number
    if (a>=b && a>=c)
    {
        printf("%d\n",a);
    }
    else if (b>=c && b>=a)
    {
        printf("%d\n",b);
    }
    else
    {
        printf("%d\n",c);
    }

    
    return 0;
}