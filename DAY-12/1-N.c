#include<stdio.h>

int main(){
    int a = 1, num;

    printf("Enter any number: ");
    scanf("%d", &num);

    while(a <= num){
        printf("%d ", a);
        a++;
    }

    return 0;
}