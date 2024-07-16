#include<stdio.h>

int main(){
    int num1, num2, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("Values after swaping: %d and %d", num1, num2);


    return 0;
}