#include<stdio.h>

int arrSum(int n[10], int s){
    int  sum = 0;

    for(int i = 0; i < s; i++){
        sum += n[i];
    }

    printf("Sum of an array is: %d", sum);
}

int main(){
    int size;

    printf("Enter size: ");
    scanf("%d", &size);
    
    int num[size];

    for(int i = 0; i < size; i++){
        printf("Enter value for[%d]: ", i);
        scanf("%d", &num[i]);
    }

    arrSum(num, size);

    return 0;
}