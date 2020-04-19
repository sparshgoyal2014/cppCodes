#include<iostream>
using namespace std;


int main()
{
    int arr[2][3] = {2,4,6,3,5,7};

    for(auto &x:arr)
    {
        for(auto y:x)
        {
            cout << y << "  ";
        }

        cout << endl;
    }

    return 0;
}