#include<stdio.h>

int main(){
    char buffer[100], data[100];

    FILE *ptr = fopen("demo.txt", "r");

    while(fgets(buffer, sizeof(buffer), ptr) != NULL){
        printf("%s", buffer);
    }

    return 0;
}