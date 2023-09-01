#include <iostream>
#include <chrono>

int main() {
    // Get the current time point at the start of the program
    auto startTime = std::chrono::high_resolution_clock::now();

    // Your program logic goes here

    // Get the current time point at the end of the program
    auto endTime = std::chrono::high_resolution_clock::now();

    // Calculate the duration in milliseconds
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);

    // Print the execution time in milliseconds
    std::cout << "Execution Time: " << duration.count() << " ms" << std::endl;

    return 0;
}
