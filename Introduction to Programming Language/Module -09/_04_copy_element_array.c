#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar_1[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar_1[i]);
    }
    int m;
    scanf("%d", &m);
    int ar_2[m];
    for(int i=0; i<m; i++){
        scanf("%d", &ar_2[i]);
    }

    int ar_3[n+m];
    for(int i=0; i<n; i++){
        ar_3[i] = ar_1[i];
    }
    int i=n;
    for(int j=0; j<m; j++){
        ar_3[i] = ar_2[j];
        i++;
    }
    for(int i=0; i<n+m; i++){
        printf("%d ", ar_3[i]);
    }
    return 0;
}