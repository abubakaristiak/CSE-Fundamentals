#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>

int main() {
    printf("char   : %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("short  : %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("int    : %d to %d\n", INT_MIN, INT_MAX);
    printf("long   : %ld to %ld\n", LONG_MIN, LONG_MAX);

    printf("float  : %.2e to %.2e\n", FLT_MIN, FLT_MAX);
    printf("double : %.2e to %.2e\n", DBL_MIN, DBL_MAX);

    printf("bool   : 0 to 1\n");

    return 0;
}