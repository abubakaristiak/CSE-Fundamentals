#include<stdio.h>
int dorgo(char ch[]){
    int i=0;
    int count=0;
    while(ch[i] !='\0'){
        count++;
        i++;
    }
    return count;
}
int main()
{
    char ch[100];
    scanf("%s", &ch);
    int c = dorgo(ch);
    printf("%d\n", c);
    

    return 0;
}

