// how to template function overloading 
#include<iostream>
using namespace std;

// here we overload the template class  

template <class type>
void square(type a ){
    cout<<a*a<<endl;
}

template <class type1 ,class type2>
void square(type1 a,type2  b){
    cout<<a*b;
}
int main(){

    //create the  instance varianbles 
    int n ; 
    cout<<"enter the value of the n "<<endl;
    cin>>n;
    square(n);
    cout<<endl;
    square(34,23);
    return 0; 
}