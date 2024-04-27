#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 2341, 12, 312, 3, 1, 2, 3, 4};

    // Sort the vector
    std::sort(v.begin(), v.end());

    // Remove consecutive duplicate elements
    auto last = std::unique(v.begin(), v.end());

    // Resize the vector to remove the duplicates
    v.erase(last, v.end());

    // Print the unique elements
    for (int it : v) {
        cout << it << endl;
    }

    return 0;
}
