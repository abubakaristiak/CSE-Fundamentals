#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    scanf("%s", c);
    int cnt[26] = {0};
    for(int i=0; i<strlen(c); i++){
        int value = c[i] - 'a';
        cnt[value]++;
        // printf("%d ",value);
    }

    // for(int i=0; i<26; i++){

    //     // printf("%c -> %d\n",i+97,cnt[i]);  this line show all character.

    //     // ja value gula ase tar jonno;
    //     // if(cnt[i] != 0){
    //     //     printf("%c -> %d\n",i+97,cnt[i]);
    //     // }


    // }

    // only inputed string according to ascending order
    // for(int i=0; i<strlen(c); i++){
    //     int value = c[i]-97;
    //     printf("%c -> %d\n",value+'a',cnt[value]);
    // }

    for(int i=0; i<strlen(c); i++){
        int value = c[i]-97;
        if(cnt[value] != 0){
            printf("%c -> %d\n",value+'a',cnt[value]);
        }
        cnt[value] = 0;
    }
    return 0;
}