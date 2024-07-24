#include <stdio.h>

int main() {
    int n = 5, num = 10, square; 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            square = num * num;
            printf("%d ", square);
        }
        num--; 
        printf("\n");
    }

    return 0;
}
