
class Cuboid{
    private:
    double length;
    double breadth;
    double height ;

    public:
    //create the constructor 
    Cuboid (double length, double breadth , double height );
      
    //create the  the  function of the  
    double volume();
    // surface area of the cuboid 
    double surfaceArea();
    double diagonal();
    // setter  methods 
    bool setLength(double length);

    bool setBreadth(double breadth);
    bool setHeight(double height);


    //getter methods 
    // string getLength();

    // string getBreadth();
    // string getHeight();


};
