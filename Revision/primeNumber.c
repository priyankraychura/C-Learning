#include<stdio.h>

int checkPrime(int num){
    int count = 0;

    for(int i = 1; i <= num; i++){
        if(num%i == 0){
            count++;
        } 
    }

    if(count == 2){
        return num;
    } else{
        return 0;
    }
}

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        if(checkPrime(i) > 0){
            printf("%d ", checkPrime(i));
        }
    }

    return 0;
}