#include<stdio.h>

int main(){
    int N;
    char name[100], role[100];

    printf("Enter the number of employee: ");
    scanf("%d", &N);

    FILE *file = fopen("data.txt", "w");

    if(file == NULL){
        printf("Failed to open file");
        return 0;
    }

    for(int i = 1; i <= N; i++){
        printf("Details of employee no: %d \n", i);
        fprintf(file, "Details of employee no: %d \n", i);
        // fputs("Details of employee no: %d", i, file);
        printf("Enter the name: ");
        scanf("%s", &name);
        fprintf(file, "name: %s \n", name);
        printf("Enter role: ");
        scanf("%s", &role);
        fprintf(file, "role: %s \n\n", role);
        printf("\n");
    }

    printf("Data written successfully!");
    fclose(file);

    return 0;
}