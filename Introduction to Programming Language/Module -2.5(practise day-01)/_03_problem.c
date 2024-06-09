/*
Question:
You need to take one non-negative integer (0 or greater than 0) value as input and tell if it is even or odd.
See the sample input and output for more clarification.
*/
#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}