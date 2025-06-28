#include <iostream>
using namespace std;

class Demo {
public:
    int value;
    Demo(int v) { value = v; }
    void display() { cout << "Value: " << value << endl; }
};

void showDemo(Demo d) {
    d.display();
}

int main() {
    Demo obj(10);
    showDemo(obj);
    return 0;
}