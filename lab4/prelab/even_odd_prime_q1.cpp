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

    // static  methods  + represent the public  access modifers 
    // static memeber only access the static 
     static bool isEven2(){
        // to access the nonstatic data in the static function 
        // we have to create the object of the class 
        // MyInteger obj;
        // if (obj.value%2==0){
        //     return  true;
        // }else{
        //     return false;
        // }
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
    MyInteger.isEven2();
    return 0;
}