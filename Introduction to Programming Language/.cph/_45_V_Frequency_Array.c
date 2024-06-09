#include <stdio.h>

int main() {
    int size, n;
    scanf("%d %d", &size, &n);
    
    int a[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    int fq[n + 1];
    for (int i = 0; i <= n; i++) {
        fq[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        fq[a[i]] += 1;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d\n", fq[i]);
    }

    return 0;
}
