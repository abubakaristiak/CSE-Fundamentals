//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d", &row, &col);
    int ar[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &ar[i][j]);
        }
    }
    int x;
    scanf("%d", &x);
    int flag=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(ar[i][j] == x){
                flag=1;
                break;
            }
        }
    }
    if(flag == 1){
        printf("will not take number");
    }
    else{
        printf("will take number");
    }
    return 0;
}