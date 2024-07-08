#include<stdio.h>

int strLen(char n[100]){
    int  count = 0;

    while(n[count] != '\0'){
        count++;
    }

    printf("%d", count);
}

int main(){
    char name[100];

    printf("Enter a name: ");
    gets(name);
    return 0;
}