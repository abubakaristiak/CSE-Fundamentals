// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     long long d;
//     scanf("%d %d %d %lld", &a, &b, &c, &d);
//     if(a+b*c==d){
//         printf("YES\n");
//     }
//     else if(a+b-c==d){
//         printf("YES\n");

//     }
//     else if(a-b+c==d){
//         printf("YES\n");

//     }
//     else if(a-b*c==d){
//         printf("YES\n");

//     }
//     else if(a*b+c==d){
//         printf("YES\n");

//     }
//     else if(a*b-c==d){
//         printf("YES\n");

//     }
//     else{
//         printf("NO\n");
//     }
//     return 0;
// }
    
    
#include<stdio.h>
int main()
{
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    if(a+b*c==d){
        printf("YES\n");
    }
    else if(a+b-c==d){
        printf("YES\n");

    }
    else if(a-b+c==d){
        printf("YES\n");

    }
    else if(a-b*c==d){
        printf("YES\n");

    }
    else if(a*b+c==d){
        printf("YES\n");

    }
    else if(a*b-c==d){
        printf("YES\n");

    }
    else{
        printf("NO\n");
    }
    return 0;
}