// friends function 
#include<iostream>
using namespace std;

class Largest {
    int first ,second;
    // setter 

    public:
    void set_Data(int f, int s){
        first= f;
        second=s;
    }
    //friends functon 
    friend void find_max(Largest);
};

void find_max(Largest t){
    if(t.first>t.second){
        cout<<"First is greater than Second";
    }else{
        cout<< "Second is Greater Than First ";
    }
};

int main(){
    Largest l;
    l.set_Data(34,4);
    find_max(l);
    return 0; 

}