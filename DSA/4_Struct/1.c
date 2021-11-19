#include <stdio.h>
struct Student
{
    char name[30];
    int rollno;
    int dob;
    char address[100];
};
struct Person
{
    char name[50];
    int idNo;
    float salary;
};

int main()
{

    struct Student g1 = {"Ayush Singhal", 24, 041102, "SKIT Jaipur"};
    struct Student g2 = {"Harshit Sen", 42, 28121997, "Room no :18"};
    printf("Student information :\n");
    printf("%s\n", g1.name);
    printf("%d\n", g1.rollno);
    printf("%d\n", g1.dob);
    printf("%s\n", g1.address);

    printf("Student information :\n");
    printf("%s\n", g2.name);
    printf("%d\n", g2.rollno);
    printf("%d\n", g2.dob);
    printf("%s\n", g2.address);

    return 0;
}