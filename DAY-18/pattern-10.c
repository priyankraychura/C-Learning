#include <stdio.h>

int main() {
    for (int row = 1; row <= 5; row++) {
        for(int col = 4; col >= row; col--){
            printf("- ");
        }

        for (int col = 1; col <= 2*row - 1; col++) {
            if(col > row){
                printf("%d ", (row * 2) - col );
            }else{
                printf("%d ", col);
            }
        }
        printf("\n"); 
    }

    return 0;
}
