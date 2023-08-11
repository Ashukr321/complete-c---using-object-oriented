// find the area of rec and perimeter of the rec
#include <iostream>
using namespace std;

// create the class
class Rectange
{
    // data members  all are bydefalut private
private:
    int length;
    int breadth;

public:
    void setLength (int l){
        if(l>=0){
        length= l;

        }else{
            length =0;
        }
    }
     void setBreadth (int b){
        if(b>=0){
        breadth= b;

        }else{
            breadth =0;
        }
    }

    int getLength(){
        return(length);
    }
    int getBreadth(){
        return(breadth);
    }

    void area()
    {
        cout << length * breadth << " ";
    }

    void perimeter()
    {
        cout << (2 * (length + breadth)) << " " << endl;
    }
};

int main()
{
    // create the static object in the cpp
    Rectange r1, r2;
    // Rectange *p = new Rectange; // this is dynamic  object 
    // this store in the heap 
    // in java always store in the heap memory 

    // set the state variables or data memeber
    // we can acces by the  . operators
    r1.setLength(23);
    r1.setBreadth(3);
    cout<<r1.getBreadth()<<endl;
    r1.area();
    cout << endl;
    // r1.perimeter();

   

    return 0;
}