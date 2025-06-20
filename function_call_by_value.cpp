// // #include <iostream>
// using namespace std;

// // Function to swap two numbers
// void swapNumbers(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int x, y;

//     // Input
//     cout << "Enter first number: ";
//     cin >> x;

//     cout << "Enter second number: ";
//     cin >> y;

//     cout << "Before swapping: x = " << x << ", y = " << y << endl;

//     // Call the function
//     swapNumbers(x, y);

//     cout << "After swapping: x = " << x << ", y = " << y << endl;

//     return 0;
// }
#include <iostream>
using namespace std;

// Function to swap two numbers (using call by reference)
void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    cout << "\nBefore swapping: x = " << x << ", y = " << y << endl;

    // Call the swap function
    swapNumbers(x, y);

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}

