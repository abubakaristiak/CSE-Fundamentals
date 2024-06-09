//https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-05/challenges/update-and-print
#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int x, y;
    scanf("%d %d", &x, &y);
    ar[x] = y;
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", ar[i]);
    }
}
