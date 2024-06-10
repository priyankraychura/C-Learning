#include<stdio.h>

int main(){
    int num1, num2;

    printf("Enter a number 1: ");
    scanf("%d", &num1);
    printf("Enter a number 2: ");
    scanf("%d", &num2);

    if(num1 != num2){
        if(num1 < num2){
            printf("%d is minimum number.", num1);
        } else{
            printf("%d is minimum number.", num2);
        }
    } else{
        printf("Num1 and Num2 are same");
    }

    return 0;
}