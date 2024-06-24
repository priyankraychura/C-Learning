#include<stdio.h>

int main(){
    for(int row = 5; row >= 1; row--){
        for(int col = 5; col > row; col--){
            printf("- ");
        }

        for(int col = row; col >= 1; col--){
            if(col%2 == 1){
                printf("1 ");
            } else{
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}