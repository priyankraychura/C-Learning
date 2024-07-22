#include<stdio.h>

int main(){
    FILE *file = fopen("demo.txt", "w");

    if(file == NULL){
        printf("Failed to open file!");
        return 0;
    }

    fputs("This is some new content\n", file);
    fputs("This is another line\n", file);
    
    fclose(file);

    return 0;
}