#include<iostream>

using namespace std;

int main()
{


   // int num = 5;
   // int* pnum;
char num = '5';
char* pnum = &num;

    cout<< "value in num :  " << num << endl;

    cout<< " address of Variable num is :  " << pnum << endl;

    cout<< " value of num using pointer variable : " << *pnum << endl; 


    string name = "spartsh goyal" ;
    string* pname = &name;

    cout<< "name is : " << name << endl;

    cout<< " address of variable name : " << pname << endl;

    cout<< " name using pointers : " << *pname << endl;

    return 0;

}