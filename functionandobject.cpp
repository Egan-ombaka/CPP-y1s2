#include<iostream>
using namespace std;

class bankAccount {

    private:
    string accountNumber;
    double balance;

    public:
    //constructor to set the balance to 0 n' initialize the accountnumber
    bankAccount(string accNum){
        accountNumber = accNum;
        balance = 0.0;
    }

    void deposit(double amount){
        if(amount > 0){
            balance += amount;
        }
    }

    void withdraw(double amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
        }
    } 

    double getBalance(){
        return balance;
    }
};

int main(){
    bankAccount myAccount("");
    myAccount.deposit (500);
    myAccount.withdraw (200);
    myAccount.withdraw (400);

    cout << "Your balance is : $ " << myAccount.getBalance() << endl;
    return 0;
}