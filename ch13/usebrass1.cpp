//
// Created by Xuechao Qin on 4/18/2022.
//
#include "iostream"
#include "brass.h"

int main() {
    using std::cout;
    using std::endl;
    Brass Piggy("Porcelot Pigg", 381299, 4000.00);
    BrassPlus Hoggy("Horation Hogg", 382288, 3000.00);
    Piggy.ViewAcct();
    cout << endl;
    Hoggy.ViewAcct();
    cout << endl;
    cout << "Depositing $1000 into the Hogg Account:\n";
    Hoggy.Deposit(1000.00);
    cout << "New balance: $" << Hoggy.Balance() << endl;
    cout << "Withdrawing $4200 from the Piggy Account:\n";
    Piggy.Withdraw(4200.00);
    cout << "Piggy account balance: $" << Piggy.Balance() << endl;
    cout << "Withdrawing $4200 from the Hoggy Account:\n";
    Hoggy.Withdraw(4200.00);
    Hoggy.ViewAcct();

    return 0;
}
