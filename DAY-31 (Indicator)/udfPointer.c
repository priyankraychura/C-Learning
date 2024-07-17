#include<stdio.h>

void cubeArr(int *ptr, int size){
    int cube;

    printf("\nCube of array element is: \n");
    for(int i = 0; i < size; i++){
        cube = *(ptr+i);
        printf("cube of array element[%d]: %d \t \n",i, cube * cube * cube);
    }
}

int main(){
    int size;

    printf("Enter the size of an array: ");
    scanf("%d", &size);

    int arr[size];
    int *ptr = arr;

    for(int i = 0; i < size; i++){
        printf("Enter value for[%d]: ", i);
        scanf("%d", ptr+i);
    }

    cubeArr(ptr, size);

    return 0;
}