#include <stdio.h>
void m(int p, int q)

{
    int temp = p;
    p = q;
    q = temp;

}

int main()

{
    int a = 6, b = 5;
    m(a, b);
    printf("%d %d\n", a, b);
}
