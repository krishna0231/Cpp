#include <iostream>
using namespace std;

// Function to create a dynamic array of size M
int* createVector(int M) {
    // Allocate memory dynamically using new
    int* vec = new int[M];

    // Optional: initialize values (set all elements to 0)
    for (int i = 0; i < M; i++) {
        vec[i] = 0;
    }

    return vec;
}

int main() {
    int size;
    std::cout << "Enter vector size: ";
    std::cin >> size;

    int* myVector = createVector(size);

    // Example: print the values
    for (int i = 0; i < size; ++i) {
        std::cout << myVector[i] << " ";
    }

    // Clean up memory!
    delete[] myVector;

    return 0;
}