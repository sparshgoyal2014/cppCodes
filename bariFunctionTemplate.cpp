#include<iostream>
using namespace std;

template<class T>
T maximum(T x,T y)
{
    if(x>y)
    {
        return x;
    }
    else 
    return y;
}

int main()
{
    cout << maximum(2,1) << endl;

    cout << maximum(2.3,5.6) << endl; // doubles data type

    cout << maximum(2.3f,5.6f) << endl; // float data type

    cout << maximum(2.3f,5.6) << endl; // error because one is doubles and the other is float but T is same ........

    return 0;
}