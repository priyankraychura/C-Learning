#include<stdio.h>

int main(){
    int a = 1, num;

    printf("Enter any number: ");
    scanf("%d", &num);

    while(num >= a){
        printf("%d ", num);
        num--;
    }

    return 0;
}