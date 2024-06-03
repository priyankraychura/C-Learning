#include<stdio.h>

int main(){
    float b, h, area;

    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of h: ");
    scanf("%f", &h);

    area = ((1/2) * b * h);

    printf("Area of triangle is: %.2f", area);

    return 0;
}