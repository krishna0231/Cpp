#include <iostream>
#include <string>

const int MAX_AGE = 120;  // Global constant

class Person {
    const std::string birthCountry;  // Constant member
    int age;
public:
    Person(std::string country, int a) : birthCountry(country), age(a) {}
    
    // const member function
    std::string getCountry() const { return birthCountry; }
    
    void printInfo() const {
        std::cout << "From " << birthCountry 
                  << ", age " << age 
                  << " (MAX: " << MAX_AGE << ")\n";
    }
};

int main() {
    const double PI = 3.14159;
    const Person john("USA", 30);
    
    std::cout << "PI: " << PI << "\n";
    john.printInfo();
    
    // john.getCountry() = "Canada";  // Error - const object
    // PI = 3.14;  // Error - const variable
    
    return 0;
}