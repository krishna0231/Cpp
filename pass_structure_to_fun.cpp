// #include <iostream>
// #include <string>
// using namespace std;

// // Define a structure
// struct Student {
//     int id;
//     string name;
//     float marks;
// };

// // Function to display student info (pass by value)
// void displayByValue(Student s) {
//     cout << "\n[By Value] ID: " << s.id << endl;
//     cout << "[By Value] Name: " << s.name << endl;
//     cout << "[By Value] Marks: " << s.marks << endl;
// }

// // Function to update marks (pass by reference)
// void updateMarks(Student &s) {
//     s.marks += 5.0;  // Add bonus marks
//     cout << "\n[By Reference] Marks updated inside function.\n";
// }

// int main() {
//     Student stu;

//     // Input student details
//     cout << "Enter ID: ";
//     cin >> stu.id;
//     cout << "Enter Name: ";
//     cin.ignore(); // Clear newline from buffer
//     getline(cin, stu.name);
//     cout << "Enter Marks: ";
//     cin >> stu.marks;

//     // Pass structure by value
//     displayByValue(stu);

//     // Pass structure by reference
//     updateMarks(stu);

//     // Display updated structure
//     cout << "\n[Main] Updated Marks: " << stu.marks << endl;

//     return 0;
// }
#inclide <iostream>
#include <string>
using namespace std;
// defime a struture name student contain name, id and & marks
struct student {
    string name;
    inyt id;
    float marks;

};
// function to dispaly student info (pass by value)
void displayByValue(student s)
{
    cout << "\n[by value] Name: " << s.name << "  ID: " << s.id << "  Marks: " << s.marks << endl;

}
// function to update marks (pass by reference)
void updateMarks(student &s)
{
    s.marks += 5.0; // Add bonus marks
    cout << "\n[by reference] marks updated inside function.\n";

}
int main() {
     stydent stu;
     // input studet details
     cout << "enter name:";
        cin >> stu.name;
        cout << "enter id:";
        cin >> stu.id;
        cout << "enter marks:";
        cin >> stu.marks;
        
}