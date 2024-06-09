//https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/A
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int base, height;
    for(int i=0; i<n; i++){
        scanf("%d %d", &base, &height);
        if(base == height){
            printf("Square\n");
        }
        else{
            printf("Rectangle\n");
        }
    }
    
    
    return 0;
}