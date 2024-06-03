#include<stdio.h>

int main(){
    float l, area;

    printf("Enter the length: ");
    scanf("%f", &l);

    area = l * l;

    printf("Area of length is: %.2f", area);

    return 0;
}