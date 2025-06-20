#include <iostream>
using namespace std;
int main()
{
                // ***************** for loop in c++ ***************

//     for(int i=0;i<=4;i++)
//    { cout<<i<<endl;
// }
//    return 0;
               /// ***********while loop************

//  while loop execute the priogram until while condition is true
// int i=1;
// while(i<=10)
// {
//     cout<<i<<endl;
//     i++;
// }
// ****************do-while loop*************
// int i=1;
// do
// {
//     cout<<i<<endl;
//     i++;
// }while(i<=10);
 // ****************Break statement*********
 for(int i= 0;i<40;i++)
 {
//     cout<<i<<endl;
//     if(i==20){
//         break;  //if we use continue in place of break code skip the 2 and print other
//     }
if(i==2){
    continue;
}
cout<<i<<endl;
}

return 0;
}