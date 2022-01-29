#include <iostream>
using namespace std;


void showMenu()
{
    cout << "▇▇▇▇▇▇▇▇▇-MENU▇▇▇▇▇▇▇▇▇" << endl;
    cout << "█ 1. Check balance                   █" << endl;
    cout << "█ 2. Deposit                         █" << endl;
    cout << "█ 3. Withdraw                        █" << endl;
    cout << "█                                    █" << endl;
    cout << "▇▇▇▇▇▇▇▇▇▇▇▇▇▇▇▇▇▇▇▇▇" << endl;
}

int main ()
{
    int option;
    double balance = 500;

    showMenu();
    cin >> "Option: ";
    cin >> option;

    switch(option)
    {
    case 1:cout << "Balance is: " << balance << " $" << endl; break;

    case 2:cout << "Deposit amount: ";
        double depositAmount;
        cin >> depositAmount;
        balance += depositAmount;
        break;

    case 3:cout << "Withdraw amount: ";
        double withdrawAmount;
        cin >> withdrawAmount;
        if(withdrawAmount<=balance)
            balance -= withdrawAmount;

        else
            cout << "Not enough money" << endl;
        break;
    }
    system ("pause > 0");
}