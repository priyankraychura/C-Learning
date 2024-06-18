#include<stdio.h>

int main(){
    int num = 2344, count = 0, digi;

    while(num != 0){
        digi = num%10;
        num = num/10;
        count++;
    }

    printf("%d", count);

    return 0;
}