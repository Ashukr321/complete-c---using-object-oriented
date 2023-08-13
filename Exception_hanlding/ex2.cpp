// here we see the another example of the exception handling 
#include<iostream>
using namespace std;
int division(int a ,int b){
    if (b==0){
        throw "Division by zero"; //throwing an error message
    }else{
       return a/b;
    }
}
int main(){
    int x = 10 , y = 3;
    try
    {
        int z = division(x,y);
        cout<<z<<endl;
    }
    catch( int e)
    {
        cout<<e<<endl;
    }
    
    return  0;
}

// ⭐⭐⭐ we can create the multiple catch block in the cpp exception handling 
// we can do nesting of try and catch block 
