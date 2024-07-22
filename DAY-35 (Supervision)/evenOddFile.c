#include<stdio.h>

int main(){
    FILE *even = fopen("even.txt", "w");
    FILE *odd = fopen("odd.txt", "w");

    if(even == NULL || odd == NULL){
        printf("Failed to open file!");
        return 0;
    }

    for(int i = 50; i <= 70; i++){
        if(i % 2 == 0){
            fprintf(even, "%d \n", i);
        } else{
            fprintf(odd, "%d \n", i);
        }
    }

    fclose(even);
    fclose(odd);

    return 0;
}