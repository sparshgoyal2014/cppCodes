#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float fValue = 7.1;
    if(fValue == 7.1)
    {
        cout<< "equals...." << endl;  // infinite precision .....can not occur in real life.....
                                        // float values are not same
    }
    else {
        cout << " not equals......" << endl;

    }


    if(fValue < 7.11)   //7.1000002645 is always less then 7.1100254984 
    {
        cout<< "equals...." << endl;

    }

    else {
        cout<< "not equals...." << endl;


    }

    cout<< setprecision(10) << fValue << endl; // 7.100000002454



    return 0;

}