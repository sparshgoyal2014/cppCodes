#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    char temp = 'a';
    // char temp2 = "b"; // its wrong using double quotess to initialize char plzz read the error/...
    cout << temp << endl;
    cout << (int)temp << endl;

    char name[10] = {'j', 'o', 'h', 'n'};  // rest are 0
    cout << name << endl;

    char name2[] = "name2";
    cout << name2 << endl;
    // name2[0] = "this is changd name";  // you can't directly modify the array you have to change it element by element 
    // cin>> name2;

    // cout << name2 << endl;

    gets(name2);
    cout <<name2 <<  endl;

    return 0;

}