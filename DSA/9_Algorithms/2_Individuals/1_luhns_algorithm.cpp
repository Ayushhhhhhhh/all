#include <iostream>
#include <math.h>
using namespace std;
class card
{
private:
    long long cardno;
    int sum = 0, product = 0;
    /* data */
public:
    card(/* args */);
    int getdigit();
    void isvalid();
    ~card();
};

card::card(/* args */)
{
    cout << "Enter the card Number :\n";
    cin >> cardno;
}
int card::getdigit()
{
    long long digitget = cardno;
    int digit = 0;
    while (digitget != 0)
    {
        digitget = digitget / 10;
        digit++;
    }
    return digit;
}
void card::isvalid()
{
    int digit = getdigit();
    long long tmp = cardno;
    int tmpproduct = 0;
    while (tmp != 0)
    {
        tmpproduct += ((tmp % 100) / 10) * 2;
        while (tmpproduct != 0)
        {
            product += tmpproduct % 10;
            tmpproduct = tmpproduct / 10;
        }
        sum += (tmp % 10);
        tmp = tmp / 100;
    }
    tmp = product + sum;
    int firsttwo;
    long long getfirsttwo = cardno;
    firsttwo = getfirsttwo / pow(10, digit - 2);
    if (tmp % 10 == 0)
    {
        if (digit == 15 && (firsttwo == 37 || firsttwo == 34))
        {
            printf("American Express\n");
        }
        else if (digit == 16 && (firsttwo == 55 || firsttwo == 54 || firsttwo == 53 || firsttwo == 52 || firsttwo == 51))
        {
            printf("MasterCard \n");
        }
        else if ((digit == 13 || digit == 16) && (firsttwo / 10 == 4))
        {
            printf("Visa");
        }
        else
        {
            printf("ho hi nhi sakta!");
        }
    }
    else
    {
        printf("invalid Number");
    }
}

card::~card()
{
    cout << "\nProgram executed succesfully!\n";
}

int main()
{
    card c1;
    c1.getdigit();
    c1.isvalid();

    return 0;
}