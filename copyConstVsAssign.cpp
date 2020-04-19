#include<iostream>
using namespace std;

class test{
   //  private:   ======  give very very big error

   public:

    int length = 10;
    int breadth = 5;

    void display(){
        cout << length << ' ' << breadth << endl;
    }

    test(){}
    test(test &t){
        cout << "copy constructor called" << endl;
        length = t.length;
        breadth = t.breadth;
    }
    

    test operator = (test t){
        cout << "assignment operator called" << endl;
        return t;
    }

};

 
int main(){
    test t1,t2;
    t2 = t1;

    
    test t3 = t1;

  // t1.display();
   //t2.display();
  // t3.display();


    return 0;
}