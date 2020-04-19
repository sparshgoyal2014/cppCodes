#include<iostream>
using namespace std;

void manipulateArray(char arr[]){
    arr[3] = 'r';
}

int main(){
    char arr[] = "this";
    manipulateArray(arr);
    cout << arr << endl;

    char *arr2 = "that";
    manipulateArray(arr2);
    cout << arr2 << endl;  // run time error

    return 0;
}