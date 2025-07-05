// dyanamic initialization of class member using constructor 
#include <iostream>
using namespace std;
class circle {
    double radius;
     public:
     // constructor with parameter for dyanamic initialixation
     circle(double r){
        radius = r;
     }
        double area(){
            return 3.14* radius *radius;
        }
};
int main() {
    double r;
    cout << "Enter radius of circle:";
    cin >> r;
    // object dynamically initialied with user input
    circle c(r);
    cout << "Area of circle:" << c.area() << "\t square unit" << endl;
    return 0;
}