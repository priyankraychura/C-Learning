#include<stdio.h>

int main(){
    int baseSal;
    float totalSal, HRA, DA, TA;

    printf("Enter Base Salary: ");
    scanf("%d", &baseSal);

    printf("Enter HRA, DA and TA in order: ");
    scanf("%f %f %f", &HRA, &DA, &TA);

    totalSal = baseSal + (baseSal * (HRA/100) + baseSal * (DA/100) + baseSal * (TA/100));

    printf("Total Salary is: %.2f", totalSal);

    return 0;
}