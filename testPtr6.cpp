#include<iostream>
using namespace std;

int main(){
    int arr[5] = {0,1,2,3,4};
    int *ptr = arr+2;

    cout << *ptr << endl;
    return 0;
}