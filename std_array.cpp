#include<iostream>
#include<array>
using namespace std;

 int main()
 {
    std::array<int,5> arr_name ={10,20,30,40,50};

    cout << "Elements of array are:";
    for(int x :arr_name) { // range based for loop
        //  x is a copy of each element in arr_name,so modifying x won't be changed 
        cout << x << " ";
        }
    cout <<"First element is: "<< arr_name.front()<<endl;
    cout <<"Last element is: " << arr_name.back()<<endl;
    cout <<"Size of array is: " << arr_name.size() << endl;
    cout <<"Max size of array is : "<< arr_name.max_size()<< endl;
    cout <<" Is array empty? " << (arr_name.empty() ? "yes" : "no") <<endl;
    cout <<" Elements of array in reversed order are:" << endl;
      for(int i= arr_name.size()-1; i>=0; i--) 
      {
        cout << arr_name[i] << " ";
      }
        cout << endl;

return 0;
}