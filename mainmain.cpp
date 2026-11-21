int main() {
    // Construct an Account object (note: constructor sets currentBalance to 0.0)
    Account acct("ACC-1001", 500.0);

    acct.display();
    cout << "Initial balance: $" << acct.getBalance() << endl;

    // Set balance using setBalance
    acct.setBalance(500.0);
    cout << "Balance after setBalance: $" << acct.getBalance() << endl;

    // Withdraw funds
    acct.withdraw(125.50);
    cout << "Balance after withdrawal of $125.50: $" << acct.getBalance() << endl;

    // Update account number and display again
    acct.setAccount("ACC-2002");
    acct.display();
    cout << "Final balance: $" << acct.getBalance() << endl;

    return 0;
}
