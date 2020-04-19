#include<iostream>
using namespace std;

class test{
    public: 
    int a,b;
};

int main(){
  test t = {};
  cout << t.a << "   " << t.b << endl;

  cout << test{}.a << "   " << test{}.b << endl;  
  return 0;
}