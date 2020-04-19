#include<iostream>
using namespace std;

class test{
    private:
    int value = 20;

    public:
    friend void fun(int x)
    {
        cout << x 
    }
}