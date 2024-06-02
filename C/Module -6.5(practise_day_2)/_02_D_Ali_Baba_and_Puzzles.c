// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     long long d; this is wrong program because different type of datatype use in single scanf function. it's totally wrong.
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
    
// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D 
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