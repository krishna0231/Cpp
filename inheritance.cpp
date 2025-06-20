// concepts of inheritance : inheritance means one class can use other calsses function or data or properties
#include<iostream>
using namespace std;
class parant {
    public:
    void krishna() {
        cout << "Hello from base class!" << endl;
    }
};
class children : public parant {

public:
   void son() {
    cout << "Hi from children son!" << endl;

   }
};
int main()
 {
    children bachha;
    bachha.krishna(); // parants class function
    bachha.son();   // derived class function
    return 0;

 }