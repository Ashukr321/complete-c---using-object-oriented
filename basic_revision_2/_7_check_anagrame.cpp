//preprocessor
#include<iostream>
#include<algorithm>
using namespace std;

bool isAnagrame (string str1,string str2){
  int len1 = str1.length();
  int len2 = str2.length();


  if(len1 == 0 || len2 == 0){
    return false;
  }
  if(len1 !=len2){
    return false;
  }

  sort(str1.begin(),str1.end());
  sort(str2.begin(),str2.end());
  for (int i = 0; i < len1 ; i++)
  {
    if(str1[i] != str2[i]){
      return false;
    }
  }

  return true;
  

}

//main start here ...
int main(){
  string str1, str2;
  cout<<"Enter the first string ! "<<endl;
  cin>>str1;
  cout<<"Enter the second string"<<endl;
  cin>>str2;
   
  if(isAnagrame(str1,str2)){
    cout<<"yes enter your string is anamgrame"<<endl;
  }
  else{
    cout<<"sorry ! Your string is not anagrame "<<endl;
  }

  return 0;
}