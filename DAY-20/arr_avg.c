#include<stdio.h>

int main(){
    int size, sum = 0, avg;

    printf("Enter an array size: ");
    scanf("%d", &size);

    int box[size];

    for(int i = 0; i < size; i++){
        printf("a[%d] = ", i);
        scanf("%d", &box[i]);
    }

    for(int i = 0; i < size; i++){
        sum = sum + box[i];
    }

    avg = sum / size;

    printf("Sum of an array is: %d\n", sum);
    printf("Average of an array is: %d", avg);

    return 0;
}