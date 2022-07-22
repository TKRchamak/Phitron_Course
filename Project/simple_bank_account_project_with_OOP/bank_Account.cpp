#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
public:
    string account_holder;
    string address;
    int age;
protected:
    int account_number;
    int balance;
private:
    string password;
public:
    BankAccount(string account_holder, string address, int age, string password)
    {
        this->account_holder=account_holder;
        this->address=address;
        this->age=age;
        this->password=password;
        this->account_number=rand()%1000000000;
        this->balance=0;
        cout<<"This is account number "<< account_number<<endl;
    }
    int showBalance(string pass)
    {
        if(this->password == pass) return this->balance;
        else return -1;
    }

    void add_money(string pass, int amount)
    {
        if(this->password == pass)
        {
            this->balance+=amount;
            cout<<"Balance Updated"<<endl;
        }
        else
        {
            cout<<"Wrong Password"<<endl;
        }
    }

    void deposit_money(string pass, int amount)
    {
        if(this->password == pass)
        {
            this->balance-=amount;
            cout<<"Balance Updated"<<endl;
        }
        else
        {
            cout<<"Wrong Password"<<endl;
        }
    }
    friend class MyCase;
};

BankAccount* createAnAccount()
{
    string account_holder, address, password;
    int age;
    cin>>account_holder>>address>>age>>password;
    BankAccount *user = new BankAccount(account_holder, address, age, password);
    return user;
}

void add_amount(BankAccount *newAccount)
{
    int amount;
    string pass;
    cout<<"Your current Balance is : "<<newAccount->showBalance("tkr")<<endl;
    cout<<"Give your pass and amount"<<endl;
    cin>>pass>>amount;
    newAccount->add_money(pass, amount);
}

class MyCase
{
private:
    int balance;
public:
    MyCase()
    {
        this->balance = 0;
    }

    void addAmountInMycase(BankAccount *newAccount, string pass, int amount)
    {

        if(newAccount->password == pass)
        {
            newAccount->balance-=amount;
            this->balance+=amount;
            cout<<"Balance Updated"<<endl;
            cout<<"Your current Balance is : "<<newAccount->showBalance("tkr")<<endl;
        }
        else
        {
            cout<<"Wrong Password"<<endl;
        }
    }

};

void addAmountInMycase(BankAccount *newAccount, MyCase *myCase)
{
    string pass;
    int amount;
    cout<<"Input your password and transfer amount"<<endl;
    cin>>pass>>amount;
    myCase->addAmountInMycase(newAccount, pass, amount);

}

void deposit_money(BankAccount *newAccount)
{
    int amount;
    string pass;
    cout<<"Your current Balance is : "<<newAccount->showBalance("tkr")<<endl;
    cout<<"Give your pass and amount"<<endl;
    cin>>pass>>amount;
    newAccount->deposit_money(pass, amount);
}


int main()
{
    BankAccount *newAccount = createAnAccount();
    add_amount(newAccount);
    cout<<"Your account Balance is : "<<newAccount->showBalance("tkr")<<endl;
    deposit_money(newAccount);
    cout<<"Your account Balance is : "<<newAccount->showBalance("tkr")<<endl;

    MyCase *mycash = new MyCase();
    addAmountInMycase(newAccount, mycash);
    return 0;
}
