#define pi 3.145
#define pi 3.14 // recent value of pi is taken.....
#define c cout
#define sqr(x) (x*x) 
#define msg(x) #x

#ifndef pi // if not defined then define pi equals 3....
#define pi 3
#endif

#define max(x,y) (x>y?x:y)


#include<iostream>
using namespace std;
int main(){

    cout << pi + 1 << endl;
    c<<pi<< endl;
    cout << sqr(5) << endl;
    cout << msg(hello) << endl;
    cout << msg("nfksn") << endl;
    cout << max(10,12) << endl;
    return 0;

}