#include<iostream>
using namespace std;

void function(){
    int x = 5;
    
}


int x=10;
int main()
{
    cout << x << endl;
    int x=20;
    cout << x << endl;

    {
        int x=30;
        cout << x << endl;
    }
    cout << x << endl; 
    cout << ::x << endl;  // scope resolution  
    //cout << function()::x << endl;    /// not possible......

    return 0;
}