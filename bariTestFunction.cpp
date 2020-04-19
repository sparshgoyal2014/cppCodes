#include<iostream>
using namespace std;


class test{
    private: 
    int x= 20;
    

    public:
    int fun(int x){
        this-> x = x;
        return this->x;
    }

    int getValue(){
        return x;
    }
};

int main(){
    test t1,t2;
    cout << t1.fun(5) << endl;
    cout << t1.getValue() << endl;

    cout << t2.getValue() << endl;
    return 0;

}