//sum 1 to N

#include <stdio.h>
int main()
{
    int sum = 0;
    int i,n;
    scanf("%d", &n);
    for (i = 1; i <= 5; i = i + 1)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
}