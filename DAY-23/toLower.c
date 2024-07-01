#include<stdio.h>

int main(){
    char box[100];

    printf("Enter a String: ");
    gets(box);

    for(int i = 0; box[i] != 0; i++){
        if(box[i] >= 'a' && box[i] <= 'z'){
            box[i] -= 32;
        }
        printf("%c", box[i]);
    }

    return 0;
}