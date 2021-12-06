#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int rollno;
    long long mobileno;

public:
    void scan()
    {
        cout << "Enter Name and mobile no. of the Student :" << endl;
        cin >> name;
        cin >> mobileno;
    }
    void display()
    {
        cout << name << endl;
        cout << mobileno;
    }
};
int main()
{
    student s1;
    s1.scan();
    s1.display();
    return 0;
}