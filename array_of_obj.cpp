#include <iostream>
using namespace std;
class emp
{
    char name[20];
    int age;
public:
    void getdata(void)
    {
        cout << "Enter name:";
        cin >> name;
        cout << "Enter age:";
        cin >> age;
    }
void putdata(void);
};
void emp :: putdata(void)
{
    cout << "Name:" << name << endl;
    cout << "Age:" << age << endl;

}
const int size =3; 
int main()
{
     emp manager[size];
     for(int i=0; i<size; i++)
     {
        cout << "emter the details of employee manager :" << i+1 << endl;
        manager[i].getdata();
     }
    cout <<"\n";
    for(int i=0;i<size;i++)
    {
        cout << "manager " << i+1 << "\n";
        manager[i].putdata();
        cout << "\n";

    }
//    delete[] manager; // this line is not needed as manager is not dynamically allocated
return 0;


}