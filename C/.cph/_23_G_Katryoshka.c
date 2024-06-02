// #include<stdio.h>
// int main()
// {
//     long long int n,m,k;
//     scanf("%lld %lld %lld", &n, &m, &k );
//     long long int mourti_model_1=0,mourti_model_2=0;
//     // first of all find smallest number 
//     if(n<=m && n<=k){
//         mourti_model_1=n;
//     }
//     else if(m<k && m<n){
//         mourti_model_1 = m;
//     }
//     else{
//         mourti_model_1=k;
//     }
//     // printf("%d", mourti_model_1);
//     n = n-mourti_model_1;
//     k = k-mourti_model_1;

//     if(n>=2 && n>=1){
//         if((n/2)<=k){
//             mourti_model_2 = n/2;
//         }
//         else if(n/2>k){
//             mourti_model_2 = k;
//         }
//     }
//     printf("%lld",mourti_model_1+mourti_model_2);

//     return 0;
// }

#include <stdio.h>

int main()
{

    long long int eye, face, body;
    scanf("%lld %lld %lld", &eye, &face, &body);
    long long int ans = 0;
    long long int x;

    if(eye<=face && eye<=body)
        x = eye;
    else if(face<=eye && face<=body)
        x = face;
    else
        x = body;

    ans += x;
    eye -= x;
    face -= x;
    body -= x;

    if(eye/2 < body)
        ans+= eye/2;
    else
        ans+=body;

    printf("%lld\n", ans);
    return 0;
}