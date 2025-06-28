#include <iostream>
using namespace std;

class Distance {
    int feet;
    int inches;
public:
    // Constructor to convert inches to feet and inches
    Distance(int totalInches) {
        feet = totalInches / 12;
        inches = totalInches % 12;
    }
    void display() {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }/
    /
};

int main() {
    int inputInches;
    cout << "Enter distance in inches: ";
    cin >> inputInches;
    Distance d(inputInches);
    d.display();
    return 0;
}