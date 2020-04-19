#include<iostream>
using namespace std;

int add(int x,int y)
{
    return x+y;
}


int main()
{
    float a=5.2,b=3.5;
    cout << add(a,b) << endl;
    int a= 5.2,b=3.5; 
    cout << add(a,b) << endl; // not ambigious because float is declared for a and b already in prev. line
 
    return 0;

}