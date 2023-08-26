
#include "Cuboid.h"
#include<math.h>
#include <string>

    //create the constructor 
   Cuboid::Cuboid (double length, double breadth , double height ){
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }

    //create the  the  function of the  
     double Cuboid::volume(){
        return(this -> length * this -> breadth* this -> height);
    }
    // surface area of the cuboid 
    double Cuboid:: surfaceArea(){
        return ((2*((this -> length) * (this -> breadth))+(2 *(this -> breadth)* (this -> height))+(2 *(this -> length)* (this -> height))));
    }
    double Cuboid::diagonal(){
        return sqrt(pow(length,2)+pow(breadth,2)+pow(height,2));
    }

    // setter  methods 
    bool Cuboid::setLength(double length){
        if(length>0){
            this->length= length;
            return true;
        }
        return 0;
    }

    bool Cuboid::setBreadth(double breadth){
        if(breadth>0){
            this->breadth= breadth;
            return true;
        }
        return false;
        
    }
    bool Cuboid::setHeight(double height){
        if(height>0){
            this->height= height;
            return true;
        }
        return false;

    }


    // //getter methods 
    // string Cuboid::getLength(){
    //     string data = to_string(floor(this->length))+"m";
    //     return data;
    // }

    // string Cuboid::getBreadth(){
    //     string data = to_string(floor(this->breadth))+"m";
    //     return data;
    // }
    // string Cuboid::getHeight(){
    //     string data = to_string(floor(this->height))+"m";
    //     return data;
    // }
    

