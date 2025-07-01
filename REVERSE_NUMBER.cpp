#include <iostream>
using namespace std;
int main()
{
    int n,reverse = 0,remainder;
    cout << "Enter an integer:";
    cin>>n;
    while(n!=0)
    {
        remainder = n%10; // Get the last digit of n
        cout << "Remainder: " << remainder << endl; // Debugging line
        reverse = reverse * 10 + remainder; // Append the last digit to the reverse number
        n=n/10; // Remove the last digit
        //cout << "Updated n: " << n << ", Reverse: " << reverse << endl; // Debugging line
    }
    cout << "Reversed Number: " << reverse << endl; // Output the reversed number
}