-*# 🏦 Banking System C++

## 📌 Project Overview

Banking System is a C++ based project developed using Object Oriented Programming concepts.

This project is designed to manage different types of bank accounts and perform basic banking operations.

The project demonstrates the practical implementation of:

- Class and Objects
- Encapsulation
- Inheritance
- Polymorphism


The system allows users to display account details, deposit money, withdraw money and calculate interest for different account types.


## 🚀 Features

- Display Savings Account details
- Display Checking Account details
- Display Fixed Deposit Account details
- Deposit money
- Withdraw money
- Calculate interest
- Menu driven user interface


## 🏗️ Class Structure


## Base Class

### BankAccount

The BankAccount class contains common details of all accounts.

Data Members:

- Account Number
- Account Holder Name
- Balance


Functions:

- deposit()
- withdraw()
- getBalance()
- displayAccountInfo()



## Derived Classes


### 1. SavingsAccount

Inherited from BankAccount.

Additional Feature:

- Interest calculation using interest rate



### 2. CheckingAccount

Inherited from BankAccount.

Additional Feature:

- Withdrawal with overdraft facility



### 3. FixedDepositAccount

Inherited from BankAccount.

Additional Feature:

- Fixed deposit interest calculation based on duration



## 💡 OOP Concepts Used


### Encapsulation

Account details like balance are kept private inside the BankAccount class and accessed using member functions.


### Inheritance

SavingsAccount, CheckingAccount and FixedDepositAccount inherit properties and functions from BankAccount.


### Polymorphism

Virtual functions are used to achieve runtime polymorphism.

Different account classes perform different operations using the same function name.



## 💻 Technologies Used

- C++
- Object Oriented Programming



## ▶️ How To Run


Compile:

g++ BankingSystem.cpp


Run:

./a.exe



## 📸 Sample Output


========== Banking System ==========

1. Display Savings Account

2. Display Checking Account

3. Display Fixed Deposit Account

4. Deposit Money

5. Withdraw Money

6. Calculate Interest

7. Display All Accounts

8. Exit


Enter Choice : 1


Account Number : 101

Account Holder : Asha

Balance : 5000



Enter Choice : 4


Select Account

1. Savings

2. Checking

3. Fixed Deposit


Enter Amount : 2000


Amount Deposited Successfully!



Enter Choice : 5


Select Account

1. Savings

2. Checking

3. Fixed Deposit


Enter Amount : 1000


Withdrawal Successful!



Enter Choice : 6


Savings Account Interest : 300

Fixed Deposit Interest : 600



Enter Choice : 7


Account Number : 101

Account Holder : Asha

Balance : 6000


Account Number : 102

Account Holder : Ayesha

Balance : 8000


Account Number : 103

Account Holder : Shriya

Balance : 10000



Enter Choice : 8


Thank You For Using Banking System



## 🎥 Project Explanation Video

(https://drive.google.com/file/d/1yDSu7hUPARGlWtEuOYLrTGUV4H8wyyE8/view?usp=drivesdk)



## 👩‍💻 Author

Asha Mishra
