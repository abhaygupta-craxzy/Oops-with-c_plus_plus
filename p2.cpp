#include <iostream>
using namespace std;

class BankAccount {
private:
    int an;
    string cn;
    double balance;

public:
    BankAccount(int accNo, string name, double bal) {
        an = accNo;
        cn = name;
        balance = bal;
    }

    friend void compareBalance(const BankAccount &a1, const BankAccount &a2);
};

void compareBalance(const BankAccount &a1, const BankAccount &a2) {
    if (a1.balance > a2.balance) {
        cout << "Account holder with higher balance is: " << a1.cn << endl;
        cout << "Account Number: " << a1.an << endl;
        cout << "Balance: " << a1.balance << endl;
    } else {
        cout << "Account holder with higher balance is: " << a2.cn << endl;
        cout << "Account Number: " << a2.an << endl;
        cout << "Balance: " << a2.balance << endl;
    }
}

int main() {
    BankAccount a1(101, "Abhay", 50000);
    BankAccount a2(102, "Shreya", 75000);

    compareBalance(a1, a2);

    return 0;
}