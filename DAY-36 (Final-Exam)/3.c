#include<stdio.h>

int revNumber(int num){
    int revNum = 0;

    if(num >= 1000){
        printf("Number should not be more than of 3 digit");
        return 0;
    }

    while (num != 0)
    {
        revNum = revNum * 10 + num%10;
        num = num/10;
    }

    return revNum;
}
int main(){
    int num, revNum = 0;

    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    printf("Reverse of number is: %d", revNumber(num));
    
    
    return 0;
}