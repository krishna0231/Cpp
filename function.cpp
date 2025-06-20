//synatac of function i c++ is same as the in c
/* void fun_name();   fun declaration
*/
// main()
// {
//     ....
//     fun_name();    fun Call
// }
// void fun_name()
// {
//     .. fun body
//     ..
// }
//function prototype
#include <iostream>
using namespace std;
// tyoe function_name(arguments);
int sum(int,int);
void gf(void);


int main()
{
  int num1,num2;
  cout <<"Enter first number: "<<endl;
  cin>>num1;
  cout <<"Enter second number: "<<endl;
  cin>>num2;
  cout<<"sum of two number is:"<<sum(num1,num2);
  g();
  return 0;

}


int sum(int a, int b)
{
    int c=a+b;
    return c;
}
void g()
{
    cout<<"\n Hello!,good morning myself.";
}