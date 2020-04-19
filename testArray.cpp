#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5};
    cout << arr[5] << " " << arr[7] << endl;
    cout << arr[11] << " " << arr[12] << endl;
    cout << &arr[10] << " " << &arr[9] << " " << &arr[8] << " " << &arr[7] << ' ' << &arr[11] << endl;
    return 0;

}