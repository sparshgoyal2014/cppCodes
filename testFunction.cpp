#include<iostream>
using namespace std;


 void display(int);
int main()
{

    int x=2;
    int y;

    cout << "enter y: " << endl;

    cin >> y;

    display(y);

    return 0;


}


void display(int b)
{
    cout << b << endl;

    cout << "value of x: " << x << endl;
    


}