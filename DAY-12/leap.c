#include<stdio.h>

int main(){
    int start, end;

    printf("Enter the start: ");
    scanf("%d", &start);
    printf("Enter the end: ");
    scanf("%d", &end);

    while(start <= end){
        if(start%4 == 0){
            printf("%d\n", start);
        }
        start++;
    }

    return 0;
}