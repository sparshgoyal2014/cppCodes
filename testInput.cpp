#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout << " enter your values: " << endl;
    for(int i=0; i<5; i++){
        cin>> arr[i];
    }

    cout << "your entered values are: " << endl;
    for(int i=0; i<5; i++){
        cout << arr[i] << endl;
    }

    return 0;
}