# Bank Account Class (`Account`)

A C++ console program demonstrating basic object-oriented programming with an `Account` class, private member data (`accountNumber` and `currentBalance`), getters/setters, a `withdraw` method, and a `main()` driver.

## Class Overview (`Account`)
- **Constructor (`Account(string a, double c)`):** Initializes `accountNumber` with `a` and sets `currentBalance` to `0.0`.
- **Mutators & Accessors:**
  - `setAccount(string a)` / `getAccountNumber()`
  - `setBalance(double c)` / `getBalance()`
- **Operations & Display:**
  - `withdraw(double newBalance)`: Subtracts `newBalance` from `currentBalance`.
  - `display()`: Prints the `Account Number`.

## Compiling & Running
Compile with `g++` (C++17) and run from the terminal:

```bash
g++ -std=c++17 -Wall -Wextra account.cpp -o account
./account
