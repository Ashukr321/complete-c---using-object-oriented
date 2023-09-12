#include"Stock.h"

Stock::Stock (string symb, string name , double priviousPrice, double currentPrice){
   
    this->priviousPrice = priviousPrice;
    this->currentPrice = currentPrice;
}

double Stock::Stock::getChangePercent(){
   double data  =  ( abs( (this->currentPrice - this->priviousPrice) / this->currentPrice) )*100;
  
    //return data ;
    return data;
}
