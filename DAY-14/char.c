#include<stdio.h>

int main(){
    int count = 0;

    // for (char i = 'A'; i <= 'Z'; i++)
    // {
    //     if (count < 3){
    //         count++;
    //         continue;
    //     }
    //     printf("%c ", i);
    //     count = 0;
    // }  

    char num = 'A';

    while (num <= 'Z')
    {
        printf("%c ", num);
        num = num + 4;
    }

    return 0;
}