#include <iostream>
using namespace std;
// Function prototypes with correct types and default arguments
float value(float p, int n, float r = 4.5);
void printline(char c = '*', int len = 30);

int main()
{
    float amount;
    printline();  // use default value for arguments
    amount = value(500.3, 5);  // default for 3rd argument
    cout << "\n final value = " << amount << "\n\n";

    amount = value(1000.3, 5, 0.3); // passing all arguments explicitly
    cout << "\n final value = " << amount << "\n\n";
    printline('='); // use default value for len
    return 0;
}

float value(float p, int n, float r)
{
    int year = 1;
    float sum = p;
    while (year <= n)
    {
        sum += sum * r / 100;
        year++;
    }
    return sum;
}

void printline(char c, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << c;
    }
    cout << endl;k
}