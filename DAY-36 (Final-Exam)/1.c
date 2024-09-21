#include<stdio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num)
    {
    case num > 0:
        printf("Positive Number.");
        break;

    case num < 0:
        printf("Negative Number.");
        break;

    case num == 0:
        printf("Number is Zero");
        break;
    
    default:
        break;
    }

    return 0;
}