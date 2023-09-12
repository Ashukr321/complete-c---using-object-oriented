// preprocessor
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <chrono>

using namespace std;
// linear search
int LinearSearch(int arr[], int size, int key)
{

  for (int i = 0; i < size; i++)
  {

    if (arr[i] == key)
    {
      return i;
    }
  }

  return -1;
}


// main methods
int main()
{
  const int size = 100000;
  int arr[size];
  auto startTime = std::chrono::high_resolution_clock::now();

  
  for (int i = 0; i < size; i++)
  {

    arr[i] = rand() % 100000 + 1;
  }

  auto endTime = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);

  std::cout << "Execution Time: " << duration.count() << " ms" << std::endl;

  return 0;
}
