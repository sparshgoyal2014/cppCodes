#include<iostream>
using namespace std;

int main(){
    char ch[] = "hello";  // cout << ch[0]; => *(ch+0) => 'h';
    cout << ch << endl;

    char *p = "welcome"; // char p[] = welcome;
    cout << p << endl;
    // char *chp[5]; chp[0],chp[1],.....,chp[4]
    //chp[0] = "first";
    // chp[1] = "second";
    //



    //
    //cout << chp[0] << endl;


    char *chp[] = {"first" , "second" , "third"}; // its like array inside array
    cout << chp[1] << endl;  // *(chp+1) => (points to the second element) => second
    cout << *(chp+2) << endl; //third
    cout << *(chp+0) << endl;


    return 0;
}
// watch youtube vio=deo on "pointer to character array " OF BRIGHT VARGHESE 