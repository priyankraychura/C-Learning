#include<stdio.h>

struct Marksheet
{
    int roll_no;
    char name[50];
    int chem_marks;
    int math_marks;
    int phy_marks;
    float perc;
};


int main(){
    int N;

    printf("Enter the number of students: ");
    scanf("%d", &N);

    struct Marksheet s[N];

    for(int i = 0; i < N; i++){
        printf("\nEnter Details of student no: %d \n", i);
        printf("Enter rollno.: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter name: ");
        scanf("%s", &s[i].name);
        printf("Enter Chemistry marks: ");
        scanf("%d", &s[i].chem_marks);
        printf("Enter Mathematics marks: ");
        scanf("%d", &s[i].math_marks);
        printf("Enter Physics marks: ");
        scanf("%d", &s[i].phy_marks);

        s[i].perc = (float)(s[i].chem_marks + s[i].math_marks + s[i].phy_marks)/300 * 100;
    }

    printf("\n");

    for(int i = 0; i < N; i++){
        printf("\nDetails of student no: %d \n", i);
        printf("Roll no is: %d \n", s[i].roll_no);
        printf("Name: %s \n", s[i].name);
        printf("Chemistry marks: %d \n", s[i].chem_marks);
        printf("Mathematics marks: %d \n", s[i].math_marks);
        printf("Physics marks: %d \n", s[i].phy_marks);
        printf("Percentage: %.2f", s[i].perc);
    }

    return 0;
}