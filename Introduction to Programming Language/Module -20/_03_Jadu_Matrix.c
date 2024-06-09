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
    int pri_flag=1;
    int sec_flag =1;
    if(row !=col){
        pri_flag=0;
        sec_flag=0;
    }
    if(row==col){
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(i==j && ar[i][j]!=1){
                    pri_flag = 0;

                }
                if(i+j == row-1 && ar[i][j]!=1){
                    sec_flag = 0;
                }
                if((i!=j && i+j!=row-1) && ar[i][j] !=0){
                    pri_flag=0;
                    sec_flag=0;
                }
            }
        }
    }
    if((pri_flag && sec_flag)==1){
        printf("YES");
    }
    else{
        printf("NO");
    }


    return 0;
}