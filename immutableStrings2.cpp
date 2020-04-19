#include<iostream>
using namespace std;

int main(){
    char *ptr1 = "hello";
   // ptr1[0] = 'a';

    char *ptr2 = (char *)"world";
  //  ptr2[0] = 'b';

    cout << ptr1 << "    " << ptr2 << endl;
    return 0;
}