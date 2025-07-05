#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; ++i) {       // 🔁 Outer loop controls rows
        for (int j = 0; j < i; ++j) {    // 🔁 Inner loop controls repetitions of number 'i'
            cout << i;                   // 🖨️ Print the number (no newline)
        }
        cout << endl;                    // ↩️ Move to next line after finishing one row
    }
    return 0;
}