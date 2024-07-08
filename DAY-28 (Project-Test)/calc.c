#include<stdio.h>

int menu(){
    printf("Enter 1 for + \n");
    printf("Enter 2 for - \n");
    printf("Enter 3 for * \n");
    printf("Enter 4 for / \n");
    printf("Enter 5 for modulo \n");
    printf("Enter 0 for the exit \n");
}

int addition(int a, int b){
    return a + b;
}

int substration(int a, int b){
    return a - b;
}

int multiplication(int a, int b){
    return a * b;
}

int division(int a, int b){
    return a / b;
}

float modulo(int a, int b){
    return a % b;
}


int main(){
    int choice, num1, num2;

    while (1)
    {
        menu();

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 0){
        	printf("Exiting....");
            return 0;
        } else if(choice > 5){
            printf("Invalid choice");
            return 0;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice)
        {
            case 1:
                printf("\nAddition of %d and %d is: %d \n\n", num1, num2, addition(num1, num2));
                break;
            case 2:
                printf("\nSubstration of %d and %d is: %d \n\n", num1, num2, substration(num1, num2));
                break;
            case 3:
                printf("\nMultiplication of %d and %d is: %d \n\n", num1, num2, multiplication(num1, num2));
                break;
            case 4:
                printf("\nDivison of %d and %d is: %d \n\n", num1, num2, division(num1, num2));
                break;
            case 5:
                printf("\nModulo of %d and %d is: %f \n\n", num1, num2, modulo(num1, num2));
                break;
        }   
    }
    

    return 0;
}