#include<stdio.h>
#define PI 3.14

int main(){
    float r, area;
    printf("Enter the vlaue of r: ");
    scanf("%f", &r);

    area = PI * (r * r);

    printf("Area of circle is: %.2f", area);
    
    return 0;
}