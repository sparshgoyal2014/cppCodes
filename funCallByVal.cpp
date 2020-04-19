#include<iostream>
using namespace std;

void changeValue(int x){
    x = 56;
    cout << &x << endl;
    return ;
}

int main(){
    int a = 5;
    changeValue(a);
    cout << a << endl;
    cout << &a << endl;
    // cout << &2 << endl; // error // read the error you will understand what's the error
    changeValue(2);


    // cout << 2++ << endl;//error//   read the error you will understand what's the error 

    return 0;
}

/* 
how Exactly call by value works?

for ex....

void fun(int x){  // here a is copied to x  like copy initialization(in screen shots) i.e. x = a   // also that is why reference works &x = a
    x++;
}

int main(){
    int a = 3;
    fun(a)    // here a is passed not copied(it can not do a = a) now go to first step to see what happens after it is calles here
    fun(2);   // you can pass direct constant here or you can first copy that constant value which you want to pass in the function in some variable and than pass that variable 

    cout << &2 << endl;  // you can't do this, bcoz address must be of variable 

    otherFun(&2)  // so you can't pass this as parameter in the pass by address method

} */