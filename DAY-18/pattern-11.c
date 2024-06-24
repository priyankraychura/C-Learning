#include <stdio.h>

int main() {
    for (int row = 1; row <= 5; row++) { //row = 3
        for(int col = 4; col >= row; col--){
            printf("- ");
        }

        for (int col = 1; col <= 2*row - 1; col++) { // 3
            printf("* ");
        }
        printf("\n"); 
    }

    return 0;
}
