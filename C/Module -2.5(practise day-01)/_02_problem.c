/*
Question:
You need to take two integer values as input and show the summation, subtraction, multiplication and division in the given format below.

For example:
Inputs are 5 and 2
Then you’ll give output as:
5 + 2 = 7
5 - 2 = 3
5 * 2 = 10
5 / 2 = 2.50
*/
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n",a,b, a+b);
    printf("%d - %d = %d\n",a,b, a-b);
    printf("%d * %d = %d\n",a,b, a*b);
    printf("%d / %d = %.2f\n",a, b, (float)a/b);
    
    return 0;
}   