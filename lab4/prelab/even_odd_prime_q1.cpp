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

    static bool isEven(int n)
    {
        if (n % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    static bool isOdd(int n)
    {
        if (n % 2 != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    static bool isPrime(int n)
    {
        for (int i = 2; i < n; i++)
        {
            if (n % 2 == 0)
            {
                return false;
            }
        }
        return true;
    }

    bool isOdd(MyInteger obj)
    {
        if (obj.value % 2 != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isEven(MyInteger obj)
    {
        if (obj.value % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isPrime(MyInteger obj)
    {
        for (int i = 2; i < obj.value; i++)
        {
            if (obj.value % 2 == 0)
            {
                return false;
            }
        }
        return true;
    }

    bool equals(int n)
    {
        if (n == value)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool equals(MyInteger obj)
    {
        if (this->value = obj.value)
        {
            return true;
        }
        else
        {
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

    // create the object of the myInter class
    MyInteger obj(value);
    // calling all the methods

    cout << "calling instance methods" << endl;
    cout << obj.isEven() << endl;
    cout << obj.isOdd() << endl;
    cout << obj.isPrime() << endl;

    cout << "calling static methods " << endl;
    // STATIC METHODS calling by the help of the class
    cout << MyInteger::isEven(3) << endl;
    cout << MyInteger::isOdd(4) << endl;
    cout << MyInteger::isPrime(5) << endl;

    cout << "calling methods via a object as a  parameter "<<endl;

    MyInteger obj2(5);
    cout <<obj.isEven(obj2) << endl;
    cout <<obj.isOdd(obj2) << endl;
    cout <<obj.isPrime(obj2) << endl;

    cout<<"check the  passing your number is equals or not "<<endl;
    int n ;
    cout << "enter your number "<<endl;
    cin>>n;

    cout<<obj.equals(n)<<endl;
    
    // create the object of value n 
    MyInteger obj3(n);
    cout<<obj.equals(obj3);
    cout<<endl;
    cout<<"thanku "<<endl;
    return 0;
}