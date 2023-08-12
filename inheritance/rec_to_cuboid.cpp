// // inheritance the properties of the class rec in to the class cuboid

// #include <iostream>
// using namespace std;

// // create the class Rectangle
// class Rectangle
// {
//     // access modifier
//     // private , public , protected
// private:
//     int length;
//     int breath;

// public:

//     Rectangle();
//     // create the constructor
//     Rectangle(int l, int b)
//     {
//         length = l;
//         breath = b;
//     }
//     // getter
//     int getLength()
//     {
//         return length;
//     }

//     int getBreath()
//     {
//         return breath;
//     }

//     void setLength(int l)
//     {
//         length = l;
//     }
//     void setBreath(int b)
//     {
//         breath = b;
//     }
//     void area()
//     {
//         cout << length * breath << endl;
//     }
//     void perimeter()
//     {
//         cout << (2 * (length + breath)) << endl;
//     }
// };

// // create the another class cuboid : this is used for thes
// // inherit the class

// class Cuboid : public Rectangle
// {
// private:
//     int height;

// public:

//     // create the constructor
//     Cuboid(int l = 0, int b = 0, int h = 0)
//     {
//         height = h;
//         setLength(l);
//         setBreath(b);
//     };
//     // getter and setter for the class cuboid
//     int getHeigth()
//     {
//         return height;
//     }
//     void setHeight(int h)
//     {
//         height = h;
//     }

//     // facilator function
//     int volume()
//     {
//         return getLength() * getBreath() * height;
//     }
// };

// int main()
// {
//     //create the object of the class
//     // cuboid
//     Cuboid c1(4);
//     c1.setBreath(3);
//     c1.setLength(3);
//     cout<<c1.volume()<<endl;
//     return 0;
// }
// ⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle();             // defalut constructor
    Rectangle(int l, int b); // parameterized constructor
    Rectangle(Rectangle &r); // copy constructor
    // getter
    int getLength() { return length; }
    int getBreadth() { return breadth; }

    // setter
    void setLength(int l);
    void setBreadth(int b);
    // facilatators
    int area();
    int perimeter();
    bool isSquare();

    // destrcture
    ~Rectangle();
};

class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int h)
    {
        height = h;
    }

    int getHeight() { return height; }

    void setHeight(int h) { height = h; }

    int volume() { return getLength() * getBreadth() * height; }
};

int main()
{
    Cuboid c(5);
    c.setLength(10);
    c.setBreadth(7);

    cout << "Volume is " << c.volume() << endl;
}



Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}

void Rectangle::setLength(int l)
{
    length = l;
}

void Rectangle::setBreadth(int b)
{
    breadth = b;
}

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

bool Rectangle::isSquare()
{
    return length == breadth;
}

Rectangle::~Rectangle()
{
    // cout<<"Rectangle Destroyed";
}
