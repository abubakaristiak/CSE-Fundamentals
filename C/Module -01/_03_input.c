#include <stdio.h>
int main(){
    // int rahim;
    // float f;
    // char c;
    // scanf("%d %f %c", &rahim, &f, &c);
    // printf("%d %0.2f %c", rahim,f,c);


    // when i input 10% and 20%
    // method -1
    // int a, b;
    // char p;
    // scanf("%d%c %d%c", &a,&p, &b,&p);
    // printf("%d% %d%%", a,b);

  
    //method -2
    int a, b;
    scanf("%d%% %d%%",&a, &b);
    printf("%d%% %d%%", a,b);
    return 0;


}