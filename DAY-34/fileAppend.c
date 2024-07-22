#include<stdio.h>

int main(){
    FILE *file = fopen("demo.txt", "a");

    if(file == NULL){
        printf("Failed to open file!");
        return 0;
    }

    fputs("This is appended content\n", file);
    fputs("This is another line in the file to be appended\n", file);
    
    fclose(file);

    return 0;
}