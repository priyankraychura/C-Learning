#include<stdio.h>

int main(){
    int num, count = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    while(num != 0){
        count++;
        num = num/10;  
    }

    printf("Number of Digits: %d", count);

    return 0;
}