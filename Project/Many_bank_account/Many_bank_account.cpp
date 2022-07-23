#include<bits/stdc++.h>
using namespace std;

class UserBankAccount
{
public:
    int bank_account_id;
    string woner_name, addess;
    int age;
protected:
    int balance;
private:
    string password;
public:
    UserBankAccount(int bank_account_id, string woner_name, string addess, int age, string password)
    {
        this->bank_account_id=bank_account_id;
        this->woner_name=woner_name;
        this->addess=addess;
        this->age=age;
        this->password=password;
        this->balance=0;
    }

    void printBalance()
    {
        cout<<"Your current balance is : "<< this->balance<<endl;
        return;
    }
};

UserBankAccount* create_bank_account(int id)
{
    int bank_account_id, age;
    bank_account_id = id;
    string woner_name, addess, password;

    cout<<"Input you name, address, age, password"<<endl;
    cin>>woner_name>>addess>>age>>password;
    UserBankAccount *user = new UserBankAccount(bank_account_id,woner_name,addess,age,password);
//    user.printBalance();
    return user;
}

int main()
{
    int userNumber;
    cout<<"Please input the number of user you want to create = ";
    cin>>userNumber;

    UserBankAccount *userPtr[userNumber];
    for(int i=0;i<userNumber;i++)
    {
        userPtr[i]= create_bank_account(i+1);
    }

    for(int i=0;i<userNumber;i++)
    {
        cout<<userPtr[i]->woner_name<<endl;
    }


    return 0;
}
