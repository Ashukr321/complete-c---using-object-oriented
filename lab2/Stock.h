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

