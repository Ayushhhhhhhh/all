#include <stdio.h>
struct Student
{
    char name;
    int rollno;
    int dob;
    char address;
};
struct Person
{
    char name[50];
    int idNo;
    float salary;
};

int main()
{
    struct Student g1 = {.rollno = 24};
    printf("%d", g1.rollno);
    return 0;
}