#include<iostream>
using namespace std;

int test(){
    return 5;
}

int main(){
    int arr[test()];

    for(int i=0; i<test(); i++){
        arr[i] = i;
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}