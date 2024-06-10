#include<stdio.h>

int main(){
    float c, f;

    printf("Enter the Celcius: ");
    scanf("%f", &c);

    f = (c * 9/5) + 32;

    printf("Celcius %f converted to Fahrenheit is %.2f.", c, f);

    return 0;
}