// Example of scope resolution operator in C++
#include <iostream>
using namespace std;

int x = 10; // Global variable

class Demo {
public:
    int x;
    Demo(int x) { this->x = x; }
    void show();
};

void Demo::show() {
    cout << "Local x: " << x << endl;
    cout << "Global x: " << ::x << endl;
}

int main() {
    int x = 20; // Local variable
    cout << "Local x in main: " << x << endl;
    cout << "Global x in main: " << ::x << endl;
    Demo d(30);
    d.show();
    return 0;
}
