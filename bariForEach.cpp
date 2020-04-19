#include<iostream>
using namespace std;

int main()
{

    int arr[] = {1,2,3,4,5};

    for(int x:arr)
    {
        cout << x << " " ;

    }
    cout << endl;

    for(int &y:arr)
    {
        y++;
        cout << y << " ";
    }

    cout << endl;

    for(auto z:arr)
    {
        cout << z << " ";
    }


    return 0;




}