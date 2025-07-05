// constructor is special type of fuction which is same name as class name and called when object is created
#include<iostream>
using namespace std;
class student {
    public:
    int rollno;
    string name;
    //default constructor
    student(){
        rollno = 23;
        name = "krishna";
    }
    // parameterzed constructor
    student(int r, string n)
    {
        rollno = r;
        name = n;
    }
}
