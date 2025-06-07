#include<stdio.h>
int main()
{
    int sz;
    scanf("%d",&sz);

    int inp[sz];
    for(int i=0; i<sz; i++){
        scanf("%d",&inp[i]);
    }
    int n;
    scanf("%d", &n);
    int largest = inp[0];
    for(int i=0; i<sz; i++){
        if(inp[i]>largest){
            largest = inp[i];
        }
    }
    int frq[largest+1];
    for(int i=0; i<=largest; i++){
        frq[i] = 0;
    }

    for(int i=0; i<sz; i++){
        frq[inp[i]] = 1;
        // different way
        // int index = inp[i];
        // frq[index] = 1;
    }
    int count=0;
    for(int i=largest; i>=0; i--){
        if(frq[i]==1){
            count++;
        }
        if(count==n){
            printf("%d",i);
            break;
        }

    }

    
    
    return 0;
}