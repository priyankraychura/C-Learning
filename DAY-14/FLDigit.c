#include<stdio.h>

int main(){
    int num = 5349, sum = 0, FirstDigi, count = 0, LastDigi;
    int temp = num;


    while(temp != 0){
        temp = temp/10;
        count++;
    }

    LastDigi = num%10;

    while (count != 1)
    {
        num = num/10;
        count--;
    }
    
    FirstDigi = num;

    sum = FirstDigi + LastDigi;

    printf("First Digit: %d\n", FirstDigi);
    printf("Last Digit: %d\n", LastDigi);
    printf("Sum: %d\n", sum);

    return 0;
}