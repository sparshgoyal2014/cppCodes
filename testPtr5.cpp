#include<iostream>
using namespace std;

int main(){
    int arr[5] = {0,1,2,3,4};
    int *ptr = &arr;   //  give error : bcozzz &arr can only be used in (*ptr) not in *ptr.....
    cout << &arr << endl;
    cout << *ptr << endl;


    return 0;
}