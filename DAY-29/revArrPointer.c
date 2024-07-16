#include<stdio.h>

int main(){
    int size;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    int arr[size];
    int *ptr = arr;

    for(int i = 0; i < size; i++){
        printf("Enter value for[%d]: ", i);
        scanf("%d", ptr+i);
    }

    printf("\n");
    for(int i = size-1; i >= 0; i--){
        printf("Enter value of[%d] is: %d \n", i, (*(ptr+i) * *(ptr+i)));
    }

    return 0;
}