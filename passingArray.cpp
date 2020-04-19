#include<iostream>
using namespace std;


inline void fun(int* p){    // u can define function anywhere below int main   above int main  
    for(int i=0 ; i<5; i++){
        cout << *(p+i) << endl;
    }
}

//C++ does not allow to pass an entire array as an argument to a function.
// However, You can pass a pointer to an array by specifying the array's name without an index.

int main(){
    int size = 5;
    int arr[size] = {1,2,3,4,5};

    fun(arr);

    return 0;
}