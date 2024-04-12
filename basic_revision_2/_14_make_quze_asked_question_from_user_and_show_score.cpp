// preprocessor
#include <iostream>
using namespace std;

// main start here ...
int main()
{
  int score = 0;
  //  size of the the int  data types in the cpp is the 4 bytes
  cout << "Questions 1 . what is the size of the int data types in the bytes " << endl;
  cout << "a > 2 bytes " << endl;
  cout << "b> 4 bytes " << endl;
  cout << "c > 8 bytes " << endl;
  cout << "Enter your Answer a/b/c " << endl;
  char Answer2;
  cin >> Answer2;
  if (Answer2 == 'b' || Answer2 == 'B')
  {
    cout << "Correct ! ⭐⭐" << endl;
    score++;
  }
  else
  {
    cout << "Incorrect ! " << endl;
  }

  cout << endl;
  cout << "Questions 2 . what  data types use to store the  character in the cpp " << endl;
  cout << "a > int  " << endl;
  cout << "b> boolean" << endl;
  cout << "c > character " << endl;
  cout << "Enter your Answer a/b/c " << endl;
  char Answer1;
  cin >> Answer1;
  if (Answer1 == 'c' || Answer1 == 'C')
  {
    cout << "Correct ! ⭐⭐" << endl;
    score++;
  }
  else
  {
    cout << "Incorrect ! " << endl;
  }
  cout << "Your Total Score : " << score << endl;

  return 0;
}