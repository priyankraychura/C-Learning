#include<stdio.h>
#include<string.h>

struct Students
{
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    char stu_standard[20];
    char stu_scool[50];
};


int main(){
    struct  Students s1, s2, s3;

    s1.stu_id = 7597;
    strcpy(s1.stu_name, "Priyank");
    s1.stu_age = 22;
    strcpy(s1.stu_course, "Full Stack");
    strcpy(s1.stu_city, "Rajkot");
    strcpy(s1.stu_standard, "TY BCA");
    strcpy(s1.stu_scool, "Christ College");

    printf("Student id is: %d\n", s1.stu_id);
    printf("Student name is: %s\n", s1.stu_name);
    printf("Student age is: %d\n", s1.stu_age);
    printf("Course is: %s\n", s1.stu_course);
    printf("City is: %s\n", s1.stu_city);
    printf("Standard is: %s\n", s1.stu_standard);
    printf("Scool is: %s\n\n", s1.stu_scool);

    s2.stu_id = 7580;
    strcpy(s2.stu_name, "Madhav");
    s2.stu_age = 27;
    strcpy(s2.stu_course, "Full Stack");
    strcpy(s2.stu_city, "Rajkot");
    strcpy(s2.stu_standard, "MBA");
    strcpy(s2.stu_scool, "Marvadi University");

    printf("Student id is: %d\n", s2.stu_id);
    printf("Student name is: %s\n", s2.stu_name);
    printf("Student age is: %d\n", s2.stu_age);
    printf("Course is: %s\n", s2.stu_course);
    printf("City is: %s\n", s2.stu_city);
    printf("Standard is: %s\n", s2.stu_standard);
    printf("Scool is: %s\n\n", s2.stu_scool);

    s3.stu_id = 1234;
    strcpy(s3.stu_name, "Chaman Chotiy");
    s3.stu_age = 1;
    strcpy(s3.stu_course, "GIM");
    strcpy(s3.stu_city, "Chapri Bajar");
    strcpy(s3.stu_standard, "Bhel Desgining");
    strcpy(s3.stu_scool, "Mamra University");

    printf("Student id is: %d\n", s3.stu_id);
    printf("Student name is: %s\n", s3.stu_name);
    printf("Student age is: %d\n", s3.stu_age);
    printf("Course is: %s\n", s3.stu_course);
    printf("City is: %s\n", s3.stu_city);
    printf("Standard is: %s\n", s3.stu_standard);
    printf("Scool is: %s\n", s3.stu_scool);

    return 0;
}