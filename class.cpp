#include <iostream>
using namespace std;

class employee {
    private:
        double salary;
        int id;
        string name;
        float working_hours;
    public:
        employee(int id, string name, double salary, float working_hour) {
            this->id = id;
            this->name = name;
            this->working_hours = working_hour;
            this->salary = salary * working_hour;
    
        }

        employee(){
            id = 0;
            name = "Unknown";
            salary = 0.0;
            working_hours = 0.0;
        }
        void display(){
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
            cout << "Working Hours: " << working_hours << endl;
        }
};
int main(){
    int i;
    string n;
    double s;
    float w;
    // employee em(i,n,s,w);
    cout << "Enter employee id:";
    cin >> i;
    cout << "Enter employee name:";
    cin >> n;
    cout << "Enter employee salary rate for an hour:";
    cin >> s;
    cout << "Enter employee working hours:";
    cin >> w;
    // em.setdata(i,n,s,w);
    employee em(i,n,s,w);
    
    em.display();
    return 0;
}