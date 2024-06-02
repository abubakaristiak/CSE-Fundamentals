#include <stdio.h>
void swap(int *p, int *q)

{

    int temp = *p;

    *p = *q;

    *q = temp;

}

int main()

{

    int a = 6, b = 5;

    swap(&a, &b);

    printf("%d %d\n", a, b);

}