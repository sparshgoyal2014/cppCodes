#include<iostream>
using namespace std;

int main(){
    
    /*
    string s = "abc";
    s[1] = 't';
    s = "sfsf";

    cout << s << endl;
    cout << s+1 << endl;
    */

   char c[] = "abcv";
   cout << &c[1] << endl;

   int arr[] = {1,2,3,};
   cout << &arr[1] <<endl;

    return 0;
}