// function declare method  -01
// Return + Parameter
#include<stdio.h>
int sum(int x, int y){
    int sum = x+y;
    return sum;
}

int main()
{
    int s= sum(10,20);
    // printf("%d",s);

    printf("%d",sum(10,20));
    
    return 0;
}


// method -02
// #include<stdio.h>
// int sum(int x, int y);
// int main()
// {
//     int s= sum(10,20);
//     // printf("%d",s);

//     printf("%d",sum(10,20));
    
//     return 0;
// }
// int sum(int x, int y){
//     int sum = x+y;
//     return sum;
// }
