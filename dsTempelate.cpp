#include<iostream>
using namespace std;

template<class T>
class Arithematic{  // class beoome generic
    private: 
    T a;
    T b;

    public:
    Arithematic(T a, T b);
    T add();
    T sub();

};

template<class R>
Arithematic<R>:: Arithematic(R a, R b){  // remember whenever you use the class name, you should pass the tempelate parameter 
    this->a = a;  // this is a pointer to the current object
    this->b = b;
}

template<class T>
T Arithematic<T>:: add(){
    T c;
    c= a+b;
    return c;
}

template<class T>
T Arithematic<T>:: sub(){
    T c;
    c = a-b;
    return c;
}

int main(){

    Arithematic<int> obj(10,5);
    Arithematic<double> obj2(10.5,6.4);

    cout << obj.add() << endl;
    cout << obj2.add() << endl;

    return 0;

}