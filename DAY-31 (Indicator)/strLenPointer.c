#include<stdio.h>

int main(){
    char str[100];

    printf("Enter a string: ");
    gets(str);

    char *ptr = str;
    int size = 0;

    for(int i = 0; *(ptr+i) != '\0'; i++){
        size++;
    }

    printf("Size of the string is: %d", size);
    

    return 0;
}