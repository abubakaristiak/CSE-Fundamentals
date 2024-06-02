//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A
#include<stdio.h>
int add_two_num(int x, int y){
    return x+y;
}
int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    int sum = add_two_num(x,y);
    printf("%d", sum);
    return 0;
}