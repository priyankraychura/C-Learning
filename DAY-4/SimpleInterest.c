#include<stdio.h>

int main(){
    int p, n;
    float r, si;

    printf("Enter the value of p: ");
    scanf("%d", &p);

    printf("Enter the value of r: ");
    scanf("%f", &r);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    si = (p * r * n)/100;

    printf("Simple interst is: %.2f", si);

    return 0;
}