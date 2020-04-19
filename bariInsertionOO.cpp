//#include<iostream>
#include<iostream>

using namespace std;


class complex{
    private:

    int real = 2;
    int img = 3;


    public:

    friend ostream&  operator<< (ostream &o , complex c1);
    // OR
    // friend void  
    friend ostream& fun(ostream &o , complex c1);

};

ostream&  operator << (ostream  &o , complex  c1){
    o<< c1.real << "+i" << c1.img << endl;
    return o;
}

ostream& fun(ostream &o , complex c1){
    o<<c1.real << "+i" << c1.img << endl;
    return o;
}

int main(){

    complex c; 
    cout << c << endl;
    operator<<(cout , c);
    fun(cout,c) << endl;

    return 0;


}