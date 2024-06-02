#include <stdio.h>
int main()
{
    int x = 0;
    if (x == 1)
    {
        if (x == 0)
        {
            printf("inside if if\n");
        }
        else
        {
            printf("inside if else\n");
        }
    }
    else
    {
        printf("inside else\n");
    }
    return 0;
}