// // create a class dog woth a method bark() that prints "Woof!".
// // them call that method from main() using objects of th class
// #include <iostream>
// using namespace std;
// class Dog {
//     public:
//     void bark() {
//         cout << "Woof!";
//     }
// };
// int main()
// {
//     Dog dobj;
//     dobj.bark();
//     return 0;
    
// }

// define a functiion outside a function 
#include <iostream>
using namespace std;

class human {
    public:
      string name;
      float height;
      int age;
      void character(){
          cout <<"humanity!.";
      }
};
int main(){
    human obj;
    obj.name="krishna";
    obj.height=5.4;
    obj.age=19;
    cout << obj.name << " ," << obj.height << " ," << obj.age <<"\n";
    obj.character();
    return 0;

}