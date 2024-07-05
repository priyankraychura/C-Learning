#include<stdio.h>

int arrSum(int n[10]){
    int  sum = 0;

    for(int i = 0; i < 10; i++){
        sum += n[i];
    }

    printf("Sum of an array is: %d", sum);
}

int main(){
    int num[10];

    for(int i = 0; i < 10; i++){
        printf("Enter value for[%d]: ", i);
        scanf("%d", &num[i]);
    }

    arrSum(num);

    return 0;
}