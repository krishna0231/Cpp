//                            #include <iostream>
// using namespace std;

// int main() {
//     int x = 10;         // Declare an integer variable
//     int* ptr = &x;      // Declare a pointer and store the address of x

//     // Display values and addresses
//     cout << "Value of x: " << x << endl;
//     cout << "Address of x: " << &x << endl;

//     cout << "Value of ptr (should be address of x): " << ptr << endl;
//     cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;

//     // Modify x using the pointer
//     *ptr = 25;
//     cout << "\nAfter modifying *ptr:\n";
//     cout << "Value of x: " << x << endl;

//     return 0;
// }
#include <iostream>
using namespace std;

// Function to create a dynamic array of size M using new operator
int* createVector(int M) {
    int* vec = new int[M]; // allocate array of size M
    return vec;
}

int main() {
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;

    // Create the vector
    int* myVector = createVector(size);

    // Fill the vector with values from the user
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> myVector[i];
    }

    // Display the vector
    cout << "The vector contains:\n";
    for (int i = 0; i < size; i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    // Free up the allocated memory
    delete[] myVector;

    return 0;
}