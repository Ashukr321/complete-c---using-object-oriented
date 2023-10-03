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
    



    bool depositMoney (double ammount){
        if (ammount>=0)
        {
            this->balance=balance+ammount ; 
           cout<<" money successfully deposit to your account "<<ammount<<endl;
            return true;
        }else{
            cout<< "invalid input" << endl;
            return false;
        }
        
    }
     bool withdrawMoney (double ammount){
        if (ammount>=0)
        {
            this->balance=balance-ammount ; 
           cout<<" money successfully withdraw to your account "<< ammount<<" \n total balance "<<balance<<endl;
            return true;
        }else{
            cout<< "invalid input" << endl;
            return false;
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
    cout <<"your accoint id  is : "<<acc1.getId()<<endl;
    cout <<"your current balance is : "<<acc1.getBalance()<<endl;


    int money ;
    cout<<"enter your deposit money "<<endl;
    cin>>money;
    cout <<"deposite your money  "<< acc1.depositMoney(money)<<endl;



    cout<<"withdraw money"<<endl<<endl;
    int money1 ; 
    cout<<"enter your money that you want to withdraw"<<endl<<endl;
    cin >> money1;
    cout <<"withdraw your money  "<< acc1.withdrawMoney(money1)<<endl;

    cout<<"your monthly inerest  interest"<<acc1.getMonthlyInterest()<<endl;

    return 0;
}