#include<iostream>
using namespace std;


class Account
{
    // defined all the private memeber of the class
    int acc_id;
    double balance;
    double annualInterestRate; // assume all account have same interest

public:
    // defined the constructor
    // default constructor initial value is 0

    Account()
    {
        this->acc_id = 0;
        this->balance = 0;
        this->annualInterestRate = 0;
    }

    // constructor that set the account id and initial balance

    Account(int id, double newBalance)
    {
        this->acc_id = id;
        this->balance = newBalance;
    }

    // create the accessor and mutator function

    int getId()
    {
        return this->acc_id;
    }

    double getBalance()
    {
        return this->balance;
    }

    double getAnnualInterest()
    {
        return this->annualInterestRate;
    }


    // setter
    bool setId(int id)
    {
        if (id >= 0)
        {
            this->acc_id = id;
            return true;
        }
        else
        {
            false;
        }
    }
    bool setBalance(double newBalance)
    {
        if (newBalance >= 0)
        {
            this->balance = newBalance;
            return true;
        }
        else
        {
            return false;
        }
    }

    bool setAnnualInterestRate(double interest)
    {

        if (interest >= 0)
        {
            int data = interest/100;
            this->annualInterestRate = data;
            return true;
        }
        else
        {
            return false;
        }
    }

    bool withdraw(double amount){
        if (amount>=0 ||amount<=balance)
        {
           this->balance =balance-amount;
           cout<<"withdraw money successfully"<<endl;
           return true;
        }
        else{
            cout<<"insufficient ammount in your Account "<<endl;
            return false;
        }
    }


    bool depostMoney (double ammount){
        if (ammount>=0)
        {
            this->balance=balance+ammount ; 
           cout<<" money successfully deposit to your account"<<endl;
            return true;
        }else{
            cout<< "invalid input" << endl;
            
        }
        
    }

    // getMonthly Interest 
    double getMonthlyInterest(){
        double monthlyInterestRate = annualInterestRate/12;
        double monthlyInterest = this->balance*monthlyInterestRate;
        return monthlyInterest;
    }
};

// main methods start here ..

int main()
{
    int id ; 
    double balance ;
    double interestRate;


    cout<<"enter  your account id "<<endl;
    cin>>id;

    cout<<"enter your balance "<<endl;
    cin>>balance;
    

    cout<<"ener your interest rate"<<endl;
    cin>>interestRate;
    
    //create the  object of the account 

    Account acc1(id,balance);
    acc1.setAnnualInterestRate(4.5);

    //calling all the methods 
    cout <<"your current balance is : "<<acc1.getBalance(); 
    cout <<"your current balance is : "<<acc1.getMonthlyInterest(); 
    cout <<"your current balance is : "<<acc1.(); 

    return 0;
}