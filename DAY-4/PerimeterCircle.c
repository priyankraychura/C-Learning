#include<stdio.h>
#define PI 3.14

int main(){
    float r, perimeter;

    printf("Enter the value of r: ");
    scanf("%f", &r);

    perimeter = 2 * PI * r;

    printf("The value of Perimeter is: %.2f", perimeter);

    return 0;
}