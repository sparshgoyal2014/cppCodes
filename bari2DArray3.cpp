#include<iostream>
using namespace std;

int main()
{
    int arr[][3] = {1,2,3,4,5,6};

    for(auto &x:arr)
    {
        for(auto& y:x)
        {
            cout << y << " " ;
        }

        cout << endl;
    }


    cout << endl;

    int arr2[2][6]= {7,5,9,4,8,6};

    for(auto& a:arr2)
    {
        for(auto &b:a)
        {
            cout << b << " ";
        }
        cout << endl;
    }

    return 0;
}