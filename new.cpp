#include<iostream>
using namespace std;
int main()
{
    int *arr,size;
    cout << "nter the size of the integer array:";
    cin>>size;
    cout << " creating arrya of size "<<size<< ".." <<endl;
    arr = new int[size];
    cout << "eneter the elements of the array:"<< endl;
    for(int i= 0; i<size; i++)
    {
        cin >> arr[i];
    }
    cout << "the elements of arrya are :"<< endl;
    for( int i=0; i<size; i++){
        cout <<  arr[i];
    }
    delete[] arr;
    cout << "Memory dealocated successfully.";
    return 0;
}