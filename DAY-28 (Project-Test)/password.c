#include<stdio.h>
#include<string.h>

int main(){
    char pass[100];
    int hasLetter = 0;
    int hasDigit = 0;
    int hasSpecial = 0;
    int length;

    printf("Enter the password: ");
    scanf("%s", &pass);

    length = strlen(pass);

    if (length <= 6)
    {
        printf("Password is too short.\n");
    } else{
        for(int i = 0; i < length; i++){
            char c = pass[i];
            if((c >= 'A' && c <= 'Z' || (c >= 'a' && c <= 'z'))){
                hasLetter = 1;
            } else if(c >= '0' && c <= '9'){
                hasDigit = 1;
            } else if((c >= '!' && c <= '/') || (c >= ':' && c <= '@') || (c >= '[' && c <= '`') || (c >= '{' && c <= '~')){
                hasSpecial = 1;
            }
        }    
    }

    if(hasLetter && hasDigit && hasSpecial){
        printf("Password is strong");
    } else{
        printf("Password is not strong");
    }
    

    return 0;
}