#include<stdio.h>

struct house
{
    int room_quantity;
    int established_year;
    char city[100];
};


int main(){
    int N;

    printf("Enter the size: ");
    scanf("%d", &N);

    struct house h[N];

    for(int i = 0; i < N; i++){
        printf("\nDetails for the hosue No[%d]: \n", i);
        printf("Room quantity: ");
        scanf("%d", &h[i].room_quantity);
        printf("Established year: ");
        scanf("%d", &h[i].established_year);
        printf("City: ");
        scanf("%s", &h[i].city);
    }

    printf("\nHouse Details: \n");
    for(int i = 0; i < N; i++){
        printf("\nDetails for the hosue No[%d]: \n", i);
        printf("Room quantity: %d \n", h[i].room_quantity);
        printf("Established year: %d \n", h[i].established_year);
        printf("City: %s \n", h[i].city);
    }

    return 0;
}