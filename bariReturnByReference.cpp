#include<iostream>
using namespace std;

int& fun(int &a)
{
    cout << a << endl;
    return a;
}

int main()
{

    int x=10;
    cout << fun(x) << endl; 
    fun(x)=25;  // fun will become x itself as .........same as 'a' had become x in call by reference... 

    cout << x << endl;

    return 0;

}