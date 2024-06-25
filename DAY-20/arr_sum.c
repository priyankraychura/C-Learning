#include<stdio.h>

int main(){
    int size;

    printf("Enter an array size: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], arr3[size];

    printf("\nEnter values for array 1: \n");
    for(int i = 0; i < size; i++){
        printf("arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter values for array 2: \n");
    for(int i = 0; i < size; i++){
        printf("arr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < size; i++){
        arr3[i] = arr1[i] + arr2[i];
    }

    printf("\nSum is: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr3[i]);
    }

    return 0;
}