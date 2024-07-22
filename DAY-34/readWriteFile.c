#include<stdio.h>

int main(){
    FILE *read = fopen("demo.txt", "r");
    FILE *write = fopen("copy.txt", "w");
    char line[500];

    if(read == NULL || write == NULL){
        printf("Failed to open file");
        return 0;
    }

    while(fgets(line, sizeof(line),  read)){
        fputs(line, write);
    }

    printf("File written successfully!");


    fclose(read);
    fclose(write);

    return 0;
}