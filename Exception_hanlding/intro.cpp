// exception handling in the cpp
#include<iostream> 
using namespace std;

int main(){
    int  a = 10; int  b = 0, c;
    try
    {
        if (b==0)
        {
            throw 101;
        }
        c = a/b;
        cout<<c<<endl;
    }

    catch(int e)
    {
        std::cerr << e << '\n';
    }
    
    return 0; 
}

// error 
// three type of the error in the cpp 
// syntax  => handle by the compiler 

// logical  => handle by the debugers 
// runtime error  => faced by the users  responsible 
// runtime error know as exceptional cases


