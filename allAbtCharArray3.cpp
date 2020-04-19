#include<iostream>
#include<string.h>
using namespace std;


int main(){

    char test[] = {"name"};

    cout << &test <<endl;

    //test++;    // we can not modify test;  // as it is a constant pointer

    cout << test + 1 << endl;   // ame

    cout << &test << endl;
    cout << &test +1 << endl;
    cout << &test[1] << endl;  // compiler reads from right to left

    char ch[] = "assd";
    char ch2[200];
   // ch2 = ch;
    char str[200] = {"hello"};
   // char str[6] = "hello"; // gives run time error because we cannot concatenate
    //str = ['h' 'e' 'l' 'l' 'o' '\0']   //because there is no enough space to
    // add more strings  similar is in the case of char str[]   because here
    //size is not defined it means only 6 sized array is created
     char str2[100];

     strcpy(str2 , str);
     cout << str << endl;
    cout << str2 << endl;

    char str3[] = {"world"};   // understanding string litereal is very difficult concept

    strcat(str , str3);

    cout << str << "    " << str3 << endl;

    cout << strlen(str) << " " << strlen(str2) << " " << strlen(str3) << endl;
 
  // more more info.  must watch  ......https://www.tutorialspoint.com/cplusplus/cpp_strings.htm
    return 0;
}