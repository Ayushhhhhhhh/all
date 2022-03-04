// Write a c++ program to define a base class for account, derive two classes namely saving account and current account.
//  define member of all three classes accordingly.
// Account-> acct_no, customer name, customer_address,withdrawal, deposition
// Saving Accout-> fd
// Current account-> checque book issue, deposition, withdrwal
// #include <iostream>
#include <iostream>
#include <string>
#include <math.h>
#define r 0.15
using namespace std;

class Account
{
    float balance;

protected:
    int acc_number;
    char cust_name[40];
    char cust_address[40];

public:
    void deposite();
    void withdraw();
    void display();
    void create_Account()
    {
        cout << " Enter customer name:\n ";
        gets(cust_name);

        cout << "Enter customer address:\n ";
        gets(cust_address);

        cout << "Enter account number: \n";
        cin >> acc_number;

        cout << "Enter your current account balance:\n";
        cin >> balance;
    }
};
class saving_account : public Account
{

public:
    void getFD()
    {
        int amount, days, year = 0, month = 0, startDate;
        cout << "\nEnter the amount to be kept in fd:\n";
        cin >> amount;

        cout << "\nEnter the time in year,month and days after you want to break fd to calculate final amount with intrest:\n";

        cin >> year >> month >> days;
        int intrest;
        cout << "\nEnter the intrest at which you want to fd:\n";
        cin >> intrest;

        amount = amount + (year * amount * intrest) / 100 + (month * amount * intrest) / (12 * 100) + (month * amount * intrest) / (12 * 100 * 30);
        cout << "\nYour ammount in fd after " << year << " years and " << month << " months and " << days << " days will be :" << amount << endl
             << endl;
    }
};

class current_account : public Account
{
    float balancecurr;
    bool checkBookIssue = false;

public:
    void checkBookissue()
    {
        int choice;
        cout << "\nDo you want to issue a check book?\n 0 for No and 1 for Yes\n ";

        cin >> choice;
        if (choice == 1)
        {
            checkBookIssue = true;
            cout << "\ncheck Book Issued\n"
                 << endl;
        }
    }
    void getBalance()
    {
        cout << "Enter your current account balance:\n";
        cin >> balancecurr;
    }
    void deposite();
    void withdraw();
    void displaycurrbal()
    {
        cout << "\n Now balance = " << balancecurr;
    }
};

void Account ::deposite()
{
    float d;
    cout << " \nEnter your deposit amount :\n ";
    cin >> d;
    balance += d;
}

// Function to withdraw amount

void Account ::withdraw()
{
    cout << "\n Enter your withdrawal amount :\n";
    float w;
    cin >> w;
    if (balance < w)
        cout << " \nSorry your balance is less than your withdrawal amount \n";
    else
    {
        balance -= w;
    }
}

void current_account ::deposite()
{
    float d;
    cout << "\n Enter your deposit amount : \n";
    cin >> d;
    balancecurr += d;
}

// Function to withdraw amount from saving accunt

void current_account ::withdraw()
{
    cout << "\n Enter your withdrawal amount :\n";
    float w;
    cin >> w;
    if (balancecurr < w)
        cout << " Sorry your balance is less than your withdrawal amount \n";
    else
    {
        balancecurr -= w;
    }
}
void Account::display()
{
    cout << "\n Now balance = " << balance;
}
int main()
{
    current_account C;
    saving_account S;
    cout << "Create a Saving account : \n";
    S.create_Account();
    cout << "Create a FD with saving account:\n";
    S.getFD();
    // S.getBalance();
    S.deposite();
    S.display();
    S.withdraw();
    S.display();
    cout << "\nCreate a current account: \n";
    C.getBalance();
    C.checkBookissue();
    C.withdraw();
    C.displaycurrbal();
    C.deposite();
    C.displaycurrbal();

    return 0;
}