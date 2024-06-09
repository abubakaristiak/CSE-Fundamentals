// #include<stdio.h>
// int main()
// {
//     int n; 
//     scanf("%d", &n);
//     int ar[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &ar[i]);
//     }
//     int max = ar[0];
//     int second_max = ar[1];
//     int index = 0;

//     if(second_max >max){
//         int temp = max;
//         max = second_max;
//         second_max = temp;
//         int index = 1;

//     }
//     for(int i=2; i<n; i++){
//         if(ar[i]>max){
//             second_max = max;
//             max = ar[i];
//             index = i;
//         }
//         else if(ar[i] >second_max && ar[i] !=max){
//             second_max = ar[i];
//             index = i;
//         }
//     }
//     printf("%d %d", second_max, index);
//     return 0;
// }


#include<stdio.h>

int main() {
    int n; 
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    
    int max = ar[0];
    int second_max = ar[1];
    int index = 0;

    // Ensure max and second_max are in correct order
    if(second_max > max) {
        int temp = max;
        max = second_max;
        second_max = temp;
        index = 1; // Update index when second_max is swapped with max
    }

    for(int i = 2; i < n; i++) {
        if(ar[i] > max) {
            second_max = max;
            max = ar[i];
            index = i;
        } else if(ar[i] > second_max && ar[i] != max) {
            second_max = ar[i];
            index = i; // Update index when second_max is updated
        }
    }

    // If second_max exists, print its value and index
    if(second_max != -1) {
        printf("Value: %d\n", second_max);
        printf("Index: %d\n", index);
    } else { // Otherwise, print -1 for both value and index
        printf("Value: -1\n");
        printf("Index: -1\n");
    }
    
    return 0;
}
