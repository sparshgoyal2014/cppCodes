#include<iostream>
using namespace std;

class your;
class my{
    private:
    int a = 10;

    friend your;

};


class your{ // contaoiner class.....
    public:
    my m;  // this class is using the object of the other class
    // so this is having a hasA relationship with that
    // if inherited then it will be having isA relationship.....

    void fun(){
        cout << m.a;
    }

};

int main(){
    your y;
    y.fun();

    return 0;

}
