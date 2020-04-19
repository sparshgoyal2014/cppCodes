#include<iostream>
using namespace std;


int max(int x,int y)
{
    return x>y?x:y;
}

int min(int x,int y)
{
    return x>y?y:x;
}

int main()
{
    int (*fp)(int , int);
    fp = max;
    (*fp)(5,10);

    fp = min;
    (*fp)(10,5);

    cout << (*fp)(5,10) << endl;

    return 0;

}
