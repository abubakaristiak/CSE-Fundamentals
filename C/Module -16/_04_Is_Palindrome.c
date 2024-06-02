//https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-05/challenges
#include<stdio.h>
#include<string.h>
int is_palindrome(char ch[]){
    int str = strlen(ch);
    int i=0;
    int j=str-1;
    int flag = 1;
    while(i<j){
        if(ch[i] != ch[j]){
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if(flag == 1){
        // printf("Palindrome");
        return 1;
    }
    else{
        // printf("Not Palindrome");
        return 0;
    }
}
int main()
{
    
    char ch[1001];
    scanf("%s", ch);
    int value = is_palindrome(ch);
    if(value == 1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");  
    }
    

    return 0;
}