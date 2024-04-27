#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    // create the vector 
    vector<int> v ;

    //  we have to insert the  elements by the help of the push back functin 
    v.push_back(12);
    v.push_back(23);
    v.push_back(234);
    v.push_back(123);
    v.push_back(1);
    // v.push_back(3);

    sort(v.begin(), v.end());  
    cout<<"Before removing duplicate element:"<<endl;
    cout<<v.size()<<endl;
  
    // Use unique to rearrange the elements in v to eliminate duplicates
    auto last = unique(v.begin(), v.end());

    // Resize the vector to remove the duplicates
    v.erase(last, v.end());

  cout<<"After remove duplicate elements" <<endl;
    cout<<v.size()<<endl;
    // Print the unique elements
    for (int it : v) {
        cout << it << endl;
    }
    v.clear();
  cout<<"size of the vector: "<<v.size()<<endl;
  cout<<"capacity of the vector : "<<v.capacity()<<endl;
    return 0;
}
