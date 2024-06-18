#include<stdio.h>

int main(){
    int num = 234, sum = 0, digi;

    while(num != 0){
        digi = num%10;
        num = num/10;
        sum = sum + digi;
    }

    printf("%d", sum);

    return 0;
}