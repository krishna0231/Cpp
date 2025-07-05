// #include <iostream>
// using namespace std;
// class student {
//     long int principal_id;
//     string year;
//     flaot rate;

// public:
//  // parameriezed constructor
//     krishna(long int p, int y, float r)
//     {
//         principal_id = p;
//         year = n;
//         rate = r;

//     }
//     void show() {
//         cout << "Principal ID: "<< principal_id << endl;
//         cout << "Year: "<< year << endl;
//         cout << "Rate: "<< rate << "%" <<  endl;

//     }
// };
// int main(){
//     krishna k1(1000,4,5.4);
//     k1.show();
//     return 0;
// }
#include <iostream>
using namespace std;

class Krishna {
    long int principal;
    int years;
    float rate;

public:
    // Constructor
    Krishna(long int p, int y, float r) {
        principal = p;
        years = y;
        rate = r;
    }

    void show() {
        cout << "Principal: " << principal << endl;
        cout << "Years: " << years << endl;
        cout << "Rate: " << rate << "%" << endl;
    }
};

int main() {
    Krishna k1(100000, 5, 7.5);
    k1.show();
    return 0;
}