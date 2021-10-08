#include <iostream>
using namespace std;

class student
{
private:
    char name[50];
    int rollno;

public:
    void scan()
    {
        cout << "Enter Name of the Student :" << endl;
        gets(name);
    }
    void display()
    {
        cout << name;
    }
};
int main()
{
    student s1;
    s1.scan();
    s1.display();
    return 0;
}