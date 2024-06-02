//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-05/challenges/tiger-vs-pathan
#include<stdio.h>
#include<string.h>
int main()
{
   
    int n;
    scanf("%d", &n);
    getchar();
    for(int i=0; i<n; i++){
        int num;
        scanf("%d", &num);
        getchar();
        char r[num+1];
        fgets(r, sizeof(r), stdin);
        int t_count=0;
        int p_count=0;
        int i=0;
        while(r[i] !='\0'){
            if(r[i] == 'T'){
                t_count++;
            }
            if(r[i] == 'P'){
                p_count++;
            }
            i++;
        }
        if(t_count>p_count){
            printf("Tiger\n");
        }
        else if(p_count>t_count){
            printf("Pathaan\n");
        }
        else{
            printf("Draw\n");
        }
    }

    return 0;
} 



