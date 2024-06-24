#include<stdio.h>

int main(){
    for(int row = 1; row <= 5; row++){
        for(int col = 1; col <= 5; col++){
            if(row == 2 && col == 2 || row == 2 && col == 3 || row == 2 && col == 4){
                printf("- ");
                continue;
            }
            
            if(row == 4 && col == 2 || row == 4 && col == 3 || row == 4 && col == 4 || row == 4 && col == 5){
                printf("- ");
                continue;
            }

            if(row == 5 && col == 2 || row == 5 && col == 3 || row == 5 && col == 4 || row == 5 && col == 5){
                printf("- ");
                continue;
            }

            printf("* ");
        }
        printf("\n");
    }

    return 0;
}