#include <iostream>
using namespace std;

void showMenu() {
    int choice;
    do {
        cout << "\n=== Main Menu ===\n";
        cout << "1. Option 1\n";
        cout << "2. Option 2\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You selected Option 1.\n";
                // Add logic for Option 1 here
                break;
            case 2:
                cout << "You selected Option 2.\n";
                // Add logic for Option 2 here
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 3);
}

int main() {
    showMenu();
    return 0;
}