#include <iostream>
using namespace std;
//function to swap two varible song refeence varible
void swap(int &a, int &b)
{
    int temp;
    temp= a;
    a=b;
    b=temp;
}
int main()
{
    int x, y;
    cout << "Enter two numbers to swap: ";
    cin >> x >> y;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    return 0;
}