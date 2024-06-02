#include<stdio.h>
int main()
{
    int n;
    while (scanf("%d",&n) != EOF)
    {
        if(n==1999){
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
        
    }
    
    return 0;
}



// #include<stdio.h>
// int main()
// {
//     int n;
//     for(int i=1; i<=1000; i++){
//         scanf("%d", &n);
//         if(n==1999){
//             printf("Correct\n");
//             break;
//         }
//         else{
//             printf("Wrong\n");
//         }
//     }

//     return 0;
// }