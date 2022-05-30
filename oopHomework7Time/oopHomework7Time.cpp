#include <iostream>
#include<cassert>
using namespace std;
typedef unsigned short ushort;
#include"Time.h"

int main()
{
    cout << boolalpha;
    Time time1(12, 20, 15);
    Time time2(15, 33, 18);
    Time time3;
    //time1();
    /*Time a =time1++;
    a();
    time1();*/

    cout << (time1<time2) << endl;
    cout << (!time2) << endl;
}

