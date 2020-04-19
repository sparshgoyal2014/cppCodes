#include<iostream>
using namespace std;

int sum(int x,int y)
{
    return x+y;

}

float sum(float x,float y)
{
    return x+y;
}
int main()
{
    cout << sum(2,3) << endl;
  //  cout << sum(2.3,5.6) << endl;  // automatically taken as doibles due to its high precedence BUT IN (bariFunction2)

  cout << sum(2.3f,3.5f) << endl;

    return 0;

}