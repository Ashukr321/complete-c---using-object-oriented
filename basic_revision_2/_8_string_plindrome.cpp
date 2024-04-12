// preprocessor
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isPlindrome(string str)
{
  int len = str.length();
  for (int i = 0; i < len / 2; i++)
  {
    if (str[i] != str[len - i - 1])
    {
      return false;
    }
  }
  return true;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string  " << endl;
  cin >> str;

  // transform string in to the lowercase
  transform(str.begin(), str.end(), str.begin(), ::tolower);

  if (isPlindrome(str))
  {
    cout << "Enter your string  is palindrome : " << str << endl;
  }
  else
  {
    cout << "Enter your string is not Palindrome" << str << endl;
  }
  return 0;
}