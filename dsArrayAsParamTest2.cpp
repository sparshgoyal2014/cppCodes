#include<iostream>
using namespace std;

// void fun(int arr[]){
//     for(int i=0; i< sizeof(arr)/sizeof(arr[0]); i++){
//         cout << arr[i] ;
//     }
// }


void fun2(int arr[], int n){

    for(int i=0; i<n; i++){
        cout << arr[i] ;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};

    // fun(arr);

    fun2(arr, (sizeof(arr)/sizeof(arr[0])));

    return 0;
}

