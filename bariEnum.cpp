#include<iostream>
using namespace std;

int main()
{
    enum days{x,y,z};     // days is a data type.......from x to z

    //x=2; //// we cant declare it as in enum all are constants 


    enum dpt{cs = 1 ,ece   , civil};

    enum months {jan=1 , feb =2 , march =5 , april , june =10};

    enum depts{cse =1 ,it=0,mech};

    cout << cse << it << mech << endl;

    cout << x << y << z << endl;

    days d;
    d=x; // d can take only from x or y or z

    cout << d  << endl;

    return 0;
}