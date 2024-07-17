#include<stdio.h>

int main(){
    int size;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    int arr[size];
    int *ptr = arr;
    int **pointer = &ptr;

    for(int i = 0; i < size; i++){
        printf("Enter value for[%d]: ", i);
        scanf("%d", *pointer+i);
    }

    int square;

    printf("\n");
    for(int i = size-1; i >= 0; i--){
        square = *(*pointer + i);
        printf("Enter value of[%d] is: %d \n", i, square * square);
    }

    return 0;
}