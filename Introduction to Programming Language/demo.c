// #include<stdio.h>
// #include<limits.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int a[n];

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     int max_value = INT_MIN;
//     int min_value = INT_MAX;
//     int max_index, min_index;

//     for(int i = 0; i < n; i++) {
//         if(a[i] > max_value) {
//             max_value = a[i];
//             max_index = i;
//         }
//         if(a[i] < min_value) {
//             min_value = a[i];
//             min_index = i;
//         }
//     }

//     // printf("Index of maximum value: %d\n", max_index);
//     // printf("Index of minimum value: %d\n", min_index);

//     int temp = a[max_index];
//     a[max_index] = a[min_index];
//     a[min_index] = temp;

//     for (int i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");

//     return 0;
// }

// //way to

// #include<stdio.h>
// int main()
// {
//     char a[10];
//     fgets(a, sizeof(a)/sizeof(char),stdin);
//     printf("%s ",a);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[] = "Hello";
//     char str2[] = "Hello";
//     char str3[] = "Hi";

//     // Compare str1 and str2, and print the result
//     // printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)

//     // Compare str1 and str3, and print the result
//     printf("%d\n", strcmp(str1, str3));  // Returns -4 (the strings are not equal)
//     return 0;
// }

// #include<stdio.h>
// int main(){
// for(int i=0;i<26;i++){
//     printf("%d->%c\n",i,i+97);
// }

// char ch = getchar();
// printf("%d",ch-97);

//     char ch;
//     int fq[26] = {0};

//     while(scanf("%c",&ch)!=EOF){
//         int index = ch - 97;
//         fq[index]+=1;
//     }

//     for(int i=0;i<26;i++){
//         if(fq[i]>0){
//             printf("%c : %d\n",i+97,fq[i]);
//         }
//     }

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     for(int i=0; i<t; i++){
//         char ar[10001];
//         scanf("%s",ar);
//         int count_small=0, count_captial=0, count_digit=0;
//         for(int i=0; i<strlen(ar); i++){
//             if(ar[i]>='a' && ar[i]<='z'){
//                 count_small++;
//             }
//             if(ar[i]>='A' && ar[i]<='Z'){
//                 count_captial++;
//             }
//             if(ar[i]>='0' && ar[i]<='9'){
//                 count_digit++;
//             }
//         }
//         printf("%d %d %d\n",count_captial,count_small,count_digit);
//         }

//     return 0;
// }
//

// Kathasaya....problem:

// #include <stdio.h>

// int main()
// {

//     long long int eye, face, body;
//     scanf("%lld %lld %lld", &eye, &face, &body);
//     long long int ans = 0;
//     long long int x;

//     if(eye<=face && eye<=body)
//         x = eye;
//     else if(face<=eye && face<=body)
//         x = face;
//     else
//         x = body;

//     ans += x;
//     eye -= x;
//     face -= x;
//     body -= x;

//     if(eye/2 < body)
//         ans+= eye/2;
//     else
//         ans+=body;

//     printf("%lld\n", ans);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[51], b[51];
//     scanf("%s %s", &a, &b);

//     int a_len = strlen(a);
//     int b_len = strlen(b);

//     int max=0;
//     if(a_len>b_len){
//         max = a_len;
//     }
//     else{
//         max = b_len;
//     }

//     for(int i=0; i<max; i++){
//         if(i<a_len){
//             printf("%c",a[i]);
//         }
//         if(i<b_len){
//             printf("%c",b[i]);
//         }

//     }
//     printf("\n");

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n,k=5;
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         for(int j=k; j>=0; j++){
//             printf("*");
//         }
//         k--;
//         printf("\n");
//     }
//     return 0;
// }




// #include<stdio.h>

// int main() {
//     int n;
//     scanf("%s", &n);
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int n;
//     int k=1;
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=k; j++)
//         {
//             printf("*");
//         }
//         k++;
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n; 
//     scanf("%d", &n);
//     int s=n-1,k=1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=s; j++){
//             printf(" ");
//         }

//         for(int j=1; j<=k; j++){
//             printf("*");
//         }
//         s--;
//         k=k+2;
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n; 
//     scanf("%d", &n);
//     int s=0,k=2*n-1;
//     for(int i=1; i<=n; i++){
//         for(int j=s; j>=1; j--){
//             printf(" ");
//         }

//         for(int j=k; j>=1; j--){
//             printf("*");
//         }
//         s++;
//         k=k-2;
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// void print_x(int x){
//     if(x>0){
//         for(int i = x;i>=(-x);i--){
//             printf("%d ",i);
//         }
//     }
//     else if(x<0){
//         for(int i = x;i<=(x*(-1));i++){
//             printf("%d ",i);
//         }
//     }
// }
// int main(){
//     print_x(5);
//     return 0;
// }











