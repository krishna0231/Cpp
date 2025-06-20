#include <iostream>
using namespace std;
int main()
{
//   //poinrter is a data type which holds the address of other datatypes
  int a=3;
  int *b;
  b=&a;
//   int * b=&a;
  cout<< "The adderess of a is "<<&a<<endl;

  cout<< "The adderess of a is "<<b<<endl;
//   // *---->(value at) dereference opreator
//   // & --->(value of) operator
  cout<< "the value at address b is "<<*b<<endl;
  //// ***pointer to pointer
  int ** c=&b;
  cout<<"The address of b is "<<&b<<endl;
  cout<<"The address of b is "<<c<<endl;
  cout<<"The value at  address c is "<<*c<<endl;
  cout<<"The value at address value _at(value_at(c)) is"<<**c<<endl;
  return 0;

}
