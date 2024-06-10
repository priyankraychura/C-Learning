#include<stdio.h>

int main(){
    float agnle1, angle2, angle3;

    printf("Enter the Angle-1: ");
    scanf("%f", &agnle1);
    printf("Enter the Angle-2: ");
    scanf("%f", &angle2);

    angle3 = 180 - (agnle1 + angle2);

    printf("Angle 3 is: %.2f", angle3);

    return 0;
}