#include<stdio.h>

int main(){
    FILE *file = fopen("demo.txt", "r");
    char line[100];

    if(file == NULL){
        printf("Failed to open file!");
        return 0;
    }

    while (fgets(line, sizeof(line), file))
    {
        printf("%s", line);
    }
    
    fclose(file);

    return 0;
}