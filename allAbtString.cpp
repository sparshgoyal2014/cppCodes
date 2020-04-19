#include<iostream>
#include<string.h>
using namespace std;


int main(){
    string str1 = "hello";

    string str2;

    str2  = str1;

    cout << str1 << "   " << str2 << endl;

   // cout << strlen(str1) << endl;
   cout << sizeof(int) << endl;
   cout << str1.size() << endl;
   cout << "*********************" << endl;
   cout << str1.length() << endl;
   cout << "*********************" << endl;
   cout << sizeof(char) << endl;
   cout << sizeof(string) << endl;
   cout << sizeof(str1) << endl;

    //char ch1[] = "world";
    //char ch2[] = ch1;   we an not iniialize it;

    return 0; 
}