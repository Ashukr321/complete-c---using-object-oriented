// calculate the gcd and lcm in the cpp 
#include<iostream> 
using namespace  std;


int main(){
    int n1 , n2 ;
    // create the temp variables that store the  
    // the state of  the var n1 and n2 
    

    cout << "enter  your first number"<<endl;
    cin>>n1;
    cout<<"enter  your second number"<<endl;
    cin>>n2;
     int t1 = n1; 
     int t2 = n2;
     int lcm ; 
    if (n1!=0&&n2!=0 && n1>0 && n2>0)
    {

    if (n1>n2)
    {
        while(n1%n2!=0){
        int r = n1%n2;
        if (r==0){
            break;
        }
        else{
            n2= r;
            n1= n2;
        }
    }
    cout<<"gcd of enter your number   is => "<<n2<<endl;

    }else{  
         while(n2%n1!=0){
        int r = n2%n1;
        if (r==0){
            break;
        }
        else{
            n1= r;
            n2= n1;
        }
    }
    cout<<"gcd of enter your number   is => "<<n1<<endl;
    }

    }else{
        cout<<"invalid input"<<endl;
    }
    if (n1>n2)
    {
    lcm = (t1*t2)/n2;
    }else{
        lcm = (t1*t2)/n1;
    }
    cout<<"lcm of enter your number is "<<lcm<<endl;

    system("pause");
    return 0;
  
}