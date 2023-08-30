#include<iostream>
using namespace std;
class Stock{
    string symbol;
    string stockName;
    double priviousPrice;
    double currentPrice;
    public: 
    //constructor 
    Stock(string symb,string name,double priviousPrice,double currentPrice);
    double getChangePercent();
};

// intitlisation of cass variables 
Stock::Stock (string symb, string name , double priviousPrice, double currentPrice){
   this->symbol = symb;
   this->stockName= name;
    this->priviousPrice = priviousPrice;
    this->currentPrice = currentPrice;
}
/* function to calculate change percent */
double Stock :: getChangePercent(){
   double data  =  ( ( (this->currentPrice - this->priviousPrice) / this->currentPrice) )*100;
  
    //return data ;
    return data;
}


// create the object of  the class 
int main(){

    // user input 
    string name, symb;
    double currentPrice,priviousPrice;
    cout<<"enter your stock symbol "<<endl;
    cin>>symb;
    cout<<"enter your stockName "<<endl;
    cin>>name;
    cout<<"enter stock current price "<<endl;
    cin>>currentPrice;
    cout<<"enter stock priviousPrice"<<endl;
    cin>>priviousPrice;

    //create the object of  the class 
    Stock obj(symb,name,priviousPrice,currentPrice);

    //calling the method 
    cout<<obj.getChangePercent()<< "%" <<endl;

    return 0;       
}

