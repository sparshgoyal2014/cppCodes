//#include<iostream>
#include<iostream>
using namespace std;

class Node{

public:

  int id;
  int a;
  int b;

  friend int add(int,int);

  void itsMyLife(int);
  Node();
};

//node.cpp
Node::Node(){
  a=0;
  b=0;
  id=1;
}

void Node::itsMyLife(int x){

  cout<<"In object "<<id<<" add gives "<<add(x,a)<<endl;

}

//routing.cpp
// #include "node.h"

int add(int x, int y){

     return x+y;
}

//main.cpp
// #include "node.h"

int main(){

return 0;
}