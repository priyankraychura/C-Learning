#include<stdio.h>

int main(){
    int size;

    printf("Enter an array size: ");
    scanf("%d", &size);

    int box[size];

    for(int i = 0; i < size; i++){
        printf("a[%d] = ", i);
        scanf("%d", &box[i]);
    }

    return 0;
}