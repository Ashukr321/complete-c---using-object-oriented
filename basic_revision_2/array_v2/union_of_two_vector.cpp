#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Define two vectors
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {324, 13, 5, 513515, 1, 5, 13, 13};

    // Create a vector to store unique elements
    vector<int> uniqueElements;

    // Insert elements from v1 into uniqueElements
    uniqueElements.insert(uniqueElements.end(), v1.begin(), v1.end());

    // Insert elements from v2 into uniqueElements
    uniqueElements.insert(uniqueElements.end(), v2.begin(), v2.end());

    // Sort uniqueElements
    sort(uniqueElements.begin(), uniqueElements.end());
    unique(uniqueElements.begin(), uniqueElements.end());
    // Print the union vector
    for (int x : uniqueElements) {
        cout << x << endl;
    }

    return 0;
}
