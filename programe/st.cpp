#include<iostream>
using namespace std;
class  A
{
    public :
    int a  ;
    static int b ; 
};
int A::b= 24;// scope  resulution

int main(){
    A obj1;
    A obj2;
    obj1.a = 34;
    cout<<obj1.a +obj2.b <<endl;
    return 0; 
}