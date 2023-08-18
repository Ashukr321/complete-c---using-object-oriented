// calculate  the volume and surface area and diagonal of the cuboid 
#include<iostream>
#include<math.h>
#include <string>

using namespace std;

//create the class of the cuboid 
class Cuboid{
    double length;
    double breadth;
    double height ;

    public:
    //create the constructor 
    Cuboid (double length, double breadth , double height ){
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }
    //create the  the  function of the  
    double volume (){
        return(this -> length * this -> breadth* this -> height);
    }
    // surface area of the cuboid 
    double surfaceArea(){
        return ((2*((this -> length) * (this -> breadth))+(2 *(this -> breadth)* (this -> height))+(2 *(this -> length)* (this -> height))));
    }
    double Diagonal(){
        return sqrt(pow(length,2)+pow(breadth,2)+pow(height,2));
    }

    // setter  methods 
    bool setLength(double length){
        if(length>0){
            this->length= length;
            return true;
        }
        return 0;
    }

    bool setBreadth(double breadth){
        if(breadth>0){
            this->breadth= breadth;
            return true;
        }
        return false;
        
    }
    bool setHeight(double height){
        if(height>0){
            this->height= height;
            return true;
        }
        return false;4
        
    }


    //getter methods 
    string getLength(){
        string data = to_string(floor(this->length))+"m";
        return data;
    }

    string getBreadth(){
        string data = to_string(floor(this->breadth))+"m";
        return data;
    }
    string getHeight(){
        string data = to_string(floor(this->height))+"m";
        return data;
    }
    


};

// main method start here 

int main(){

    // local variables 
    double length , breadth,height ;
    cout<<"enter the value  of the length "<<endl;
    cin>>length;
    cout<<"enter the value of the breadth"<<endl;
    cin>>breadth;
    cout<<"enter the value of the height "<<endl;
    cin>>height;

    //create the object of the cuboid 
    Cuboid obj1(length,breadth,height);
    cout<<"surface area of the cuboid : "<<obj1.surfaceArea()<<endl;
    cout<<"volume  area of the cuboid : "<<obj1.volume()<<endl;
    cout<<"diagonal   area of the cuboid : "<<obj1.Diagonal()<<endl;
    cout<<"length of the coboid : "<<obj1.getLength()<<endl;
    cout<<"breadth of the coboid : "<<obj1.getBreadth()<<endl;
    cout<<"heigth of the coboid : "<<obj1.getHeight()<<endl;
    return  0; 
}