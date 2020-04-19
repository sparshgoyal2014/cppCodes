#include <iostream>
using namespace std;

class test
{
private:
    int x = 5;

public:
    friend void display();
};
void display()
{
    test t;
    cout << "this is display function" << endl;
    cout << t.x << endl;
}

int main()
{

    test t;
    display();
   return 0;
}