#include <iostream>
using namespace std;

// 1. Built-in (Library) Function
// Example: cout, cin, sqrt(), etc.

// 2. User-defined Function
void greet() { // No arguments, no return value
    cout << "Hello!" << endl;
}

// 3. Function with Arguments and Return Value
int add(int a, int b) {
    return a + b;
}

// 4. Inline Function
inline int square(int x) {
    return x * x;
}

// 5. Recursive Function
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// 6. Friend Function (used with classes)
class Demo {
    int x;
public:
    Demo(int val) : x(val) {}
    friend void show(Demo d);
};
void show(Demo d) {
    cout << "Friend function, x = " << d.x << endl;
}

int main() {
    greet();
    cout << "Add: " << add(2, 3) << endl;
    cout << "Square: " << square(4) << endl;
    cout << "Factorial: " << factorial(5) << endl;
    Demo obj(10);
    show(obj);
    return 0;
}