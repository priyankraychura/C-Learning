#include<stdio.h>

int main(){
    int size, value;

    printf("Enter the size of an array: ");
    scanf("%d", &size);
    
    int arr[size], revArr[size];
    int *ptr = arr;

    for(int i = 0; i < size; i++){
        printf("Enter value of[%d]: ", i);
        scanf("%d", ptr + i); 
    }

    printf("\nSquare values are: \n");

    for(int i = 0; i < size; i++){
        value = *(ptr + i);
        printf("Square of[%d] is %d \n", i, value * value);
    }
    
    return 0;
}