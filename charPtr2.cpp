#include<iostream>
using namespace std;

int main(){
    char *name = "s";   // character pointer points to the const string literal

    char name2[] = "spartsh";   // it is array of chars {'s', 'p', 'a', 'r', 't', 's', 'h', '/0'}
    cout << *name2 << endl;
    char *name3 = name2;   // name2 is base Address   

    cout << "name3[2]= " << name3[2] << endl;

    string str = "string Literal";
   //char *name4 = str;   // not possible
    //char name5[] = str;  // not possible


    string name6 = {'a', 'b', 'c'};   // implicitly conversion of c-strings to string literal

   // char *name7 = {'a', 'b', 'e'};  // not possible , it requires only one initializer that is string literal not array of chars
   // cout << name7 << endl;

    cout << name << "  " << name2 << "   " << name3  << endl;
    cout << name6 << endl;


    return 0; 
}


// there is difference between these two:-
// {'a', 'b', 'c'}    and   "abc"

// first is array of chars    and 2nd is string literal


// char Pointer are also known as c-Style Strings