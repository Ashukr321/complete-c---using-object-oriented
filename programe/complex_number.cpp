#include <iostream>
using namespace std;
class Complex
{
public:
    int real1 = 4;
    int real2 = 6;
    int img1 = 5;
    int img2 = 2;

    void add()
    {

        int real = real1 + real2;
        int img = img1 + img2;
         cout << real << "+" <<"("<< img <<")" << "i";
    }

    void sub()
    {
            int real = real1 - real2;
            int img = img1 - img2;
            cout << real << "+" <<"("<< img <<")" << "i";
        
    }
    void mul()
    {
            int real = (real1 * real2)+(real1*img2);
            int img = (img1 * real2)+(img1*img2);
            cout << real << "+" <<"("<< img <<")" << "i";
           
    }
};

int main()
{
    Complex c1;
    c1.add();
    cout << endl;
    c1.sub();
    cout << endl;

    c1.mul();
    return 0;
}
