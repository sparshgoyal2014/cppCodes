#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
    /////////////////**************first code*******************///////////////
//   string arr;

//     getline(cin , arr);
//     cout << arr;
//     return 0;
///////////////////////////////////////////////////

// char name[] = "spartsh";
// name.push_back('a');   // can't possible..... as name is not the object

char arr[] = "char strings";
string str = "string";

cout << strlen(arr) << endl; // must include cString library to use functions on C-Style strings
cout << sizeof(arr) << endl;

cout << strlen(str) << endl;
return 0;

}


// c-Style Strings//
// this is basically a char array with null terminator
// strlen
//sizeof
//str.size()
// 



