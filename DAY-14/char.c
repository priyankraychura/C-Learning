#include<stdio.h>

int main(){
    int count = 0;

    for (char i = 'A'; i <= 'Z'; i++)
    {
        if (count < 3){
            count++;
            continue;
        }
        printf("%c ", i);
        count = 0;
    }  

    return 0;
}