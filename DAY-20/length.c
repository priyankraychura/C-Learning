#include<stdio.h>

int main(){
    int size, count = 0;

    printf("Enter an array size: ");
    scanf("%d", &size);

    int box[size];

    for(int i = 0; i < size; i++){
        printf("a[%d] = ", i);
        scanf("%d", &box[i]);
        count++;
    }

    printf("Size of array is: %d", count);

    return 0;
}