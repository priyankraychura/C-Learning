#include<stdio.h>

int main(){
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks <= 40){
        printf("C");
    } else if(marks <= 80){
        printf("B");
    } else if(marks <= 90){
        printf("A");
    } else if(marks <= 100){
        printf("A++");
    } else{
        printf("Makrs cannot me more than 100");
    }

    return 0;
}