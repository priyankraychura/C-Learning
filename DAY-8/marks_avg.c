#include<stdio.h>

int main(){
    float sub1, sub2, sub3;
    float avg;

    printf("Enter Subject 1 marks: ");
    scanf("%f", &sub1);

    printf("Enter Subject 2 marks: ");
    scanf("%f", &sub2);

    printf("Enter Subject 3 marks: ");
    scanf("%f", &sub3);

    if(sub1 > 100 || sub2 > 100 || sub3 > 100){
        printf("The subject marks entered should is equal to or less than 100");
    } else{
        avg = (sub1 + sub2 + sub3)/3;
    }

    printf("Average Marks: %.2f", avg);

    return 0;
}