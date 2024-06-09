//https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-05/challenges/is-it-a-challenge
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = n; i <= 0; i++)
        {
            printf("%d ", i);
        }
    }
    return 0;
}