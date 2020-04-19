#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1};
    for(int i=0;i<5;i++){
        cout << arr[i] << ' ';
    }

    cout << endl;

    char arr2[5] = {'a'};  // remaining will be 0 initialized (0 is the askii value of null character)

    for(int i=0;i<5;i++){
        cout << arr2[i] << endl;
    }

    return 0;
}