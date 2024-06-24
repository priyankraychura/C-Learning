#include<stdio.h>

int main(){
    for(int row = 1; row <= 5; row++){
        for(int col = 1; col <= 5; col++){
            if(row == 2){
                if(col == 2 || col == 3 || col == 4){
                    printf("- ");
                    continue;
                }
            }
            
            if(row == 4 || row == 5){
                if(col == 2 || col == 3 || col == 4 || col == 5){
                    printf("- ");
                    continue;
                }
            }

            printf("* ");
        }
        printf("\n");
    }

    return 0;
}