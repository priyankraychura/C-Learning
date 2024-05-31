#include<stdio.h>

int main(){
    int num1 = 12, num2 = 6;
    int sum = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;
    int div = num1 / num2;
    int modulo = num1 % num2;

    printf("Addition of %d and %d is %d \n", num1, num2, sum);
    printf("Substration of %d and %d is %d \n", num1, num2, sub);
    printf("Multiplication of %d and %d is %d \n", num1, num2, mul);
    printf("Division of %d and %d is %d \n",num1, num2, div);
    printf("Modulo of %d and %d is %d \n",num1, num2, modulo);
}