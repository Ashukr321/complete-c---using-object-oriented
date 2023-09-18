#include <iostream>
using namespace std;
// class created

class MyInteger
{
    //  private member also know as instance class
private:
    int value;
 

public:
   // constructor
   //this is the default constructor 
   MyInteger(){

   }

    MyInteger(int data)
    {
        this->value = data;
    }
    // getter function
    int getValue()
    {
        return value;
    }

    // check even
    bool isEven()
    {
        if (value % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // check odd
    bool isOdd()
    {
        if (value % 2 != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // isPrime;
    bool isPrime()
    {

        for (int i = 2; i < value; i++)
        {
            if (value % 2 == 0)
            {
                return false;
            }
        }
        return true;
    }

    static bool isOdd()
    {
        MyInteger obj;

        if (obj.value % 2 != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    static bool isEven2(){
        //create the object of  the  class 
        MyInteger obj;
        if (obj.value % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    static bool isPrime()

    {
        MyInteger obj;

        for (int i = 2; i < obj.value; i++)
        {
            if (obj.value % 2 == 0)
            {
                return false;
            }
        }
        return true;
    }

    bool equals(int n){
        if (n==value)
        {
            return true;
        }else{
            return false;
        }
        
    }

    bool equals(MyInteger){
        if (MyInteger::value==value)
        {
            return true;
        }else{
            return false;
        }
        
    }
    
};



// main methods start here
int main()
{
    int value;
    cout << "ente your number " << endl;
    cin >> value;
    // create the object
    // MyInteger a(value);//   static class object  
    cout<<MyInteger::isEven2()<<endl;
    cout<<MyInteger::isOdd()<<endl;
    cout<<MyInteger::isPrime()<<endl;

    return 0;
}