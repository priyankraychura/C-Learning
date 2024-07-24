#include<stdio.h>

int main(){
    int size, min;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    min = arr[0];
    for(int i = 0; i < size; i++){
        printf("Enter the value of[%d]: ", i);
        scanf("%d", &arr[i]);

        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("Smallest element in array is: %d", min);

    return 0;
}