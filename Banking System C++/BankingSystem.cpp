#include <iostream>
#include <cstring>

using namespace std;

// Base Class

class BankAccount
{

private:

    int accountNumber;
    char accountHolderName[50];
    double balance;


public:


    BankAccount(int accNo, char name[], double bal)
    {

        accountNumber = accNo;

        strcpy(accountHolderName, name);

        balance = bal;

    }

    double getBalance()
    {

        return balance;

    }
    void deposit(double amount)
    {

        balance = balance + amount;

        cout << "Amount Deposited Successfully!" << endl;

    }
    virtual void withdraw(double amount)
    {

        if(amount <= balance)
        {

            balance = balance - amount;

            cout << "Withdrawal Successful!" << endl;

        }

        else
        {

            cout << "Insufficient Balance!" << endl;

        }

    }
    virtual void calculateInterest()
    {

        cout << "No Interest Available" << endl;

    }

    virtual void displayAccountInfo()
    {

        cout << endl;

        cout << "Account Number : " << accountNumber << endl;

        cout << "Account Holder : " << accountHolderName << endl;

        cout << "Balance : " << balance << endl;

    }



};

// Savings Account

class SavingsAccount : public BankAccount
{

private:

    double interestRate;


public:


    SavingsAccount(int accNo, char name[], double bal, double rate)

    : BankAccount(accNo,name,bal)

    {

        interestRate = rate;

    }
    void calculateInterest() override
    {

        double interest;


        interest = getBalance() * interestRate / 100;


        cout << "Savings Account Interest : "
             << interest << endl;


    }


};

// Checking Account


class CheckingAccount : public BankAccount
{


private:

    double overdraftLimit;



public:


    CheckingAccount(int accNo, char name[], double bal, double limit)

    : BankAccount(accNo,name,bal)

    {

        overdraftLimit = limit;

    }

    void withdraw(double amount) override
    {


        if(amount <= getBalance() + overdraftLimit)

        {

            cout << "Withdrawal Successful using overdraft facility"
                 << endl;

        }


        else

        {

            cout << "Overdraft Limit Exceeded" << endl;

        }


    }


};

// Fixed Deposit Account


class FixedDepositAccount : public BankAccount
{


private:

    int term;



public:


    FixedDepositAccount(int accNo, char name[], double bal, int months)

    : BankAccount(accNo,name,bal)

    {

        term = months;

    }




    void calculateInterest() override
    {

       double interest;


        interest = getBalance() * 6 * term / (100 * 12);


        cout << "Fixed Deposit Interest : "
             << interest << endl;


    }


};

int main()
{
    BankAccount *account;

    char name1[] = "Asha";

    char name2[] = "Ayesha";

    char name3[] = "Shriya";


    SavingsAccount saving(101,name1,5000,5);


    CheckingAccount checking(102,name2,8000,3000);


    FixedDepositAccount fixed(103,name3,10000,12);


    int choice;

    do
    {


        cout << endl;

        cout << "===== Banking System =====" << endl;

        cout << "1. Display Savings Account" << endl;

        cout << "2. Display Checking Account" << endl;

        cout << "3. Display Fixed Deposit Account" << endl;

        cout << "4. Deposit Money" << endl;

        cout << "5. Withdraw Money" << endl;

        cout << "6. Calculate Interest" << endl;

        cout << "7. Display All Accounts" << endl;

        cout << "8. Exit" << endl;



        cout << "Enter Choice : ";

        cin >> choice;

        switch(choice)
        {


        case 1:


            account = &saving;

            account->displayAccountInfo();


            break;


        case 2:


            account = &checking;

            account->displayAccountInfo();


            break;


        case 3:


            account = &fixed;

            account->displayAccountInfo();


            break;


        case 4:

        {

            int type;

            double amount;



            cout << "Select Account" << endl;

            cout << "1. Savings" << endl;

            cout << "2. Checking" << endl;

            cout << "3. Fixed Deposit" << endl;



            cin >> type;



            cout << "Enter Amount : ";

            cin >> amount;




            if(type == 1)

                saving.deposit(amount);


            else if(type == 2)

                checking.deposit(amount);


            else

                fixed.deposit(amount);



            break;

        }

        case 5:

        {


            int type;

            double amount;




            cout << "Select Account" << endl;


            cout << "1. Savings" << endl;


            cout << "2. Checking" << endl;


            cout << "3. Fixed Deposit" << endl;



            cin >> type;




            cout << "Enter Amount : ";

            cin >> amount;




            if(type == 1)

                saving.withdraw(amount);


            else if(type == 2)

                checking.withdraw(amount);


            else

                fixed.withdraw(amount);




            break;


        }

        case 6:



            saving.calculateInterest();


            fixed.calculateInterest();



            break;


            case 7:



            saving.displayAccountInfo();


            checking.displayAccountInfo();


            fixed.displayAccountInfo();



            break;



        case 8:


            cout << "Thank You For Using Banking System" << endl;


            break;







        default:


            cout << "Invalid Choice" << endl;



        }



    }while(choice != 8);


     return 0;

}