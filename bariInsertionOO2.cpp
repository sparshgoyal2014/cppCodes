//#include<iostream>
#include<iostream>

using namespace std;


class complex{
    private:

    int real = 2;
    int img = 3;


    public:

    //ostream&  operator<< (ostream &o , complex c1);
  friend  ostream&  fun(ostream  &o, complex  c1){
    o<< c1.real << "+i" << c1.img << endl;
    return o;
}
    // OR
    // friend void  
    //friend ostream& fun(ostream &o , complex c1);
//     ostream& fun(ostream &o , complex c1){
//     o<<c1.real << "+i" << c1.img << endl;
//     return o;
// }

};





int main(){

    complex c; 
    fun(cout , c);
   // operator<<(cout , c);
  //  c.fun(cout,c); //<< endl;

    return 0;


}