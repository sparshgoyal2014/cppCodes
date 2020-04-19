#include <iostream>
using namespace std;

class base
{
  public:
    int x;

    void show()
    {
        cout << x << endl;
    }
};

class derived : public base
{ // inheriting from base class with addding extra feautres....
  public:
  int y;
  void display(){
      cout << x << " " << y << endl;
  }
};

int main(){
    base b;
    b.x = 25;
    b.show(); 


    derived d;
    d.x = 30;
    d.y = 40;

    d.show();
    d.display();

    return 0;
}