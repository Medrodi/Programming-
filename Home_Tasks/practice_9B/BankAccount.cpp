#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    double balance;
public:
    BankAccount(int accountNumber): accountNumber(accountNumber), balance(0){}

    void deposit( double amount){
        balance += amount;
    }
    void withdraw(double amount){
        if (amount <= balance){
            balance -= amount;
        } else {
            cout << "Недостаточно средств на балансе" << endl;
        }
    }
    void getBalance(){
        cout << balance << endl;
    }
};

int main() {
    BankAccount myAcc(1777);
    myAcc.deposit(1000);
    myAcc.getBalance();
}
