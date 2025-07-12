#include <iostream>
using namespace std;
class time
{
    int hours;
    int minutes;
public:
    void gettime(int h,int m)
    {
        hours = h;
        minutes = m;

    }
    void puttime(void)
    {
        cout <<"time is: "<< hours << "hours and " << minutes << "minutes" <<endl;
    }
void sum(time ,time);

};
void time::sum(time t1, time t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = t1.hours + t2.hours + minutes/60;
    minutes = minutes % 60;
}
int main()
{
    time T1,T2,T3;
    int h1,m1,h2,m2;
    cout << "Enter first time (hours and minutes): ";
    cin >> h1 >> m1;
    T1.gettime(h1,m1);
    cout << "Enter second time (hours and minutes): ";
    cin >> h2 >> m2;
    T2.gettime(h2,m2);
    T3.sum(T1,T2);
    cout << "Sum of times: ";
    T3.puttime();
    return 0;
}