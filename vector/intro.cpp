// vector in the cpp
// vector is the dynamically craeated data strcutures
// this is similar to the array
// this have some inbuilt function
// add remove size capacity its
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    // create the vector in the cpp

    vector<int> v(5, 5);
    v.push_back(3);// add after the all the element  in the vector 
    // its size automatically increse bec this is dyamic allocated in the 
    // memory 

    v.push_back(33);
    v.push_back(44);
    v.push_back(44);
    v.push_back(44);
    v.push_back(44);

    // this con't override the privious data of  the vector 

    // v is the vector variables name
    // print the all the elements of the the vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }
    cout<<endl;
    cout << v.size() << endl;
    // size gives the total numbr of the elements present in the vector 
    // capacity gives the how much vector have capcity to hold the elements init 
    cout<<"capacity of the vector "<<endl;
    cout<<v.capacity()<<endl;// this automatically update and increase their size of the vector 
   vector<int> numbers = {1, 2, 3, 4, 5};

    // Reverse the order of elements in the vector
    reverse(numbers.begin(), numbers.end());

    // Print the reversed vector
    for (int num : numbers) {
        std::cout << num << " ";
    }
    
    return 0; 
}