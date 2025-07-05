// Program to calculate investment value for different principal, rate, and years
// **Question:**  
// Write a C++ program to calculate and display the future value of an investment for different principal amounts, interest rates, and years.  

// - Use arrays to store 10 different principal values (e.g., 1000, 2000, ..., 10000) and 11 different annual interest rates (from 0.10 to 0.20).
// - For each principal and each rate, calculate the value of the investment for each year from 1 to 10 using the compound interest formula:  
//   **V = P × (1 + r)^n**  
//   where  
//   - V = future value  
//   - P = principal  
//   - r = annual interest rate  
//   - n = number of years
// - Display the principal, rate, year, and calculated value in a formatted output.

// **Sample Output:**  
// ```
// Principal (P): 1000
//   Rate (r): 0.10
//     Year 1: V = 1100.00
//     Year 2: V = 1210.00
//     ...
//   Rate (r): 0.11
//     Year 1: V = 1110.00
//     ...
// ...
// Principal (P): 2000
//   Rate (r): 0.10
//     Year 1: V = 2200.00
//     ...
// ```
#include <iostream>
#include <cmath>  // for pow()
#include <iomanip>
using namespace std;

int main() {
    // Array of principal values
    double P_values[] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
    // Array of rate values
    double r_values[] = {0.10, 0.11, 0.12, 0.13, 0.14, 0.15, 0.16, 0.17, 0.18, 0.19, 0.20};
    
    cout << fixed << setprecision(2); // Format output to 2 decimal places
    
    // Loop over principal values
    for (int i = 0; i < 10; i++) {
        double P = P_values[i];
        cout << "\nPrincipal (P): " << P << "\n";
        
        // Loop over rate values
        for (int j = 0; j < 11; j++) {
            double r = r_values[j];
            cout << "  Rate (r): " << r << "\n";
            
            // Loop over year values
            for (int n = 1; n <= 10; n++) {
                // Calculate investment value using compound interest formula
                double V = P * pow((1 + r), n);
                cout << "    Year " << n << ": V = " << V << endl;
            }
        }
    }

    return 0;
}
