#include<stdio.h>

int main(){
    FILE *file = fopen("num.txt", "w");

    if(file == NULL){
        printf("Failed to open file!");
        return 0;
    }

    for(int i = 1; i <= 50; i++){
        if(i % 3 == 0 && i % 5 == 0){
            fprintf(file, "%d \n", i);
        }
    }

    printf("File written successfully!");

    return 0;
}