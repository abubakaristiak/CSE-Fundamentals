#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    scanf("%d", &x);
    // int ans = sqrt(x);
    // printf("%d", ans);
    double ans = sqrt(x);
    printf("%.2lf", ans);

    return 0;
}