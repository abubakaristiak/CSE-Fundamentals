#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    if(n>1000){
        printf("I will buy Punjabi\n");
        if(n>=1500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else{
        printf("Bad luck!\n");
    }
    return 0;
    
}



