// what is the map in the cpp 
// map is the part of the stl 

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    //create the map 
    map<int,string> myMap;
    //store the elements in the map 
    myMap[2]= "ankit";
    myMap[1]= "ashu";
    myMap[3]= "amit";
    myMap[4]="aman";
    myMap.insert(make_pair(5,"rahul"));
    cout << myMap.size()<<endl;
    // myMap.clear();// this clear all the elements from the map 
    cout << myMap.size()<<endl;

    if (myMap.empty())
    {
        cout << "map is empty"<<endl;
    }else{
        cout<<"map is not empty"<<endl;
    }

    // here we can remove a particular elements from the  map 
    myMap.erase(3);// this remove the element from the map thats key is 3 

    int size  = myMap.size();
    cout<<size<<endl;

    // here we can iterate all the elements of the map 
    for (auto it = myMap.begin(); it !=myMap.end();++it)
    {
       cout<<it->first<<" "<<it->second<<endl;
    }
    
}
