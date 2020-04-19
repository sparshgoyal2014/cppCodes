#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }

    // arr[5] = {6,7,8,9,4}// we cant do that

    int *ptr = new int[5];
    cout << ptr << endl;

    delete []ptr;

    ptr = new int[10];

    cout << ptr << endl;

    return 0;
}