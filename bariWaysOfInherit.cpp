#include <iostream>
using namespace std;

class parent
{
  private:
    int x = 10;

  protected:
    int y = 20;

  public:
    int z = 30;

    void display()
    {
        cout << x << " " << y << " " << z << endl;
    }
};

class child : public parent
{
  public:
    //x=1;
    // y=2;    // gives error open programm global test   
    void fun()
    {
        y = 2;
        z = 3;
    }
};

int main()
{
    child c;
    c.fun();
    c.display();

    return 0;
}