#include<stdio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0){
        printf("Number is Negative");
    } else if(num == 0){
        printf("Numebr is Neutral");
    } else{
        printf("Number is Positive");
    }

    return 0;
}