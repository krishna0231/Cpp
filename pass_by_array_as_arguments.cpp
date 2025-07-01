#include <iostream>
using namespace std;
// function to calculate the sum of array elements
int calculatesum(int marks[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += marks[i]; // add each element of array
    }
    return sum;
}

// function to calculate the average of array elements
double calculateaverage(int marks[], int size)
{
    int sum = calculatesum(marks, size);
    double average = sum / (double)size; // calculate average
    return average;
}
int main()

{
    int size;
    double average; // variable to store average
    cout << "Enter the number of students: ";
    cin >> size;

    int marks[size]; // array to store marks of students
    // int studentmarks[5]; //array to sore marks of 5 student
    cout << "Enter the marks of " << size << " students:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "student " << i + 1 << ":";
        cin >> marks[i];
    }
    // input marks for each student}
    int sum = calculatesum(marks, size);         // calculate sum of marks
    double average = calculateaverage(marks, size); // calculate average of marks
    cout << "Sum of marks: " << sum << endl;         // output sum of marks
    cout << "Average of marks: " << average << endl; // output average of marks
    return 0;
}