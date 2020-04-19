#include<iostream>
using namespace std;

void displayArray(int arr[], int n){   // this function is passed by address
    // we can't do that
    // sizepf(arr)/sizeof(arr[0])   // because here in this context arr act as pointer

    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    displayArray(arr, sizeof(arr)/sizeof(arr[0]));   // here arr is passed as pointer   

    return 0;
}

//as arr is passed as address so we can change the actual parameter  // must watch bari's video