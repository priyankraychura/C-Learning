#include<stdio.h>
#include<string.h>

struct structEmp
{
    int emp_id;
    char emp_name[50];
    int emp_age[50];
    char emp_role[50];
    char emp_city[50];
    int emp_experiance[50];
    char emp_company_name[50];
};


int main(){
    int N;

    printf("Enter the number of employees: ");
    scanf("%d", &N);

    struct structEmp e[N];

    for(int i = 0; i < N; i++){
        printf("\nDetails of Employee: %d", i);

        printf("\nEmployee Id: ");
        scanf("%d", &e[i].emp_id);
        printf("Employee name: ");
        scanf("%s", &e[i].emp_name);
        printf("Employee age: ");
        scanf("%d", &e[i].emp_age);
        printf("Employee role: ");
        scanf("%s", &e[i].emp_role);
        printf("Employee city: ");
        scanf("%s", &e[i].emp_city);
        printf("Employee experiance: ");
        scanf("%d", &e[i].emp_experiance);
        printf("Employee company name: ");
        scanf("%s", &e[i].emp_company_name);
    }

    printf("\nEmployees Data: \n");

    for(int i = 0; i < N; i++){
        printf("\nDetails of Employee: %d \n", i);

        printf("Employee Id: %d \n", e[i].emp_id);
        printf("Employee naem: %s \n", e[i].emp_name);
        printf("Employee age: %d \n", e[i].emp_age);
        printf("Employee role: %s \n", e[i].emp_role);
        printf("Employee city: %s \n", e[i].emp_city);
        printf("Employee experiance: %d \n", e[i].emp_experiance);
        printf("Employee company name: %s \n", e[i].emp_company_name);
    }

    return 0;
}