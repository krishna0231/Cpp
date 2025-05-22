#include <iostream>
using namespace std;
int glo = 5;

void sum() {
    int a;
    cout << glo << endl;
}

int main() {
    int glow = 4;
    glow = 44;
    sum();
    // Call the sum function to print global variable
    
    cout << "c++ is better than c.\n";
    float number1, number2, sum, avg;
    cout << "Enter two number:";
    cin >> number1; // reads two numbers from keyboard
    cin >> number2; // >> works like scanf() in C
    sum = number1 + number2;
    avg = sum / 2;
    cout << "sum=" << sum << "\n";
    cout << "avg=" << avg << "\n";
    return 0;
    
   int a = 10;
     int b = 12;
    float pi = 3.14;
    char c = 'A';
    cout << "this is the tutorial 2.\nHere the value of a is " << a << ".\nThe value of b is " << b << "\n";
    cout << "The value of pi is: " << pi << endl;
    cout << "The value of c is " << c << endl;
    cout << "The sum of a and b is: " << a + b << endl;
    return 0;
}