//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-05/challenges
#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int ar[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &ar[i][j]);
        }
    }
    int n=row-1;
    int m=col-1;
    for(int i=0; i<col; i++){
        printf("%d ", ar[n][i]);
    }
    printf("\n");
    for(int j=0; j<row; j++){
        printf("%d ", ar[j][m]);
    }
    return 0;
}