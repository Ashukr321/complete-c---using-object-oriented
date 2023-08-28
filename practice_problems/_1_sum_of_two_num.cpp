// sum of two number using class and object 
#include<iostream> 
using namespace std;
//create the class 
class Sum {
    public:
    int a , b;
    Sum(int a ,int b ){
        this->a = a;
        this->b = b;
    }
    void sum(){
        cout << "Sum is : "<<a+b<<endl ;
    }

    
};

int main(){
    int a , b;
    cout << "enter the value of a  "<<endl;
    cin>>a;

    cout<<"enter the value of b"<<endl;
    cin>>b;
    
    //create the object  static 
    Sum s1(a,b);
    //calling the function 
    s1.sum();
    return 0;
}
