//create the vector string and return the max word in the sentence 

#include<iostream>
#include<string>
#include<vector>

using namespace std;

// create the function that return the maximum number of words in the string vector array 

// int maxWord (vector<string> sentense){
//     int ans = 0; 
    
//     // here we use the for each loop 
//     for (auto &s:sentense)
//     {
//        int cnt = 1+count(s.begin(),s.end()," ");
//         ans= max(ans,cnt);
//     }
//     return ans;
    
    
// }
int main(){

    //create the vector string 
    vector <string> sentense ;
    sentense.push_back("this is aman");
    sentense.push_back("this is aman  kumar");
    sentense.push_back("this is aman  kumar singh");
    // int data = maxWord(sentense);
    // cout<<data<<endl;
    for (int i = 0; i < sentense.size(); i++)
    {
        cout<<sentense[i]<<endl;
    }
    
    return 0; 
}