#include <iostream>
#include <regex>
#include <string>
using namespace std;
class Account {
private:
    string accountNumber;
    double currentBalance;
public:
    Account(string a, double c) {
        accountNumber = a;
        currentBalance = 0.0;
    }
    void setAccount(string a) {
        accountNumber = a;
    }
    void setBalance(double c);
    string getAccountNumber() {
        return accountNumber;
    };
    double getBalance() ;
    void display();
    void withdraw(double newBalance);

};
void Account::setBalance(double c) {
    currentBalance = c;
}
double Account::getBalance() {
    return currentBalance;
}
void Account::display() {
    cout << "Account Number: " << accountNumber << endl;
}
void Account::withdraw(double newBalance) {
    currentBalance -= newBalance;

}

