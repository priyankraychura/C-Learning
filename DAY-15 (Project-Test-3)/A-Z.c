#include<stdio.h>

int main(){
    char ch = 'A';

    while(ch <= 'Z'){
        printf("%c ", ch);
        ch += 4;
    }

    return 0;
}